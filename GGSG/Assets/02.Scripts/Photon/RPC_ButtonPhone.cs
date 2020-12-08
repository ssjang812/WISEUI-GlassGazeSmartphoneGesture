using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RPC_ButtonPhone : MonoBehaviour
{
    public static string onClickButton = null;

    public static UnityEvent event_onClickPhone;

    void Start()
    {
        if (event_onClickPhone == null)
            event_onClickPhone = new UnityEvent();
    }

    [PunRPC]
    void RPC_onClickPhone(string newOnClickButton)
    {
        // 로그에 기록
        onClickButton = newOnClickButton;
        event_onClickPhone.Invoke();
    }
}
