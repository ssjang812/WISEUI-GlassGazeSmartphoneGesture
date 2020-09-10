using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyegazeState : MonoBehaviour
{
    public GameObject EyegazeManager;
    EyegazeManager eyegazeManager;

    // Start is called before the first frame update
    void Start()
    {
        eyegazeManager = EyegazeManager.GetComponent<EyegazeManager>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetGazeOn()
    {
        eyegazeManager.SetGazeOn(gameObject.name);
    }

    public void SetGazeNull()
    {
        eyegazeManager.SetGazeNull();
    }
}