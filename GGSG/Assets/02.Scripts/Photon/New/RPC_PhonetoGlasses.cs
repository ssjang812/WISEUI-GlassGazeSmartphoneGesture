using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RPC_PhonetoGlasses : MonoBehaviour
{
    public static Vector3 swipeDelta;
    public static Vector3 gyroDelta;

    /*
    public static UnityEvent event_syncSwipeDelta;
    public static UnityEvent event_syncGyroDelta;
    */
    public static UnityEvent event_chairButtonDown;
    public static UnityEvent event_chairButtonUp;
    public static UnityEvent event_pointerDown;
    public static UnityEvent event_pointerUp;
    public static UnityEvent event_nextButtonDeactivated;

    void Start()
    {
        /*
        if (event_syncSwipeDelta == null)
            event_syncSwipeDelta = new UnityEvent();
        if (event_syncGyroDelta == null)
            event_syncGyroDelta = new UnityEvent();
        */
        if (event_chairButtonDown == null)
            event_chairButtonDown = new UnityEvent();
        if (event_chairButtonUp == null)
            event_chairButtonUp = new UnityEvent();
        if (event_pointerDown == null)
            event_pointerDown = new UnityEvent();
        if (event_pointerUp == null)
            event_pointerUp = new UnityEvent();
        if (event_nextButtonDeactivated == null)
            event_nextButtonDeactivated = new UnityEvent();
    }

    [PunRPC]
    void RPC_SyncSwipeDelta(Vector3 input)
    {
        swipeDelta = input;
        //event_syncSwipeDelta.Invoke();
    }

    [PunRPC]
    void RPC_SyncGyroDelta(Vector3 input)
    {
        gyroDelta = input;
        //event_syncGyroDelta.Invoke();
    }

    [PunRPC]
    void RPC_ChairButtonDown()
    {
        event_chairButtonDown.Invoke();
        //Debug.Log("RPC_ChairButtonDown!");
    }

    [PunRPC]
    void RPC_ChairButtonUp()
    {
        event_chairButtonUp.Invoke();
        //Debug.Log("RPC_ChairButtonUp!");
    }

    [PunRPC]
    void RPC_PointerDown()
    {
        event_pointerDown.Invoke();
        Debug.Log("RPC_PointerDown!");
    }

    [PunRPC]
    void RPC_PointerUp()
    {
        event_pointerUp.Invoke();
        //Debug.Log("RPC_PointerUp!");
    }

    [PunRPC]
    void RPC_NextButtonDeactivated()
    {
        event_nextButtonDeactivated.Invoke();
    }
}
