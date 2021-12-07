using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class PlayPause : MonoBehaviour
{

    private VideoPlayer video;
    public bool isPlaying = true;

    private void Awake(){
        video = GetComponent<VideoPlayer>();
    }
    public void togglePlaying(){
        if(isPlaying){
            video.Pause();
            isPlaying = false;
        }
        else{
            video.Play();
            isPlaying = true;
        }
    }
}
