using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ItemModel : MonoBehaviour
{
    public string Name { get; set; }
    public double Width { get; set; }
    public double Height { get; set; }
    public double Depth { get; set; }
    public double Weight { get; set; }
    public int Rotation { get; set; }
    public List<double> Position { get; set; }

    public ItemModel(string name, double width, double height, double depth, double weight)
    {
        Name = name;
        Width = width;
        Height = height;
        Depth = depth;
        Weight = weight;
        Rotation = 0;
        Position = Globals.START_POSITION;
    }

    public void FormatNumbers()
    {
        Width = Convert.ToDouble(Width);
        Height = Convert.ToDouble(Height);
        Depth = Convert.ToDouble(Depth);
        Weight = Convert.ToDouble(Weight);
    }

    public double GetVolume()
    {
        return Convert.ToDouble(Width * Height * Depth);
    }

    public List<double> GetDimension()
    {
        switch (Rotation)
        {
            case RotationType.RT_WHD:
                return new List<double>() { Width, Height, Depth };
            case RotationType.RT_HWD:
                return new List<double>() { Height, Width, Depth };
            case RotationType.RT_HDW:
                return new List<double>() { Height, Depth, Width };
            case RotationType.RT_DHW:
                return new List<double>() { Depth, Height, Width };
            case RotationType.RT_DWH:
                return new List<double>() { Depth, Width, Height };
            case RotationType.RT_WDH:
                return new List<double>() { Width, Depth, Height };
            default:
                return new List<double>();
        }
    }

    public string String()
    {
        return string.Format(
            "Item: {0} ({1}x{2}x{3}) pos({4}, {5}, {6}) rt({7})) vol({8})",
            Name,
            Width,
            Height,
            Depth,
            Position[0],
            Position[1],
            Position[2],
            Rotation,
            GetVolume()
        );
    }
}
