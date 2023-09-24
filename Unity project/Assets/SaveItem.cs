using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class SaveItem : MonoBehaviour
{
    public TMP_InputField itemName;
    public TMP_InputField length;
    public TMP_InputField width;
    public TMP_InputField height;
    public TMP_InputField weight;

    // Start is called before the first frame update
    void Start()
    {
        ItemModel item = new ItemModel(Convert.ToString(itemName), Convert.ToDouble(length), Convert.ToDouble(width), Convert.ToDouble(height), Convert.ToDouble(weight));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
