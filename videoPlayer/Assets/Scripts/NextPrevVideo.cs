using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;


public class NextPrevVideo : MonoBehaviour
{
    private VideoPlayer video;
    private int curIndex = 0;
    private PlayPause playPause;
    public List<VideoClip> videoClips;
    


    private void Awake(){
        video = GetComponent<VideoPlayer>();
        playPause = GetComponent<PlayPause>();
    }


    public void NextVideo(){
        playPause.isPlaying = true;
        if(curIndex == videoClips.Count-1){
            curIndex = 0;
            video.clip = videoClips[curIndex];
        }
        else{
            curIndex++;
            video.clip = videoClips[curIndex];
        }
    }
    public void PrevVideo(){
        playPause.isPlaying = true;
        if(curIndex == 0){
            curIndex = videoClips.Count-1;
            video.clip = videoClips[curIndex];
        }
        else{
            curIndex--;
            video.clip = videoClips[curIndex];
        }
    }
}
