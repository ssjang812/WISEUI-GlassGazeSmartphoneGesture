using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ExperimentNumber : MonoBehaviour
{
    [SerializeField]
    private TextMeshPro textMesh = null;

    [SerializeField]
    private int experimentNumber;

    private void Start()
    {
        if (textMesh == null)
        {
            textMesh = GetComponent<TextMeshPro>();
        }

        if (textMesh != null)
        {
            textMesh.text = experimentNumber.ToString();
        }
    }

    public void OnIncrease()
    {
        if (textMesh == null)
        {
            textMesh = GetComponent<TextMeshPro>();
        }

        if (textMesh != null)
        {
            experimentNumber = Mathf.Clamp(++experimentNumber, 1, 6);
            textMesh.text = experimentNumber.ToString();
        }
    }

    public void OnDecrease()
    {
        if (textMesh == null)
        {
            textMesh = GetComponent<TextMeshPro>();
        }

        if (textMesh != null)
        {
            experimentNumber = Mathf.Clamp(--experimentNumber, 1, 6);
            textMesh.text = experimentNumber.ToString();
        }
    }
}
