using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;


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

    private TensorFlowLite.Interpreter Interpreter;

    float[,] inputs = new float[396, 3];

    float[] outputs = new float[6];

    // Start is called before the first frame update
    void Start()
    {
        Input.gyro.enabled = true;

        byte[] modelData = TensorFlowLite.FileUtil.LoadFile(modelPath);

        var options = new TensorFlowLite.InterpreterOptions()
        {
            threads = 2,
            useNNAPI = false
        };

        Interpreter = new TensorFlowLite.Interpreter(modelData, options);

        Interpreter.AllocateTensors();
    }

    Vector3 QtoV(Quaternion q)
    {
        var w = q.w;
        var x = q.x;
        var y = q.y;
        var z = q.z;
        var roll = Mathf.Atan2(2 * y * w - 2 * x * z, 1 - 2 * y * y - 2 * z * z);
        var pitch = Mathf.Atan2(2 * x * w - 2 * y * z, 1 - 2 * x * x - 2 * z * z);
        var yaw = Mathf.Asin(2 * x * y + 2 * z * w);
        return new Vector3(roll, pitch, yaw);
    }

    void CollectData()
    {
        // var _acc = new Vector3(Input.acceleration.x, Input.acceleration.y, Input.acceleration.z);
        var _gyrq = Input.gyro.attitude;

        // Debug.Log($"gyro data raw : {string.Join(",", _gyrq)}");
        var _gyr = QtoV(_gyrq);

        // Debug.Log($"gyro data : {string.Join(",", _gyr)}");
        // var _gra = Input.gyro.gravity;
        // var _lin = _acc - _gra;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            // acc.AddLast(_acc);
            // gra.AddLast(_gra);
            gyr.AddLast(_gyr);
            // lin.AddLast(_lin);
            steps++;    
        }

        while (steps > max_steps)
        {
            // acc.RemoveFirst();
            // gra.RemoveFirst();
            gyr.RemoveFirst();
            // lin.RemoveFirst();
            steps--;
        }

        // map sensor
        i = 0;
        j = 0;
        foreach (var collection in new List<LinkedList<Vector3>>() { gyr })
        {
            i = 0;
            foreach (var entry in collection)
            {
                inputs[i, j + 0] = entry.x;
                inputs[i, j + 1] = entry.y;
                inputs[i, j + 2] = entry.z;
                i += 1;
            }
            j += 3;
        }

        Interpreter.SetInputTensorData(0, inputs);

        Interpreter.Invoke();

        Interpreter.GetOutputTensorData(0, outputs);

        var _out = new List<float>(outputs);
        Debug.Log($"prediction : {string.Join(",", _out)}");
        var prediction = 0;
        if (_out[0] > 0.99)
            prediction = 0;
        else
        {
            _out[0] = 0;
            var maxvalue = _out.Max();
            if (maxvalue < 0.01)
            {
                prediction = -1;
            }
            else
            {
                prediction = _out.IndexOf(_out.Max());
            }

        }

        Debug.Log($"index : {prediction}");

        if (prediction == 1)
            GameObject.Find("1LeftWink").gameObject.GetComponent<Button>().onClick.Invoke();
        else if (prediction == 2)
            GameObject.Find("2RightWink").gameObject.GetComponent<Button>().onClick.Invoke();
        else if (prediction == 3)
            GameObject.Find("3BothWink").gameObject.GetComponent<Button>().onClick.Invoke();
        else if (prediction == 4)
            GameObject.Find("4Raise").gameObject.GetComponent<Button>().onClick.Invoke();
        else if (prediction == 5)
            GameObject.Find("5Lower").gameObject.GetComponent<Button>().onClick.Invoke();

    }

    // Update is called once per frame
    void Update()
    {
        CollectData();
    }
}
