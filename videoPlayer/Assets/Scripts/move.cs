using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move : MonoBehaviour
{
    public void moveForward(){
        if(transform.position.z >2)
            transform.Translate (0f, 0f, -0.3f);
    }
    public void moveBackward(){
        if(transform.position.z <3.7)
        transform.Translate (0f, 0f, 0.3f);  
    }
}
