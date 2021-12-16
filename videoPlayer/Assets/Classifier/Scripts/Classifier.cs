using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;


public class Classifier : MonoBehaviour
{
    [SerializeField]
    private string modelPath = "undefined";

    private LinkedList<Vector3> acc = new LinkedList<Vector3>();

    private LinkedList<Vector3> lin = new LinkedList<Vector3>();

    private LinkedList<Vector3> gra = new LinkedList<Vector3>();

    private LinkedList<Vector3> gyr = new LinkedList<Vector3>();

    private int steps = 0;

    const int max_steps = 396;

    private static TensorFlowLite.Interpreter Interpreter;

    static float[,] inputs = new float[396, 6];

    static float[] outputs = new float[6];

    // Start is called before the first frame update
    void Start()
    {
        byte[] modelData = TensorFlowLite.FileUtil.LoadFile(modelPath);

        var options = new TensorFlowLite.InterpreterOptions()
        {
            threads = 2,
            useNNAPI = false
        };

        Interpreter = new TensorFlowLite.Interpreter(modelData, options);

        Interpreter.AllocateTensors();
    }

    void CollectData()
    {
        var _acc = new Vector3(Input.acceleration.x, Input.acceleration.y, Input.acceleration.z);
        var _gyr = Input.gyro.rotationRate;
        var _gra = Input.gyro.gravity;
        var _lin = _acc - _gra;

        acc.AddLast(_acc);
        gra.AddLast(_gra);
        gyr.AddLast(_gyr);
        lin.AddLast(_lin);

        if (steps >= max_steps)
        {
            acc.RemoveFirst();
            gra.RemoveFirst();
            gyr.RemoveFirst();
            lin.RemoveFirst();
        }
        else steps++;

        // map sensor
        int i = 0, j = 0;
        foreach(var collection in new List<LinkedList<Vector3>>() { acc, gyr })
        {
            i = 0;
            foreach(var entry in collection)
            {
                inputs[i, j + 0] = entry.x;

                inputs[i, j + 1] = entry.y;

                inputs[i, j + 2] = entry.z;
                
                i++;
            }
            j += 3;
        }

        Interpreter.SetInputTensorData(0, inputs);

        Interpreter.Invoke();

        Interpreter.GetOutputTensorData(0, outputs);

        var _out = new List<float>(outputs);

        Debug.Log($"prediction : {string.Join(",", _out)}");

        int index = _out.FindIndex(x => x > 0.75);

        Debug.Log($"index : {index}");
    }

    // Update is called once per frame
    void Update()
    {
        //CollectData();
    }
}
