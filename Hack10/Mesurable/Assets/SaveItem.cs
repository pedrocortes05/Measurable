using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class SaveItem : MonoBehaviour
{
    public GameManager gameManager;
    public TMP_InputField itemName;
    public TMP_InputField length;
    public TMP_InputField width;
    public TMP_InputField height;
    public TMP_InputField weight;
    public GameObject itemIcon;
    public GameObject content;
    public Button newItemButton;

    // Start is called before the first frame update
    void Start()
    {
        newItemButton.GetComponent<Button>().onClick.AddListener(saveItem);
    }

    void saveItem()
    {
        ItemModel item = new ItemModel(itemName.text, double.Parse(length.text), double.Parse(width.text), double.Parse(height.text), double.Parse(weight.text));
        
        GameObject currentItem = Instantiate(itemIcon);
        currentItem.transform.parent = content.transform;
        // currentItem.GetComponent<itemRef>().text1.GetComponent<TextMeshPro>().text = Convert.ToString(itemName);
        // currentItem.GetComponent<itemRef>().text2.GetComponent<TextMeshPro>().text = Convert.ToString(length) + " x " + Convert.ToString(width) + " x " + Convert.ToString(height) + ", " + Convert.ToString(weight) + " kg";

        currentItem.transform.GetChild(0).gameObject.GetComponent<TextMeshProUGUI>().text = itemName.text;
        currentItem.transform.GetChild(1).gameObject.GetComponent<TextMeshProUGUI>().text = length.text + " x " + width.text + " x " + height.text + ", " + weight.text + " kg";
        
        gameManager.Items.Add(item);

        gameManager.GoToItems();
    }
}
