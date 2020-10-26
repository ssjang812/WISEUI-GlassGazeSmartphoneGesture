using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RPC_UISyncManager : MonoBehaviour
{
    public Button[] btn;
    public Toggle[] tog;
    public TMP_Dropdown[] TMPdrp;
    public Slider[] sld;
    public InputField[] inpFld;

    [PunRPC]
    void RPC_BtnSync(int UINum)
    {
        //btn[UINum].GetComponent<UISync>().RPCall = true;
    }

    [PunRPC]
    void RPC_TogSync(int UINum, bool isOn)
    {
        tog[UINum].GetComponent<UISync>().RPCall = true;
        tog[UINum].isOn = isOn;
    }

    [PunRPC]
    void RPC_TMPdrpSync(int UINum, int value)
    {
        TMPdrp[UINum].GetComponent<UISync>().RPCall = true;
        TMPdrp[UINum].value = value;
        Debug.Log("RPC_TMPdrpSync : " + value);
    }

    [PunRPC]
    void RPC_SldSync(int UINum, float value)
    {
        sld[UINum].GetComponent<UISync>().RPCall = true;
        sld[UINum].value = value;
        Debug.Log("RPC_SldSync : " + value);
    }

    [PunRPC]
    void RPC_InpFldSync(int UINum, string text)
    {
        inpFld[UINum].GetComponent<UISync>().RPCall = true;
        inpFld[UINum].text = text;
    }
}
