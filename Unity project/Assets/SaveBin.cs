using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class SaveBin : MonoBehaviour
{
    public GameManager gameManager;
    public TMP_InputField binName;
    public TMP_InputField length;
    public TMP_InputField width;
    public TMP_InputField height;
    public TMP_InputField weight;
    public GameObject binIcon;
    public GameObject content;
    public Button newBinButton;

    // Start is called before the first frame update
    void Start()
    {
        newBinButton.GetComponent<Button>().onClick.AddListener(saveBin);
    }

    void saveBin()
    {
        BinModel bin = new BinModel(binName.text, double.Parse(length.text), double.Parse(width.text), double.Parse(height.text), double.Parse(weight.text));
        
        GameObject currentItem = Instantiate(binIcon);
        currentItem.transform.parent = content.transform;
        // currentItem.GetComponent<itemRef>().text1.GetComponent<TextMeshPro>().text = Convert.ToString(itemName);
        // currentItem.GetComponent<itemRef>().text2.GetComponent<TextMeshPro>().text = Convert.ToString(length) + " x " + Convert.ToString(width) + " x " + Convert.ToString(height) + ", " + Convert.ToString(weight) + " kg";

        currentItem.transform.GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = binName.text;
        currentItem.transform.GetChild(1).gameObject.GetComponent<TextMeshProUGUI>().text = length.text + " x " + width.text + " x " + height.text + ", " + weight.text + " kg";
        
        gameManager.Bins.Add(bin);

        gameManager.GoToBins();
    }
}
