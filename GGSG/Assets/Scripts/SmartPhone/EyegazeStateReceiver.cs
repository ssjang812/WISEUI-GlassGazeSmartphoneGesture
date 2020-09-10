using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyegazeStateReceiver : MonoBehaviour
{
    public static string gazeOnObject = null;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [PunRPC]
    void RPC_GazeStateAnnounce(string gazeOnObject)
    {
        EyegazeStateReceiver.gazeOnObject = gazeOnObject;
    }
}
