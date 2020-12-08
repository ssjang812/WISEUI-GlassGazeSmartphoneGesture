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

    /*
    private GameObject textObj;
    private TMP_Text textScript;
    private GameObject textObj2;
    private TMP_Text textScript2;
    */

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
        /*
        textObj = GameObject.FindGameObjectWithTag("DebugText");
        textScript = textObj.GetComponent<TMP_Text>();
        textObj2 = GameObject.FindGameObjectWithTag("DebugText2");
        textScript2 = textObj2.GetComponent<TMP_Text>();
        */

        WorldEvent = GameObject.FindGameObjectWithTag("WorldEvent");
        PV = WorldEvent.GetComponent<PhotonView>();
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
        /*
        textScript.SetText("Pinch");
        textScript2.SetText("GazeAtNull");
        */

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
        /*
        textScript.SetText("OneFingerTap");
        textScript2.SetText("GazeAtNull");
        Debug.Log("FingerTap : " + finger.TapCount);
        */

        PV.RPC("RPC_OneFingerTapPhone", RpcTarget.All);
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
