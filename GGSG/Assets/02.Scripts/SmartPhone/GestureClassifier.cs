using Lean.Touch;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GestureClassifier : MonoBehaviour
{
    public LeanFingerFilter Use = new LeanFingerFilter(true);

    private GameObject textObj;
    private TMP_Text textScript;
    private GameObject textObj2;
    private TMP_Text textScript2;

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
        textObj = GameObject.FindGameObjectWithTag("DebugText");
        textScript = textObj.GetComponent<TMP_Text>();
        textObj2 = GameObject.FindGameObjectWithTag("DebugText2");
        textScript2 = textObj2.GetComponent<TMP_Text>();
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
            Pinch();
        }
	}

	public void Pinch()
    {
        textScript.SetText("Pinch");
        textScript2.SetText("GazeAtNull");
        Debug.Log("Pinch");
        if (RPC_EyegazeState.gazeOnObject != null)
        {
            textScript2.SetText("GazePinch");
        }
    }

    public void OneFingerTap(LeanFinger finger)
    {
        textScript.SetText("OneFingerTap");
        textScript2.SetText("GazeAtNull");
        Debug.Log("FingerTap : " + finger.TapCount);
        if (RPC_EyegazeState.gazeOnObject != null)
        {
            textScript2.SetText("GazeOneFinger");
        }
    }
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

    public void SwipeDown(LeanFinger finger)
    {
        textScript.SetText("SwipeDown");
        textScript2.SetText("GazeAtNull");
        Debug.Log("SwipeDown");
        if (RPC_EyegazeState.gazeOnObject != null)
        {
            textScript2.SetText("GazeSwipeDown");
        }
    }
}
