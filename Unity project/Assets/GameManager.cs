using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    public List<GameObject> UserInterfaces;
    public Button goToMenuButton;
    public Button goToMenuButton2;
    public Button goToItemsButton;
    public Button goToBinsButton;
    public Button goToItemFormButton;
    public Button goToBinFormButton;
    public Button ordenarButton;
    //public Button addBinButton;
    public List<ItemModel> Items;
    public List<BinModel> Bins;

    PackerModel packer = new PackerModel();

    // Start is called before the first frame update
    void Start()
    {
        // Hide UIs and activate main UI
        UnHideUI(UserInterfaces[0]);

        goToMenuButton.GetComponent<Button>().onClick.AddListener(GoToMenu);
        goToItemsButton.GetComponent<Button>().onClick.AddListener(GoToItems);
        goToBinsButton.GetComponent<Button>().onClick.AddListener(GoToBins);
        goToItemFormButton.GetComponent<Button>().onClick.AddListener(GoToItemForm);
        goToBinFormButton.GetComponent<Button>().onClick.AddListener(GoToBinForm);
        goToMenuButton2.GetComponent<Button>().onClick.AddListener(GoToMenu);
        ordenarButton.GetComponent<Button>().onClick.AddListener(trySort);

    }

    void UnHideUI(GameObject active_UI)
    {
        foreach (GameObject UI in UserInterfaces)
        {
            UI.SetActive(false);
        }
        active_UI.SetActive(true);
    }

    public void trySort()
    {
        packer.AddBin(Bins[0]);
        foreach (ItemModel item in Items)
        {
            packer.AddItem(item);
        }

        packer.Pack();

        foreach (ItemModel im in Bins[0].Items)
        {
            Debug.Log(im.String());
        }
        // Debug.Log("------");
        // foreach (BinModel bin in Bins)
        // {
        //     Debug.Log(bin.Name);
        //     Debug.Log(bin.Width);
        //     Debug.Log(bin.Height);
        //     Debug.Log(bin.Depth);
        //     Debug.Log(bin.MaxWeight);
        //     Debug.Log("-");

        // }
        // Debug.Log("------");
        // foreach (ItemModel item in Items)
        // {
        //     Debug.Log(item.Name);
        //     Debug.Log(item.Width);
        //     Debug.Log(item.Height);
        //     Debug.Log(item.Depth);
        //     Debug.Log(item.Weight);
        //     Debug.Log("-");

        // }
        // Debug.Log("------");
    }
    public void GoToMenu() { UnHideUI(UserInterfaces[0]); }
    public void GoToItems() { UnHideUI(UserInterfaces[1]); }
    public void GoToItemForm() { UnHideUI(UserInterfaces[2]); }
    public void GoToBins() { UnHideUI(UserInterfaces[3]); }
    public void GoToBinForm() { UnHideUI(UserInterfaces[4]); }

}
