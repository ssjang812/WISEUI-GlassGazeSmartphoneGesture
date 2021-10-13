using System.Collections;
using System.Collections.Generic;
using UnityEngine;

enum Distance
{
    Near,
    Far,
    Null
}

enum Technique
{
    PhoneSwipe,
    PhoneGyro,
    GlassesHead,
    Null
}

enum TrialPhase
{
    RoughPlacement,
    FinePlacement,
    Rotation,
    Null
}

struct ExperimentCase
{
    public Distance distance;
    public Technique technique;
}

struct ExperimentState
{
    public static int participantNum;
    public static int curBlockNum;
    public static Distance curBlockDistance;
    public static Technique curBlockTechnique;
    public static int curTrialNum;
    public static TrialPhase curTrialPhase;
    public static float curPositionOffset;
    public static float curRotationOffset;
}

struct ExperimentRandomValue
{
    public List<float> NearPositionOffsetValues;
    public List<float> FarPositionOffsetValues;
    public List<float> RotationOffsetValues;
}