using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyegazeManager : MonoBehaviour
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

    public void SetGazeOn(string gazeOnObject)
    {
        RPC_GazeStateAnnounce(gazeOnObject);
    }

    public void SetGazeNull()
    {
        RPC_GazeStateAnnounce(null);
    }
    
    [PunRPC]
    void RPC_GazeStateAnnounce(string gazeOnObject)
    {
        EyegazeManager.gazeOnObject = gazeOnObject;
    }
}
