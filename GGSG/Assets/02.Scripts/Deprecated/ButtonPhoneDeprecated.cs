using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ButtonPhoneDeprecated : MonoBehaviour
{
    private PhotonView PV;

    private GameObject btn1Obj;
    private GameObject btn2Obj;
    private GameObject btn3Obj;
    private GameObject btn4Obj;
    private Button btn1Btn;
    private Button btn2Btn;
    private Button btn3Btn;
    private Button btn4Btn;
    private EventTrigger btn1Trig;
    private EventTrigger btn2Trig;
    private EventTrigger btn3Trig;
    private EventTrigger btn4Trig;

    private bool isBtnDown;
    private bool isTouchGazeRdy;

    private string btnTag;


    private void Start()
    {
        isBtnDown = false;
        isTouchGazeRdy = false;

        PV = GameObject.FindGameObjectWithTag("WorldEvent").GetComponent<PhotonView>();

        btn1Obj = GameObject.FindGameObjectWithTag("Button1_FindSameImage");
        btn2Obj = GameObject.FindGameObjectWithTag("Button2_FindSameImage");
        btn3Obj = GameObject.FindGameObjectWithTag("Button3_FindSameImage");
        btn4Obj = GameObject.FindGameObjectWithTag("Button4_FindSameImage");

        btn1Btn = btn1Obj.GetComponent<Button>();
        btn2Btn = btn2Obj.GetComponent<Button>();
        btn3Btn = btn3Obj.GetComponent<Button>();
        btn4Btn = btn4Obj.GetComponent<Button>();

        btn1Trig = btn1Obj.GetComponent<EventTrigger>();
        btn2Trig = btn2Obj.GetComponent<EventTrigger>();
        btn3Trig = btn3Obj.GetComponent<EventTrigger>();
        btn4Trig = btn4Obj.GetComponent<EventTrigger>();

        btn1Btn.onClick.AddListener(TaskOnClick);
        btn2Btn.onClick.AddListener(TaskOnClick);
        btn3Btn.onClick.AddListener(TaskOnClick);
        btn4Btn.onClick.AddListener(TaskOnClick);

        EventTrigger.Entry entryPointerDown = new EventTrigger.Entry();
        entryPointerDown.eventID = EventTriggerType.PointerDown;
        entryPointerDown.callback.AddListener((data) => { OnPointerDownDelegate((PointerEventData)data); });
        btn1Trig.triggers.Add(entryPointerDown);
        btn2Trig.triggers.Add(entryPointerDown);
        btn3Trig.triggers.Add(entryPointerDown);
        btn4Trig.triggers.Add(entryPointerDown);

        EventTrigger.Entry entryPointerUp = new EventTrigger.Entry();
        entryPointerUp.eventID = EventTriggerType.PointerUp;
        entryPointerUp.callback.AddListener((data) => { OnPointerUpDelegate((PointerEventData)data); });
        btn1Trig.triggers.Add(entryPointerUp);
        btn2Trig.triggers.Add(entryPointerUp);
        btn3Trig.triggers.Add(entryPointerUp);
        btn4Trig.triggers.Add(entryPointerUp);
    }

    private void Update()
    {
        if (isBtnDown)
        {
            if(RPC_EyegazeGlasses.gazeOnObjGlasses != null)
            {
                isTouchGazeRdy = true;
            }
            else
            {
                isTouchGazeRdy = false;
            }
        }
        else
        {
            isTouchGazeRdy = false;
        }
    }

    void TaskOnClick()
    {
        PV.RPC("RPC_onClickPhone", RpcTarget.All, gameObject.tag);
    }

    public void OnPointerDownDelegate(PointerEventData data)
    {
        btnTag = gameObject.tag;
        isBtnDown = true;
    }

    public void OnPointerUpDelegate(PointerEventData data)
    {
        btnTag = gameObject.tag;
        if(isTouchGazeRdy)
        {
            PV.RPC("RPC_touchGaze", RpcTarget.All, gameObject.tag, RPC_EyegazeGlasses.gazeOnObjGlasses);
        }
        isBtnDown = false;
    }
}
