using Photon.Pun;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UISync : MonoBehaviour
{
    public GameObject SyncManager;
    private PhotonView PV;
    public GameObject UI;
    public int UINum;
    public bool RPCall;


    // Start is called before the first frame update
    void Start()
    {
        PV = SyncManager.GetComponent<PhotonView>();
        UINum = Int32.Parse(Regex.Match(name, @"\d+").Value);
        RPCall = false;
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void BtnSync()
    {
        if (!RPCall)
        {
            //Button btn = UI.GetComponent<Button>();
            //PV.RPC("RPC_BtnSync", RpcTarget.All, UINum, value);
        }
        RPCall = false;
    }

    public void TogSync()
    {
        if (!RPCall)
        {
            Toggle tog = UI.GetComponent<Toggle>();
            PV.RPC("RPC_TogSync", RpcTarget.All, UINum, tog.isOn);
        }
        RPCall = false;
    }

    public void TmpdrpSync()
    {
        if (!RPCall)
        {
            TMP_Dropdown drp = UI.GetComponent<TMP_Dropdown>();
            PV.RPC("RPC_TMPdrpSync", RpcTarget.All, UINum, drp.value);
        }
        RPCall = false;
    }

    public void SldSync()
    {
        if(!RPCall)
        {
            Slider sld = UI.GetComponent<Slider>();
            PV.RPC("RPC_SldSync", RpcTarget.All, UINum, sld.value);
        }
        RPCall = false;
    }

    public void InpFldSync()
    {
        if (!RPCall)
        {
            InputField inpFld = UI.GetComponent<InputField>();
            PV.RPC("RPC_InpFldSync", RpcTarget.All, UINum, inpFld.text);
        }
        RPCall = false;
    }
}
