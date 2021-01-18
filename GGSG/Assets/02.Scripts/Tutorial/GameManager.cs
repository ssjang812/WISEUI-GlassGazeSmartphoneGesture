using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum CHARACTERTYPE {
    _none = -1,
    john,
    ted,
    anya,
    zoe,
    lilith,
    andrew,
    melissa
}


public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    [SerializeField] private CharacterData[] characterData = null; // 캐릭터 정보 입력
    [SerializeField] private CHARACTERTYPE[] characters = null; // 싸울캐릭터 선택
    private CharacterData[] currentCharacters;

    [System.Serializable]
    public struct CharacterData
    {
        public string name;
        public int hp;
        public int mp;
        public int damage;
        public int armor;
    }
    void Awake()
    {
        instance = this;
        currentCharacters = new CharacterData[characters.Length];
        for (int i = 0; i < characters.Length; i++)
        {
            currentCharacters[i] = characterData[(int)characters[i]];
        }
    }

    private void Update()
    {
        Debug.Log("Update");
        if (Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log("<color=magenta>Report updated in game!</color>");
            Fight();
            CSVManager_Tutorial.AppendToReport(GetReportLine());
        }
    }

    void Fight()
    {
        currentCharacters[0].hp -= Mathf.Max(Random.Range(1, currentCharacters[1].damage + 1) - currentCharacters[0].armor, 0);
        currentCharacters[1].hp -= Mathf.Max(Random.Range(1, currentCharacters[0].damage + 1) - currentCharacters[1].armor, 0);
    }

    string[] GetReportLine()
    {
        string[] returnable = new string[5];
        returnable[0] = currentCharacters[0].name + " vs " + currentCharacters[1].name;
        returnable[1] = currentCharacters[0].hp.ToString() + " vs " + currentCharacters[1].hp.ToString();
        returnable[2] = currentCharacters[0].mp.ToString() + " vs " + currentCharacters[1].mp.ToString();
        returnable[3] = currentCharacters[0].damage.ToString() + " vs " + currentCharacters[1].damage.ToString();
        returnable[4] = currentCharacters[0].armor.ToString() + " vs " + currentCharacters[1].armor.ToString();
        return returnable;
    }
}
