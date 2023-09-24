using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BinModel : MonoBehaviour
{
    public string Name { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
    public double Depth { get; set; }
    public double MaxWeight { get; set; }
    public List<ItemModel> Items { get; set; }
    public List<ItemModel> UnfittedItems { get; set; }


    public BinModel(string name, double width, double height, double depth, double maxWeight)
    {
        Name = name;
        Width = width;
        Height = height;
        Depth = depth;
        MaxWeight = maxWeight;
        Items = new List<ItemModel>();
        UnfittedItems = new List<ItemModel>();
    }

    public void FormatNumbers()
    {
        Width = Convert.ToDouble(Width);
        Height = Convert.ToDouble(Height);
        Depth = Convert.ToDouble(Depth);
        MaxWeight = Convert.ToDouble(MaxWeight);
    }

    public double GetVolume()
    {
        return Convert.ToDouble(Width * Height * Depth);
    }

    public double GetTotalWeight()
    {
        double totalWeight = 0;

        foreach (ItemModel item in Items)
        {
            totalWeight += item.Weight;
        }

        return Convert.ToDouble(totalWeight);
    }

    public bool PutItem(ItemModel item, List<double> pivot)
    {
        bool fit = false;
        List<double> validItemPosition = item.Position;
        item.Position = pivot;

        for (int i = 0; i < RotationType.ALL.Count; i++)
        {
            item.Rotation = i;
            List<double> dimension = item.GetDimension();
            if (
                Width < pivot[0] + dimension[0] ||
                Height < pivot[1] + dimension[1] ||
                Depth < pivot[2] + dimension[2]
            )
            {
                continue;
            }

            fit = true;

            foreach (ItemModel currentItemInBin in Items)
            {
                if (AuxilaryMethods.Intersect(currentItemInBin, item))
                {
                    fit = false;
                    break;
                }
            }

            if (fit)
            {
                if (GetTotalWeight() + item.Weight > MaxWeight)
                {
                    fit = false;
                    return fit;
                }

                Items.Add(item);
            }

            if (!fit)
            {
                item.Position = validItemPosition;
            }

            return fit;
        }

        if (!fit)
        {
            item.Position = validItemPosition;
        }

        return fit;
    }

    public string String()
    {
        return string.Format(
            "Bin: {0} ({1}x{2}x{3}) vol({4})",
            Name,
            Width,
            Height,
            Depth,
            GetVolume()
        );
    }
}
