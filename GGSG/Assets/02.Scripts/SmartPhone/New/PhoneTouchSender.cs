using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhoneTouchSender : MonoBehaviour
{
    public PhotonView PV;

    public void OnChairButtonDown()
    {
        PV.RPC("RPC_ChairButtonDown", RpcTarget.All);
    }
    public void OnChairButtonUp()
    {
        PV.RPC("RPC_ChairButtonUp", RpcTarget.All);
    }

    public void OnPointerDown()
    {
        PV.RPC("RPC_PointerDown", RpcTarget.All);
    }

    public void OnPointerUp()
    {
        PV.RPC("RPC_PointerUp", RpcTarget.All);
    }
}
