using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuPanelMovement : MonoBehaviour
{
    public GameObject MenuPanel, MenuOrigPos, MenuActivePos;
    public bool Move_Menu_Panel, Move_Menu_Panel_Back;
    private float moveSpeed;
    private float tempMenuPos;

    private void Start()
    {
        MenuPanel.transform.position = MenuOrigPos.transform.position;
        moveSpeed = 10;
    }

    private void Update()
    {
        if(Move_Menu_Panel)
        {
            MenuPanel.transform.position = Vector3.Lerp(MenuPanel.transform.position, MenuActivePos.transform.position, moveSpeed * Time.deltaTime); // 델타타임 원리 찾아보자

            if(MenuPanel.transform.localPosition.x == tempMenuPos)
            {
                Move_Menu_Panel = false;
                MenuPanel.transform.position = MenuActivePos.transform.position;
                tempMenuPos = -999999999.99f;
            }
            if(Move_Menu_Panel)
            {
                tempMenuPos = MenuPanel.transform.localPosition.x;
            }
        }
        else if(Move_Menu_Panel_Back)
        {
            MenuPanel.transform.position = Vector3.Lerp(MenuPanel.transform.position, MenuOrigPos.transform.position, moveSpeed * Time.deltaTime);

            if (MenuPanel.transform.localPosition.x == tempMenuPos) // 로컬포지션 원리 찾아보자
            {
                Move_Menu_Panel_Back = false;
                MenuPanel.transform.position = MenuOrigPos.transform.position;
                tempMenuPos = -999999999.99f;
            }
            if (Move_Menu_Panel_Back)
            {
                tempMenuPos = MenuPanel.transform.localPosition.x;
            }
        }
    }

    public void MovePanel()
    {
        Move_Menu_Panel = true;
        Move_Menu_Panel_Back = false;
    }

    public void MovePanelBack()
    {
        Move_Menu_Panel_Back = true;
        Move_Menu_Panel = false;
    }
}
