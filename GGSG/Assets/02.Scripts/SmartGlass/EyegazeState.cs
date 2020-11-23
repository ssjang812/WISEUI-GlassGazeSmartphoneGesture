using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyegazeState : MonoBehaviour
{
    private GameObject WorldEvent;
    private PhotonView PV;

    void Start()
    {
        WorldEvent = GameObject.FindGameObjectWithTag("WorldEvent");
        PV = WorldEvent.GetComponent<PhotonView>();
    }

    public void SetGazeOn()
    {
        Debug.Log("SetGazeOn : " + gameObject.name);
        PV.RPC("RPC_GazeOnObj", RpcTarget.All, gameObject.name);
    }

    public void SetGazeNull()
    {
        Debug.Log("SetGazeNull");
        PV.RPC("RPC_GazeNull", RpcTarget.All);
    }
}