using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class AuxilaryMethods : MonoBehaviour
{
    public static bool RectIntersect(ItemModel item1, ItemModel item2, int x, int y)
    {
        List<double> d1 = item1.GetDimension();
        List<double> d2 = item2.GetDimension();

        double cx1 = item1.Position[x] + d1[x] / 2;
        double cy1 = item1.Position[y] + d1[y] / 2;
        double cx2 = item2.Position[x] + d2[x] / 2;
        double cy2 = item2.Position[y] + d2[y] / 2;

        double ix = Math.Max(cx1, cx2) - Math.Min(cx1, cx2);
        double iy = Math.Max(cy1, cy2) - Math.Min(cy1, cy2);

        return ix < (d1[x] + d2[x]) / 2 && iy < (d1[y] + d2[y]) / 2;
    }

    public static bool Intersect(ItemModel item1, ItemModel item2)
    {
        return (
            RectIntersect(item1, item2, Axis.WIDTH, Axis.HEIGHT) &&
            RectIntersect(item1, item2, Axis.HEIGHT, Axis.DEPTH) &&
            RectIntersect(item1, item2, Axis.WIDTH, Axis.DEPTH)
        );
    }
}
