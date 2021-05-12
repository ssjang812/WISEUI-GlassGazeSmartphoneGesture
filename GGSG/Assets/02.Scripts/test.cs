using Lean.Touch;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    public float gain;

    public void Test()
    {
        
    }

    private void Update()
    {
        transform.Translate(LeanGesture.GetScreenDelta() * Time.deltaTime * gain);
    }
}
