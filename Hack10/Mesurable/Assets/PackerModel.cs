using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PackerModel : MonoBehaviour
{
    public List<BinModel> Bins { get; set; }
    public List<ItemModel> Items { get; set; }
    public List<ItemModel> UnfitItems { get; set; }
    public int TotalItems { get; set; }

    public PackerModel()
    {
        Bins = new List<BinModel>();
        Items = new List<ItemModel>();
        UnfitItems = new List<ItemModel>();
        TotalItems = 0;
    }

    public void AddBin(BinModel bin)
    {
        Bins.Add(bin);
    }

    public void AddItem(ItemModel item)
    {
        TotalItems = Items.Count + 1;
        Items.Add(item);
    }

    public void PackToBin(BinModel bin, ItemModel item)
    {
        bool fitted = false;

        if (bin.Items.Count == 0)
        {
            bool response = bin.PutItem(item, Globals.START_POSITION);

            if (!response)
            {
                bin.UnfittedItems.Add(item);
            }

            return;
        }

        for (int axis = 0; axis < 3; axis++)
        {
            List<ItemModel> itemsInBin = bin.Items;

            foreach (ItemModel ib in itemsInBin)
            {
                List<double> pivot = new List<double>() { 0, 0, 0 };
                List<double> dimensions = ib.GetDimension();
                double w = dimensions[0];
                double h = dimensions[1];
                double d = dimensions[2];
                if (axis == Axis.WIDTH)
                {
                    pivot = new List<double>() { 
                        ib.Position[0] + w,
                        ib.Position[1],
                        ib.Position[2]
                    };
                }
                else if (axis == Axis.HEIGHT)
                {
                    pivot = new List<double>() { 
                        ib.Position[0],
                        ib.Position[1] + h,
                        ib.Position[2]
                    };
                }
                else if (axis == Axis.DEPTH)
                {
                    pivot = new List<double>() { 
                        ib.Position[0],
                        ib.Position[1],
                        ib.Position[2] + d
                    };
                }

                if (bin.PutItem(item, pivot))
                {
                    fitted = true;
                    break;
                }
            }
            if (fitted)
            {
                break;
            }
        }

        if (!fitted)
        {
            bin.UnfittedItems.Add(item);
        }
    }

    public void Pack(bool biggerFirst = false, bool distributeItems = false)
    {
        foreach (BinModel bin in Bins)
        {
            bin.FormatNumbers();
        }

        foreach (ItemModel item in Items)
        {
            item.FormatNumbers();
        }

        Bins.Sort((bin1, bin2) => {
            // Compare bins based on volume
            double volume1 = bin1.GetVolume();
            double volume2 = bin2.GetVolume();

            if (biggerFirst)
            {
                // Sort in descending order (bigger first)
                return volume2.CompareTo(volume1);
            }
            else
            {
                // Sort in ascending order (smaller first)
                return volume1.CompareTo(volume2);
            }
        });

        Items.Sort((item1, item2) => {
            // Compare items based on volume
            double volume1 = item1.GetVolume();
            double volume2 = item2.GetVolume();

            if (biggerFirst)
            {
                // Sort in descending order (bigger first)
                return volume2.CompareTo(volume1);
            }
            else
            {
                // Sort in ascending order (smaller first)
                return volume1.CompareTo(volume2);
            }
        });

        foreach (BinModel bin in Bins)
        {
            foreach (ItemModel item in Items)
            {
                PackToBin(bin, item);
            }

            if (distributeItems)
            {
                foreach (ItemModel item in bin.Items)
                {
                    Items.Remove(item);
                }
            }
        }
    }
}