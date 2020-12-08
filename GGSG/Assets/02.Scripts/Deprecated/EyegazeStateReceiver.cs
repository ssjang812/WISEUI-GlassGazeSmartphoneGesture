using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyegazeStateReceiver : MonoBehaviour
{
    public static string gazeOnObject = null;

    [PunRPC]
    void RPC_GazeOnObj(string gazeOnObject)
    {
        Debug.Log("RPC_GazeOnObj : gaze is on at " + gazeOnObject);
        EyegazeStateReceiver.gazeOnObject = gazeOnObject;
    }

    [PunRPC]
    void RPC_GazeNull()
    {
        Debug.Log("RPC_GazeNull");
        RPC_EyegazeGlasses.gazeOnObjGlasses = null;
    }
}
