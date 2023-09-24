using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using ThreeDBinPacker;

public class SaveItem : MonoBehaviour
{
    public TMP_InputField name;
    public TMP_InputField length;
    public TMP_InputField width;
    public TMP_InputField height;
    public TMP_InputField weight;

    // Start is called before the first frame update
    void Start()
    {
        ItemModel item = new ItemModel(name, length, width, height, weight)
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
