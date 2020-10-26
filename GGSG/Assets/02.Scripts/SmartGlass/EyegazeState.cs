using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyegazeState : MonoBehaviour
{
    private GameObject EyegazeStateManager;
    private PhotonView PV;


    // Start is called before the first frame update
    void Start()
    {
        EyegazeStateManager = GameObject.FindGameObjectWithTag("WorldEvent");
        PV = EyegazeStateManager.GetComponent<PhotonView>();
    }

    // Update is called once per frame
    void Update()
    {

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