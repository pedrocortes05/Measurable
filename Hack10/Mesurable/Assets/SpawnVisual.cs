using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SpawnVisual : MonoBehaviour
{
    public GameManager gm;
    public GameObject binPrefab;
    public GameObject itemPrefab;
    // Start is called before the first frame update

    public void spawnStuff()
    {
        foreach (BinModel bm in gm.Bins)
        {
            GameObject binInstance = Instantiate(binPrefab, new Vector3(0f, 0f, 0f), Quaternion.identity);
            binInstance.transform.localScale = new Vector3((float)bm.Width, (float)bm.Depth, (float)bm.Height);
            foreach (ItemModel im in bm.Items)
            {
                //instancear prismas rectangulares segun x,y,z, y rot y length,width,depth
                Debug.Log(im.String());


                Vector3 position = new Vector3((float)im.Position[0], (float)im.Position[1], (float)im.Position[2]);
                //position = position / 100;
                Vector3 scale = new Vector3((float)im.Width, (float)im.Depth, (float)im.Height);


                //scale = scale / 100;
                Quaternion rotation = RotationType.rotationMap[im.Rotation];


                GameObject itemInstance = Instantiate(itemPrefab, position, rotation);
                itemInstance.transform.GetChild(0).gameObject.transform.localScale = scale;
                itemInstance.transform.GetChild(1).gameObject.GetComponent<TextMeshPro>().text = im.Name;



            }
        }
    }
}
