using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class CSVManager : MonoBehaviour
{
    private static string reportDirectoryName = "GGSGExpData";
    private static string reportFileName = "Report.csv";
    private static string reportSeparator = ",";
    private static string[] reportHeaders = new string[8]
    {
        "Participant",
        "Block",
        "Distance",
        "Technique",
        "Trial",
        "Phase",
        "Event",
        "Gap"
    };
    private static string timeStampHeader = "Time Stamp";

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

    public static string[] GetReportLine(string eventName)
    {
        string[] row = new string[8];
        row[0] = ExperimentState.participantNum.ToString();
        row[1] = ExperimentState.curBlockNum.ToString();
        row[2] = ExperimentState.curBlockDistance.ToString();
        row[3] = ExperimentState.curBlockTechnique.ToString();
        row[4] = ExperimentState.curTrialNum.ToString();
        row[5] = ExperimentState.curTrialPhase.ToString();
        row[6] = eventName;
        row[7] = "";
        return row;
    }

    public static string[] GetReportLine(string eventName, float errorDistance)
    {
        string[] row = new string[8];
        row[0] = ExperimentState.participantNum.ToString();
        row[1] = ExperimentState.curBlockNum.ToString();
        row[2] = ExperimentState.curBlockDistance.ToString();
        row[3] = ExperimentState.curBlockTechnique.ToString();
        row[4] = ExperimentState.curTrialNum.ToString();
        row[5] = ExperimentState.curTrialPhase.ToString();
        row[6] = eventName;
        row[7] = errorDistance.ToString();
        return row;
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

    static string GetFilePath()
    {
        reportFileName = ExperimentState.participantNum.ToString() + ".csv";
        return GetDirectoryPath() + "/" + reportFileName;
    }

    static string GetDirectoryPath()
    {
        //return Application.dataPath + "/" + reportDirectoryName;
        return Application.persistentDataPath + "/" + reportDirectoryName;
    }

    static string GetTimeStamp()
    {
        return DateTime.Now.ToString("hh:mm:ss.fff");
    }

    #endregion

}
