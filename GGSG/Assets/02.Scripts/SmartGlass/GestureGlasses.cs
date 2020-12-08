using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GestureGlasses : MonoBehaviour
{
    private PhotonView PV;
    private ExperimentManager experimentManager;

    void Start()
    {
        PV = GameObject.FindGameObjectWithTag("WorldEvent").GetComponent<PhotonView>();
        experimentManager = GameObject.FindGameObjectWithTag("ExperimentManager").GetComponent<ExperimentManager>();
    }
    public void OnGesture()
    {
        PV.RPC("RPC_PinchGlasses", RpcTarget.All, gameObject.tag);

        //정답인지 체크
        if((RPC_ExperimentState.taskNow == RPC_ExperimentState.Task.FindSameObject) && (RPC_ExperimentState.target.ToString() == RPC_GestureGlasses.pinchObjGlasses))
        {
            //정답이라고기록, 다음 스테이지로
            experimentManager.NextTaskPreprocess();
        }
    }
}
