using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ExperimentManager : MonoBehaviour
{
    private GameObject WorldEvent;
    private PhotonView PV;

    public GameObject findSameImageScene, findSameObjectScene, placeWithEyeGazeScene, retrieveInfoScene, expStartButton, practiceSelectButton;
    public TextMeshPro description;
    private List<int> taskList;

    private GameObject sphere_FindSameImage, cube_FindSameImage, capsule_FindSameImage, cylinder_FindSameImage;


    // Start is called before the first frame update
    void Start()
    {
        WorldEvent = GameObject.FindGameObjectWithTag("WorldEvent");
        PV = WorldEvent.GetComponent<PhotonView>();

        findSameImageScene.SetActive(false);
        findSameObjectScene.SetActive(false);
        placeWithEyeGazeScene.SetActive(false);
        retrieveInfoScene.SetActive(false);

        sphere_FindSameImage = GameObject.FindWithTag("Sphere_FindSameImage");
        cube_FindSameImage = GameObject.FindWithTag("Cube_FindSameImage");
        capsule_FindSameImage = GameObject.FindWithTag("Capsule_FindSameImage");
        cylinder_FindSameImage = GameObject.FindWithTag("Cylinder_FindSameImage");

        description.text = "오른쪽에 위치한 네 개의 버튼을 통해 \n각 테스크에 대한 수행연습을 할 수 있습니다.\n\n연습을 충분히 하셨다면 상단의 버튼을 눌러 실험참여를 시작해 주세요.";
    }

    // 지금 RPC로 양쪽 데이터는 동기화시켜주고있음, 진행될때마다 rpc함수가 각 디바이스 지역 함수 콜해서 진행하는것도 구현해야함.
    public void StartExperiment()
    {
        // 실험시작됬음을 RPC로 기록
        expStartButton.SetActive(false);
        practiceSelectButton.SetActive(false);

        taskList = new List<int>();
        for (int j = 0; j < 10; j++)
        {
            taskList.Add(1);
            taskList.Add(2);
            taskList.Add(3);
            taskList.Add(4);
        }

        int taskListCount = taskList.Count;
        PV.RPC("RPC_SetTaskNum", RpcTarget.All, 41 - taskListCount);
        int randomIndex = Random.Range(0, taskListCount);
        int taskNumber = taskList[randomIndex];
        taskList.RemoveAt(randomIndex);

        switch (taskNumber)
        {
            case 1:
                SetFindSameImage();
                break;
            case 2:
                SetFindSameObject();
                break;
            case 3:
                SetPlaceWithEyeGaze();
                break;
            case 4:
                SetRetrieveInfo();
                break;
            default:
                break;
        }
    }

    private void SetFindSameImage()
    {
        PV.RPC("RPC_SetTask", RpcTarget.All, RPC_ExperimentState.Task.FindSameImage);
        int target = Random.Range(0, 4);
        PV.RPC("RPC_SetTarget", RpcTarget.All, (RPC_ExperimentState.Target)target);
        PV.RPC("RPC_SetTargetPoint", RpcTarget.All, 999);
        findSameImageScene.SetActive(true);

        switch (target)
        {
            case 1:
                sphere_FindSameImage.SetActive(true);
                break;
            case 2:
                cube_FindSameImage.SetActive(true);
                break;
            case 3:
                capsule_FindSameImage.SetActive(true);
                break;
            case 4:
                cylinder_FindSameImage.SetActive(true);
                break;
            default:
                break;
        }

        //셋팅후 실험시작됬음을 기록
        //인터렉션 모듈에선 모든종류의 인풋이들어올때마다 해당 사안을 기록
        //그중 셋팅된 조건에 일치하는 인풋이 들어오면 기록후 다음으로 진행 (외부에서 next task를 호출)
    }

    private void EndFindSameImage()
    {
        sphere_FindSameImage.SetActive(false);
        cube_FindSameImage.SetActive(false);
        capsule_FindSameImage.SetActive(false);
        cylinder_FindSameImage.SetActive(false);
        findSameImageScene.SetActive(false);
    }

    private void SetFindSameObject()
    {
        PV.RPC("RPC_SetTask", RpcTarget.All, RPC_ExperimentState.Task.FindSameImage);
        int target = Random.Range(0, 4);
        PV.RPC("RPC_SetTarget", RpcTarget.All, (RPC_ExperimentState.Target)target);
        PV.RPC("RPC_SetTargetPoint", RpcTarget.All, 999);

        findSameObjectScene.SetActive(true);
        //셋팅후 실험시작됬음을 기록


        //findSameObjectScene.SetActive(false);
    }

    private void EndFindSameObject()
    {
        findSameObjectScene.SetActive(false);
    }

    private void SetPlaceWithEyeGaze()
    {
        PV.RPC("RPC_SetTask", RpcTarget.All, RPC_ExperimentState.Task.FindSameImage);
        int target = Random.Range(0, 4);
        PV.RPC("RPC_SetTarget", RpcTarget.All, (RPC_ExperimentState.Target)target);
        PV.RPC("RPC_SetTargetPoint", RpcTarget.All, Random.Range(0, 4));
        placeWithEyeGazeScene.SetActive(true);
        //셋팅후 실험시작됬음을 기록


        //placeWithEyeGazeScene.SetActive(false);
    }

    private void EndPlaceWithEyeGaze()
    {
        placeWithEyeGazeScene.SetActive(false);
    }

    private void SetRetrieveInfo()
    {
        PV.RPC("RPC_SetTask", RpcTarget.All, RPC_ExperimentState.Task.FindSameImage);
        int target = Random.Range(0, 4);
        PV.RPC("RPC_SetTarget", RpcTarget.All, (RPC_ExperimentState.Target)target);
        PV.RPC("RPC_SetTargetPoint", RpcTarget.All, 999);
        retrieveInfoScene.SetActive(true);
        //셋팅후 실험시작됬음을 기록



        //retrieveInfoScene.SetActive(false);
    }

    private void EndRetrieveInfo()
    {
        retrieveInfoScene.SetActive(false);
    }

    public void NextTask() // 인터렉션을 처리하는곳에서 모든 인터랙션을 기록, 유효 인풋이 들어오면 다음 이 함수를 호출해서 다음단계로 진행
    {
        int taskListCount = taskList.Count;
        
        if (taskListCount == 0) // 실험이 종료될 상황인지 체크
        {
            // 기록을 저장하고 종료 -> RPC로 만들어야함
        }

        switch ((int)RPC_ExperimentState.taskNow) // 새로운거 열기전에 이전꺼를 꺼주기
        {
            case 1:
                EndFindSameImage();
                break;
            case 2:
                EndFindSameObject();
                break;
            case 3:
                EndPlaceWithEyeGaze();
                break;
            case 4:
                EndRetrieveInfo();
                break;
            default:
                break;
        }

        PV.RPC("RPC_SetTaskNum", RpcTarget.All, 41 - taskListCount);
        int randomIndex = Random.Range(0, taskListCount); // 다음에 어떤 task할지 남은 task들중 랜덤으로 선정
        int taskNumber = taskList[randomIndex];
        taskList.RemoveAt(randomIndex);

        switch (taskNumber)
        {
            case 1:
                SetFindSameImage();
                break;
            case 2:
                SetFindSameObject();
                break;
            case 3:
                SetPlaceWithEyeGaze();
                break;
            case 4:
                SetRetrieveInfo();
                break;
            default:
                break;
        }
    }

    // eye gaze 입력 될떄마다 기록하는 함수
    // 스마트폰 제스쳐 입력 될떄마다 기록하는 함수
    // 동시 입력될때마다 기록하는 함수
}
