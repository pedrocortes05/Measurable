using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    public List<GameObject> UserInterfaces;
    public GameObject item;
    public GameObject content;
    public Button goToItemsButton;
    public Button goToBinsButton;
    public Button addItemButton;
    public Button addBinButton;
    public List<ItemModel> Items;
    public List<BinModel> Bins;

    // Start is called before the first frame update
    void Start()
    {
        // Hide UIs and activate main UI
        UnhideUI(UserInterfaces[0]);

        goToItemsButton.GetComponent<Button>().onclick.AddListener(UnhideUI(UserInterfaces[1]));
        //goToBinsButton.GetComponent<Button>().onclick.AddListener(UnhideUI(UserInterfaces[1]));

        Button addItem = addItemButton.GetComponent<Button>();
        addItem.onClick.AddListener(CreateItem);
    }

    void UnhideUI(GameObject active_UI)
    {
        foreach (GameObject UI in UserInterfaces)
        {
            HideUI(UI);
        }
        active_UI.SetActive(true);
    }

    void HideUI(GameObject UI)
    {
        UI.SetActive(false);
    }

    void CreateItem()
    {
        Instantiate(item).transform.parent = content.transform;
    }

}
