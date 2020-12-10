using Lean.Touch;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

// 동기화는 중요 데이터, 각 이벤트의 발생여부, 데이터 기록과 같이 각 디바이스에서 동시에 일어나야하는것들만
// 실험의 흐름과 다음으로 진행여부 판단과같은 결정부는 둘중 한곳에서만 해야지 혼서이 생기지 않는다. -> 로컬에서 진행하고 결과만 동기화
public class GesturePhone : MonoBehaviour
{
    public LeanFingerFilter Use = new LeanFingerFilter(true);

    private GameObject WorldEvent;
    private PhotonView PV;
    private ExperimentManager experimentManager;


#if UNITY_EDITOR
    protected virtual void Reset()
    {
        Use.UpdateRequiredSelectable(gameObject);
    }
#endif
    protected virtual void Awake()
    {
        Use.UpdateRequiredSelectable(gameObject);
    }

    void Start()
    {
        WorldEvent = GameObject.FindGameObjectWithTag("WorldEvent");
        PV = WorldEvent.GetComponent<PhotonView>();
        experimentManager = GameObject.FindGameObjectWithTag("ExperimentManager").GetComponent<ExperimentManager>();
    }



    protected virtual void Update()
	{
		// Get the fingers we want to use
		var fingers = Use.GetFingers();

		// Calculate pinch scale, and make sure it's valid
		var pinchScale = LeanGesture.GetPinchScale(fingers);

		if (pinchScale > 1.13f)
		{
            Debug.Log("Pinch : " + pinchScale);
            PinchPhone();
        }
	}

	public void PinchPhone()
    {
        PV.RPC("RPC_PinchPhone", RpcTarget.All);

        // Cross Device 제스쳐 판별 -> Cross-device trigger function call (각 디바이스마다 다르게 Implementation)
        if (RPC_EyegazeGlasses.gazeOnObjGlasses != null)
        {
            // 로그에 기록
            // 만약 타겟 제스쳐 목표와 같다면 씬변경 + 추가로 로그에 기록
        }
    }

    public void OneFingerTapPhone(LeanFinger finger)
    {
        PV.RPC("RPC_OneFingerTapPhone", RpcTarget.All);
        
        // GazeTouch 발생여부 판단
        if(RPC_EyegazeGlasses.gazeOnObjGlasses != null)
        {
            PV.RPC("RPC_gazeTouch", RpcTarget.All);

            // retrieve info 시나리오(4)에서의 정답인지 판별
            if(RPC_ExperimentState.taskNow == RPC_ExperimentState.Task.RetrieveInfo)
            {
                switch (RPC_ExperimentState.target)
                {
                    case RPC_ExperimentState.Target.Sphere:
                        if (RPC_EyegazeGlasses.gazeOnObjGlasses == "Sphere_RetrieveInfo")
                            experimentManager.NextTaskPreprocess();
                        break;
                    case RPC_ExperimentState.Target.Cube:
                        if (RPC_EyegazeGlasses.gazeOnObjGlasses == "Cube_RetrieveInfo")
                            experimentManager.NextTaskPreprocess();
                        break;
                    case RPC_ExperimentState.Target.Capsule:
                        if (RPC_EyegazeGlasses.gazeOnObjGlasses == "Capsule_RetrieveInfo")
                            experimentManager.NextTaskPreprocess();
                        break;
                    case RPC_ExperimentState.Target.Cylinder:
                        if (RPC_EyegazeGlasses.gazeOnObjGlasses == "Cylinder_RetrieveInfo")
                            experimentManager.NextTaskPreprocess();
                        break;
                    default:
                        break;
                }
                // 다음 실험으로
                experimentManager.NextTaskPreprocess();
            }
        }
    }
    /*
    public void TwoFingerTap(LeanFinger finger)
    {
        textScript.SetText("TwoFingerTap");
        textScript2.SetText("GazeAtNull");
        Debug.Log("TwoFingerTap" + finger.TapCount);
        if (RPC_EyegazeState.gazeOnObject != null)
        {
            textScript2.SetText("GazeTwoFinger");
        }
    }
    */

    public void SwipeDownPhone(LeanFinger finger)
    {
        /*
        textScript.SetText("SwipeDown");
        textScript2.SetText("GazeAtNull");
        Debug.Log("SwipeDown");
        */

        PV.RPC("RPC_SwipeDownPhone", RpcTarget.All);
    }
}
