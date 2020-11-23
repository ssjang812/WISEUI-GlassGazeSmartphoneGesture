using UnityEngine;
using UnityEditor;

public static class MyTools
{
    [MenuItem("My Tools/Add To Report %F1")]
    static void DEV_AppendDefaultsToReport()
    {
        CSVManager_Tutorial.AppendToReport(
            new string[5]
            {
                "Amber",
                10.ToString(),
                10.ToString(),
                10.ToString(),
                10.ToString()
            }
        );
        EditorApplication.Beep();
        Debug.Log("<color=green>Report updated succesfully!</color>");
    }

    [MenuItem("My Tools/Reset Report %F12")]
    static void DEV_ResetReport()
    {
        CSVManager_Tutorial.CreateReport();
        EditorApplication.Beep();
        Debug.Log("<color=orange>The report has been reset...</color>");
    }
}
