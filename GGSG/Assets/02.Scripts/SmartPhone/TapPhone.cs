using Lean.Touch;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapPhone : MonoBehaviour
{
	protected virtual void OnEnable()
	{
		LeanTouch.OnFingerExpired += HandleFingerExpired;
	}

	protected virtual void OnDisable()
	{
		LeanTouch.OnFingerExpired -= HandleFingerExpired;
	}

	private void HandleFingerExpired(LeanFinger finger)
	{
		Classify(finger);
	}

	public void Classify(LeanFinger finger)
	{

	}
}
