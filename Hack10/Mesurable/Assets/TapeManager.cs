using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using TMPro;

public class TapeManager : MonoBehaviour
{
    ARRaycastManager ARRaycastManager;

    public List<GameObject> tapePoints;
    public List<GameObject> tapeLines;
    public List<GameObject> tapeTexts;

    public List<float> measurements;



    public GameObject pinPrefab;
    public GameObject pinsParent;

    public GameObject linePrefab;
    public GameObject lineParent;

    public GameObject textPrefab;
    public GameObject textParent;

    public GameObject lookAtMe;

    public GameObject reticle;

    //public TMP_Text measureTxt;


    float lastDist = 0;

    int pinCount = 0;
    int lineCount = 0;

    bool canPlace = true;

    //this one is called from other scripts
    public void placePin()
    {
        if (canPlace)
        {
            placePoint(reticle.transform.position);

        }
    }
    public void clearAll()
    {
        tapePoints.Clear();
        tapeLines.Clear();
        tapeTexts.Clear();
        measurements.Clear();

        lastDist = 0;
        pinCount = 0;
        lineCount = 0;
    }

    public List<float> GetLastThreeElements()
    {
        int count = measurements.Count;

        if (count < 3)
        {
            return measurements;
        }
        else
        {
            return measurements.GetRange(count - 3, 3);
        }
    } 

    public void placePoint(Vector3 pointPosition)
    {
        var currentPin = Instantiate(pinPrefab, pointPosition, Quaternion.identity);

        if (pinCount % 2 == 0)
        {
            var currentLine = Instantiate(linePrefab, pointPosition, Quaternion.identity);
            tapeLines.Add(currentLine);
            currentLine.name = "line" + lineCount;
            currentLine.transform.parent = lineParent.transform;

            var currentText = Instantiate(textPrefab, pointPosition, Quaternion.identity);
            tapeTexts.Add(currentText);
            currentText.transform.parent = textParent.transform;
            currentText.name = "text" + lineCount;

            lineCount = lineCount + 1;

        } else
        {
            measurements.Add(lastDist);
        }

        currentPin.name = "pin" + pinCount;
        tapePoints.Add(currentPin);
        currentPin.transform.parent = pinsParent.transform;
        currentPin.transform.position = pointPosition;
        pinCount = pinCount + 1;

        return;
    }
    // Start is called before the first frame update
    void Start()
    {
        ARRaycastManager = GetComponent<ARRaycastManager>();
    }

    // Update is called once per frame
    void Update()
    {
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        ARRaycastManager.Raycast(new Vector2(Screen.width / 2, Screen.height / 2), hits, TrackableType.PlaneWithinPolygon);
        //measureTxt.text = lastDist.ToString("0.000") + "m";

        //measureTxt.text = "";
        //foreach (float flt in measurements)
        //{
        //    measureTxt.text = measureTxt.text + "|" + flt.ToString("0.0");
        //}

        canPlace = false;

        if (hits.Count > 0)
        {
            reticle.transform.position = hits[0].pose.position;
            reticle.transform.rotation = hits[0].pose.rotation;

            canPlace = true;
            //START COMMENT WHEN REMOTE
            //if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            //{
            //    placePoint(reticle.transform.position);
            //}
            //END COMMENT WHEN REMOTE

            if (pinCount % 2 == 0 && pinCount > 1)
            {
                //on tap you will set a new origin
                
            } else if (pinCount > 0)
            {
                //on tap you will finish a line
                lastDist = Vector3.Distance(tapePoints[pinCount - 1].transform.position, hits[0].pose.position);
                LineRenderer lr = tapeLines[lineCount - 1].GetComponent<LineRenderer>();
                lr.transform.position = tapePoints[pinCount - 1].transform.position;
                lr.SetPosition(1, reticle.transform.position - tapePoints[pinCount - 1].transform.position);

                tapeTexts[lineCount - 1].transform.position = (tapePoints[pinCount - 1].transform.position + reticle.transform.position) / 2 + new Vector3(0,(float)0.03,0);
                tapeTexts[lineCount - 1].GetComponent<TextMeshPro>().text =  lastDist.ToString("0.000") + "m";

            }


        }

        foreach(GameObject obj in tapeTexts)
        {
            obj.transform.LookAt(lookAtMe.transform.position);
            obj.transform.Rotate(Vector3.up, 180f);
        }

    }
}
