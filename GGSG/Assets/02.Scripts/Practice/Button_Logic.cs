using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Button_Logic : MonoBehaviour
{
    public GameObject mainPanel, secondPanel;
    public Button arrowBtn;

    private void Start()
    {
        secondPanel.SetActive(false);
    }

    public void GoToSecondpanel()
    {
        secondPanel.SetActive(true);
        mainPanel.SetActive(false);
    }

    public void GoToMainpanel()
    {
        mainPanel.SetActive(true);
        secondPanel.SetActive(false);
        arrowBtn.onClick.Invoke();
    }
}
