using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RPC_ExperimentState : MonoBehaviour
{
    public enum Task
    {
        FindSameImage,
        FindSameObject,
        PlaceWithEyeGaze,
        RetrieveInfo
    }

    public enum Target
    {
        Sphere,
        Cube,
        Capsule,
        Cylinder
    }

    public static int taskNum; // 몇번째 테스크를 수행중인가
    public static Task taskNow; // 어떤 테스크인가
    public static Target target; // 같은것 찾기 task에서 찾아야할 대상번호
    public static int targetPoint; // 배치 시나리오에서 배치해야될 위치번호

    void RPC_SetTaskNum(int newTaskNum)
    {
        taskNum = newTaskNum;
    }

    void RPC_SetTask(Task newTask)
    {
        taskNow = newTask;
    }

    void RPC_SetTarget(Target newTarget)
    {
        target = newTarget;
    }

    void RPC_SetTargetPoint(int newTargetPoint)
    {
        targetPoint = newTargetPoint;
    }
}
