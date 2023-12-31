using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationType : MonoBehaviour
{
    public const int RT_WHD = 0;
    public const int RT_HWD = 1;
    public const int RT_HDW = 2;
    public const int RT_DHW = 3;
    public const int RT_DWH = 4;
    public const int RT_WDH = 5;
    public static List<int> ALL = new List<int>() { RT_WHD, RT_HWD, RT_HDW, RT_DHW, RT_DWH, RT_WDH };

    public static Dictionary<int, Quaternion> rotationMap = new Dictionary<int, Quaternion>()
    {
        { 1, Quaternion.Euler(0f, 0f, 0f) },
        { 2, Quaternion.Euler(0f, 0f, 90f) },
        { 3, Quaternion.Euler(0f, 90f, 0f) },
        { 4, Quaternion.Euler(90f, 0f, 0f) },
        { 5, Quaternion.Euler(90f, 90f, 0f) },
        { 6, Quaternion.Euler(90f, 0f, 90f) }
    };
}