using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class RPC_EyegazeState : MonoBehaviour
{
    public static string gazeOnObject = null;

    private GameObject textObj;
    private TMP_Text textScript;

    // Start is called before the first frame update
    void Start()
    {
        textObj = GameObject.FindGameObjectWithTag("DebugText");
        textScript = textObj.GetComponent<TMP_Text>();
    }

    [PunRPC]
    void RPC_GazeOnObj(string gazeOnObject)
    {
        //Debug.Log("RPC_GazeStateAnnounce : " + gazeOnObject);
        RPC_EyegazeState.gazeOnObject = gazeOnObject;
        // 로그에 기록
        textScript.SetText("Gaze is at " + gazeOnObject);
    }

    [PunRPC]
    void RPC_GazeNull()
    {
        //Debug.Log("RPC_GazeNull");
        RPC_EyegazeState.gazeOnObject = null;
        // 로그에 기록
        textScript.SetText("Gaze is at " + gazeOnObject);
    }
}
