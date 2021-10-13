using Microsoft.MixedReality.Toolkit.Experimental.Dwell;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ExperimentManager : MonoBehaviour
{
    // 중요 : 한실험은 6개의 블록으로 이루어져있다, 한블록은 10회의 수행으로 이루어져있다, 1회 수행은 3단계 페이즈로 이루어져있다(시선배치-디테일배치-각도배치).
    public GameObject manipChair;
    public GameObject guideChair;
    public GameObject turnOffDuringExperiment;
    public ExpCtrPanel expCtrPanel;
    public GameObject instructionPanel;
    public TextMeshProUGUI instruction;
    public GameObject nextBlockBtn;
    public PhotonView PV;
    public int practiceTimes = 3;
    private int practiceCounter;
    private bool isPractice;
    private Vector3 defaultManipChairPosition;

    //실험 수치값 유니티를통해 받기
    public float NearLength;
    public float FarLength;
    public float MinAngle;
    public float MaxAngle;

    //수치값 최소 최대값을 10등분 하기위해 사이값 저장
    private float NearOffsetGap;
    private float FarOffsetGap;
    private float AngleOffsetGap;

    //실험동안 필요한 자료구조
    List<ExperimentCase> expDefaultFlow;    //실험의 가장 기본 흐름
    List<List<ExperimentCase>> expAllFlow;  //실험 흐름을 6가지로 섞음 (counter balanced with Latin Square)
    ExperimentRandomValue expRandomValue;   //Near, Far에서의 거리, Angle을 10등분한 값들을 가지고있는 구조체

    //한번의 블럭의 반복에 필요한 자료구조
    List<ExperimentCase> curExpFlow;    //전체 흐름에서 선택한 하나의 흐름을 가지고있음
    ExperimentCase curExpCase;  //curExpFlow에서 하나의 블록
    List<float> nearRandomValue = new List<float>();  //랜덤한 index를 pop하는 식으로 랜덤값을 쓸거기때문에 한블럭을 시작할때마다 새로 복사해서 시작해야함, 원본을 지워버리면 이후에 못하기때문
    List<float> farRandomValue = new List<float>();
    List<float> rotationRandomValue = new List<float>();


    void Start()
    {
        ExperimentState.participantNum = -1;
        ExperimentState.curBlockNum = -1;
        ExperimentState.curBlockDistance = Distance.Null;
        ExperimentState.curBlockTechnique = Technique.Null;
        ExperimentState.curTrialNum = -1;
        ExperimentState.curTrialPhase = TrialPhase.Null;
        ExperimentState.curPositionOffset = -1;
        ExperimentState.curRotationOffset = -1;

        RPC_PhonetoGlasses.event_pointerUp.AddListener(PhaseCheck);
        RPC_PhonetoGlasses.event_pointerDown.AddListener(ReportPointerDown);
        RPC_PhonetoGlasses.event_nextButtonDeactivated.AddListener(SetActiveGuideChair);
        instructionPanel.SetActive(false);
        defaultManipChairPosition = manipChair.transform.localPosition;

        //Initinalize experiment set, we will order this set to make different experiment sequence just below.
        expDefaultFlow = new List<ExperimentCase>();
        ExperimentCase aCase;
        aCase.distance = Distance.Near;
        aCase.technique = Technique.PhoneSwipe;
        expDefaultFlow.Add(aCase);
        aCase.distance = Distance.Far;
        aCase.technique = Technique.PhoneSwipe;
        expDefaultFlow.Add(aCase);
        aCase.distance = Distance.Near;
        aCase.technique = Technique.PhoneGyro;
        expDefaultFlow.Add(aCase);
        aCase.distance = Distance.Far;
        aCase.technique = Technique.PhoneGyro;
        expDefaultFlow.Add(aCase);
        aCase.distance = Distance.Near;
        aCase.technique = Technique.GlassesHead;
        expDefaultFlow.Add(aCase);
        aCase.distance = Distance.Far;
        aCase.technique = Technique.GlassesHead;
        expDefaultFlow.Add(aCase);

        //Debug Code
        /*
        for (int i = 0; i < 6; i++)
        {
            Debug.Log(experimentCase[i].distance);
            Debug.Log(experimentCase[i].technique);
        }
        */


        //Initinalize list of list, we will make difference experiment order here.
        expAllFlow = new List<List<ExperimentCase>>();
        for(int i = 0; i < 6; i++)
        {
            expAllFlow.Add(new List<ExperimentCase>());
        }
        expAllFlow[0].Add(expDefaultFlow[0]);
        expAllFlow[0].Add(expDefaultFlow[1]);
        expAllFlow[0].Add(expDefaultFlow[2]);
        expAllFlow[0].Add(expDefaultFlow[3]);
        expAllFlow[0].Add(expDefaultFlow[4]);
        expAllFlow[0].Add(expDefaultFlow[5]);

        expAllFlow[1].Add(expDefaultFlow[0]);
        expAllFlow[1].Add(expDefaultFlow[1]);
        expAllFlow[1].Add(expDefaultFlow[4]);
        expAllFlow[1].Add(expDefaultFlow[5]);
        expAllFlow[1].Add(expDefaultFlow[2]);
        expAllFlow[1].Add(expDefaultFlow[3]);

        expAllFlow[2].Add(expDefaultFlow[2]);
        expAllFlow[2].Add(expDefaultFlow[3]);
        expAllFlow[2].Add(expDefaultFlow[0]);
        expAllFlow[2].Add(expDefaultFlow[1]);
        expAllFlow[2].Add(expDefaultFlow[4]);
        expAllFlow[2].Add(expDefaultFlow[5]);

        expAllFlow[3].Add(expDefaultFlow[2]);
        expAllFlow[3].Add(expDefaultFlow[3]);
        expAllFlow[3].Add(expDefaultFlow[4]);
        expAllFlow[3].Add(expDefaultFlow[5]);
        expAllFlow[3].Add(expDefaultFlow[0]);
        expAllFlow[3].Add(expDefaultFlow[1]);

        expAllFlow[4].Add(expDefaultFlow[4]);
        expAllFlow[4].Add(expDefaultFlow[5]);
        expAllFlow[4].Add(expDefaultFlow[0]);
        expAllFlow[4].Add(expDefaultFlow[1]);
        expAllFlow[4].Add(expDefaultFlow[2]);
        expAllFlow[4].Add(expDefaultFlow[3]);

        expAllFlow[5].Add(expDefaultFlow[4]);
        expAllFlow[5].Add(expDefaultFlow[5]);
        expAllFlow[5].Add(expDefaultFlow[2]);
        expAllFlow[5].Add(expDefaultFlow[3]);
        expAllFlow[5].Add(expDefaultFlow[0]);
        expAllFlow[5].Add(expDefaultFlow[1]);

        //Debug Code
        /*
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                Debug.Log(expAllFlow[i][j].distance + "  " + expAllFlow[i][j].technique);
            }
        }
        */
        

        // Initialize data structure for generating random values.
        expRandomValue.NearPositionOffsetValues = new List<float>();
        expRandomValue.FarPositionOffsetValues = new List<float>();
        expRandomValue.RotationOffsetValues = new List<float>();

        NearOffsetGap = NearLength / 9;
        FarOffsetGap = FarLength / 9;
        AngleOffsetGap = (MaxAngle-MinAngle) / 9;

        float NearMinOffSet = -NearLength / 2;
        float FarMinOffSet = -FarLength / 2;
        for(int i=0; i<10; i++)
        {
            expRandomValue.NearPositionOffsetValues.Add(NearMinOffSet + NearOffsetGap * i);
            expRandomValue.FarPositionOffsetValues.Add(FarMinOffSet + FarOffsetGap * i);
            expRandomValue.RotationOffsetValues.Add(90f + AngleOffsetGap * i);
        }
        //Debug Code
        /*
        for (int i = 0; i < 10; i++)
        {
            Debug.Log(expRandomValue.NearPositionOffsetValues[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            Debug.Log(expRandomValue.FarPositionOffsetValues[i]);
        }
        for (int i = 0; i < 10; i++)
        {
            Debug.Log(expRandomValue.RotationOffsetValues[i]);
        }
        */
    }

    public void StartExperiment()
    {
        ExperimentState.participantNum = expCtrPanel.participantNumber;
        ExperimentState.curBlockNum = expCtrPanel.blockNumber;
        turnOffDuringExperiment.SetActive(false);
        curExpFlow = expAllFlow[ExperimentState.participantNum - 1];

        CSVManager.AppendToReport(CSVManager.GetReportLine("Experiment Start"));

        SetOneBlock();
    }

    private void SetOneBlock()
    {
        //혹시모르니 세팅시작할때 한번 비워주고 새로
        nearRandomValue.Clear();
        farRandomValue.Clear();
        rotationRandomValue.Clear();
        instructionPanel.SetActive(false);
        for (int i = 0; i < expRandomValue.NearPositionOffsetValues.Count; i++)
        {
            //랜덤한 index를 pop하는 식으로 랜덤값을 쓸거기때문에 한블럭을 시작할때마다 새로 복사해서 시작해야함, 원본을 지워버리면 이후에 못하기때문
            nearRandomValue.Add(expRandomValue.NearPositionOffsetValues[i]);
            farRandomValue.Add(expRandomValue.FarPositionOffsetValues[i]);
            rotationRandomValue.Add(expRandomValue.RotationOffsetValues[i]);
        }

        //한블럭 시작 초기화
        curExpCase = curExpFlow[ExperimentState.curBlockNum - 1];
        ExperimentState.curBlockDistance = curExpCase.distance;
        ExperimentState.curBlockTechnique = curExpCase.technique;

        CSVManager.AppendToReport(CSVManager.GetReportLine("Block Start"));

        practiceCounter = 0;
        isPractice = true;
        SetOnePractice();
    }

    //연습모드
    private void SetOnePractice()
    {
        // SetOneTrial과 다른점은 랜덤값을 사용해도 리스트에서 삭제하지 않는다는점, 블럭종료까지 진행되는게 아니라 3회 후 바로 SetOneTrial실행으로 바로 이어진다는점, 끝내는 조건관련 변수들에 손대지않는다는점
        practiceCounter++;
        PV.RPC("RPC_OneTrialStart", RpcTarget.All); // trial 시작시마다 가림막 설치, 랜덤한 위치에 버튼생성을 위해 시작할때 신호를 보내줌
        manipChair.transform.localPosition = defaultManipChairPosition;
        manipChair.transform.localRotation = Quaternion.identity;

        ExperimentState.curTrialPhase = TrialPhase.RoughPlacement;

        // 랜덤 값 리스트에서 이번 Trial에 사용될 랜덤값 선정 실전과 다른점은 리스트에서 뽑아서 써도 삭제시키지 않는다는점
        System.Random random = new System.Random();
        int index;

        if (ExperimentState.curBlockDistance == Distance.Near)
        {
            index = random.Next(nearRandomValue.Count);
            ExperimentState.curPositionOffset = nearRandomValue[index];
        }
        else
        {
            index = random.Next(farRandomValue.Count);
            ExperimentState.curPositionOffset = farRandomValue[index];
        }
        index = random.Next(rotationRandomValue.Count);
        ExperimentState.curRotationOffset = rotationRandomValue[index];

        // 배치와 돌리는 과정을 나눠서하기때문에 Que도 나눠서 두단계에 걸쳐서 줘야함, 여기서는 포지션 큐만, 로테이션은 상세배치 끝난후에
        guideChair.transform.localPosition = Vector3.zero;
        guideChair.transform.localRotation = Quaternion.identity;
        guideChair.transform.Translate(new Vector3(ExperimentState.curPositionOffset, 0, 0));

        // 테스트 할때는 주석처리하자
        guideChair.SetActive(false); // 스마트폰의 가림막을 1초 누르면 다시 킬거임

        CSVManager.AppendToReport(CSVManager.GetReportLine("Practice Trial Start"));
    }

    //한블럭 10회 수행
    private void SetOneTrial()
    {
        ExperimentState.curTrialNum = 11 - rotationRandomValue.Count;
        PV.RPC("RPC_OneTrialStart", RpcTarget.All); // trial 시작시마다 가림막 설치, 랜덤한 위치에 버튼생성을 위해 시작할때 신호를 보내줌
        manipChair.transform.localPosition = defaultManipChairPosition;
        manipChair.transform.localRotation = Quaternion.identity;

        // Trial 10번하면 새로운 의자 생성을 멈춤, 설문시간을 가진후 다시 시작을 누르면 다음 Block을 실행 : 어느경우에느 사용되는 rotation random 갯수로, 거리는 near, far 경우가 갈림
        if (ExperimentState.curTrialNum > 10)
        {
            ExperimentState.curBlockDistance = Distance.Null;
            ExperimentState.curBlockTechnique = Technique.Null;
            ExperimentState.curTrialNum = -1;
            ExperimentState.curTrialPhase = TrialPhase.Null;
            ExperimentState.curPositionOffset = -1;
            ExperimentState.curRotationOffset = -1;

            if (ExperimentState.curBlockNum == 6)
            {
                // 실험 종료
                ExperimentState.curBlockDistance = Distance.Null;
                ExperimentState.curBlockTechnique = Technique.Null;
                ExperimentState.curTrialNum = -1;
                ExperimentState.curTrialPhase = TrialPhase.Null;
                ExperimentState.curPositionOffset = -1;
                ExperimentState.curRotationOffset = -1;
                CSVManager.AppendToReport(CSVManager.GetReportLine("Block End"));
                CSVManager.AppendToReport(CSVManager.GetReportLine("Experiment End"));
                instruction.SetText($"<size=35><b>All trials are over</b></size>\n\nPlease call coordinator and fill out the questionnaire.");
                nextBlockBtn.SetActive(false);
            } else if(ExperimentState.curBlockNum < 6)
            {
                // Block블록 종료
                ExperimentState.curBlockDistance = Distance.Null;
                ExperimentState.curBlockTechnique = Technique.Null;
                ExperimentState.curTrialNum = -1;
                ExperimentState.curTrialPhase = TrialPhase.Null;
                ExperimentState.curPositionOffset = -1;
                ExperimentState.curRotationOffset = -1;
                CSVManager.AppendToReport(CSVManager.GetReportLine("Block End"));
                instruction.SetText($"<size=35><b>Block{ExperimentState.curBlockNum} is over</b></size>\n\nPlease call coordinator and fill out the questionnaire.");
                ExperimentState.curBlockNum++;
            }
            instructionPanel.SetActive(true);
            return;
        }

        // 한 trial의 첫 모드는 항상 시선으로 배치로 시작
        ExperimentState.curTrialPhase = TrialPhase.RoughPlacement;

        // 랜덤 값 리스트에서 이번 Trial에 사용될 랜덤값 선정
        System.Random random = new System.Random();
        int index;

        if (ExperimentState.curBlockDistance == Distance.Near)
        {
            index = random.Next(nearRandomValue.Count);
            ExperimentState.curPositionOffset = nearRandomValue[index];
            nearRandomValue.RemoveAt(index);
        }
        else
        {
            index = random.Next(farRandomValue.Count);
            ExperimentState.curPositionOffset = farRandomValue[index];
            farRandomValue.RemoveAt(index);
        }
        index = random.Next(rotationRandomValue.Count);
        ExperimentState.curRotationOffset = rotationRandomValue[index];
        rotationRandomValue.RemoveAt(index);

        // 배치와 돌리는 과정을 나눠서하기때문에 Que도 나눠서 두단계에 걸쳐서 줘야함, 여기서는 포지션 큐만, 로테이션은 상세배치 끝난후에
        guideChair.transform.localPosition = Vector3.zero;
        guideChair.transform.localRotation = Quaternion.identity;
        guideChair.transform.Translate(new Vector3(ExperimentState.curPositionOffset, 0, 0));

        // 테스트 할때는 주석처리하자
        guideChair.SetActive(false); // 스마트폰의 가림막을 1초 누르면 다시 킬거임

        CSVManager.AppendToReport(CSVManager.GetReportLine("Trial Start"));
    }


    // pointer up 마다 호출
    // 한번의 trial에는 3가지의 페이즈가 있음, 사용자 입력때마다 상태체크 or 정답체크하는 파트, 특정상태 or 정답이면 상호작용모드만 바꿔주면 된다.
    public void PhaseCheck()
    {
        if(ExperimentState.curTrialPhase == TrialPhase.RoughPlacement)
        {
            // 그냥 시선배치니까 어느정도 근처에 배치되면 ok
            float distance = Vector3.Distance(guideChair.transform.position, manipChair.transform.position);
            if(distance < 2f)
            {
                CSVManager.AppendToReport(CSVManager.GetReportLine("correct", distance));
                ExperimentState.curTrialPhase = TrialPhase.FinePlacement;
            }
        }
        else if(ExperimentState.curTrialPhase == TrialPhase.FinePlacement)
        {
            // 정답체크해서 맞으면 각도모드로 바꿔주고 아니면 말고
            float distance = Vector3.Distance(guideChair.transform.position, manipChair.transform.position);
            // 정답일때
            if (distance < 0.15f)
            {
                CSVManager.AppendToReport(CSVManager.GetReportLine("correct", distance));
                System.Random random = new System.Random();
                guideChair.transform.localRotation = Quaternion.identity;
                if(random.Next(2) == 0)
                {
                    guideChair.transform.Rotate(new Vector3(0, ExperimentState.curRotationOffset, 0));
                }
                else
                {
                    guideChair.transform.Rotate(new Vector3(0, -ExperimentState.curRotationOffset, 0));
                }
                ExperimentState.curTrialPhase = TrialPhase.Rotation;
            }
            else
            {
                //정답은 아닌데 화면에서 손 땟을때
                CSVManager.AppendToReport(CSVManager.GetReportLine("release", distance));
            }
        }
        else if(ExperimentState.curTrialPhase == TrialPhase.Rotation)
        {
            float angleGap = Vector3.Angle(guideChair.transform.forward, manipChair.transform.forward);
            // 정답체크해서 맞으면 다음 trial 호출 (세번째 페이즈까지 완료하면 다음 trial 호출)
            if(angleGap < 8f)
            {
                // 정답
                CSVManager.AppendToReport(CSVManager.GetReportLine("correct", angleGap));
                if(practiceCounter < practiceTimes)
                {
                    CSVManager.AppendToReport(CSVManager.GetReportLine("Practice Trial End"));
                    SetOnePractice();
                }
                else
                {
                    //연습 3회 한 후에는 정상모드로 돌입 (practiceCounter가 3일때 부터), isPractice는 Practice 끝남을 기록하는 동시에 SetOneTrial실행으로 바꿔줘야하기때문에 필요
                    if(isPractice)
                    {
                        CSVManager.AppendToReport(CSVManager.GetReportLine("Practice Trial End"));
                        isPractice = false;
                    }
                    else
                    {
                        CSVManager.AppendToReport(CSVManager.GetReportLine("Trial End"));
                    }
                    SetOneTrial();
                }
            }
            else
            {
                // 정답아닌데 손땟을때
                CSVManager.AppendToReport(CSVManager.GetReportLine("release", angleGap));
            }
        }
    }

    private void ReportPointerDown()
    {
        // 스마트폰에 가림막을 누르는 터치에대해서는 파일에 기록하지않기위해 if 문을 추가했음
        if(ExperimentState.curTrialPhase != TrialPhase.Null && guideChair.activeSelf)
        {
            CSVManager.AppendToReport(CSVManager.GetReportLine("press"));
        }
    }

    // 스마트폰에서 가림막이 사라질때 꺼뒀던 문제를 공개하는 코드 (리스너에 등록하여 동작)
    private void SetActiveGuideChair()
    {
        guideChair.SetActive(true);
    }
}
