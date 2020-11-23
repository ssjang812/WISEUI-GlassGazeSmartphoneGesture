using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPC_Gesture : MonoBehaviour
{
    [PunRPC]
    void RPC_Pinch()
    {
        // 로그에 기록
        // Cross Device 제스쳐 판별 -> Cross-device trigger function call (각 디바이스마다 다르게 Implementation)
        if (RPC_EyegazeState.gazeOnObject != null)
        {
            // 로그에 기록
            // 만약 타겟 제스쳐 목표와 같다면 씬변경 + 추가로 로그에 기록
        }
    }

    [PunRPC]
    void RPC_OneFingerTap()
    {
        // 로그에 기록
        if(RPC_EyegazeState.gazeOnObject != null)
        {
            // 로그에 기록
            // 만약 타겟 제스쳐 목표와 같다면 씬변경 + 추가로 로그에 기록
        }
    }

    [PunRPC]
    void RPC_SwipeDown()
    {
        // 로그에 기록
        if (RPC_EyegazeState.gazeOnObject != null)
        {
            // 로그에 기록
            // 만약 타겟 제스쳐 목표와 같다면 씬변경 + 추가로 로그에 기록
        }
    }
}
