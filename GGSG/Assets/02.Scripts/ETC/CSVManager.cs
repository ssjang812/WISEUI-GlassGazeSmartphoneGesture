using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class CSVManager : MonoBehaviour
{
    private static string reportDirectoryName = "Report";
    private static string reportFileName = "Report.csv";
    private static string reportSeparator = ",";
    private static string[] reportHeaders = new string[4]
    {
        "trial",
        "event",
        "target",
        "target point"
    };
    private static string timeStampHeader = "time stamp";

    #region Interactions

    public static void AppendToReport(string[] strings)
    {
        VerifyDirectory();
        VerifyFile();
        using (StreamWriter sw = File.AppendText(GetFilePath()))
        {
            string finalString = "";
            for (int i = 0; i < strings.Length; i++)
            {
                if (finalString != "")
                {
                    finalString += reportSeparator;
                }
                finalString += strings[i];
            }
            finalString += reportSeparator + GetTimeStamp();
            sw.WriteLine(finalString);
        }
    }

    public static void CreateReport()
    {
        using (StreamWriter sw = File.CreateText(GetFilePath()))
        {
            string finalString = "";
            for (int i = 0; i < reportHeaders.Length; i++)
            {
                if (finalString != "")
                {
                    finalString += reportSeparator;
                }
                finalString += reportHeaders[i];
            }
            finalString += reportSeparator + timeStampHeader;
            sw.WriteLine(finalString);
        }
    }

    #endregion


    #region Operations

    static void VerifyDirectory()
    {
        string dir = GetDirectoryPath();
        if (!Directory.Exists(dir))
        {
            Directory.CreateDirectory(dir);
        }
    }

    static void VerifyFile()
    {
        string file = GetFilePath();
        if (!File.Exists(file))
        {
            CreateReport();
        }
    }

    #endregion


    #region Queries

    static string GetDirectoryPath()
    {
        return Application.dataPath + "/" + reportDirectoryName;
    }

    static string GetFilePath()
    {
        return GetDirectoryPath() + "/" + reportFileName;
    }

    static string GetTimeStamp()
    {
        return DateTime.Now.ToString("hh:mm:ss.fff");
    }

    #endregion

}
