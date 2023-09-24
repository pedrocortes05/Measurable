namespace ConsoleApp1;

// CONSTANTS
public class RotationType
{
    public const int RT_WHD = 0;
    public const int RT_HWD = 1;
    public const int RT_HDW = 2;
    public const int RT_DHW = 3;
    public const int RT_DWH = 4;
    public const int RT_WDH = 5;
    public static List<int> ALL = new List<int>() { RT_WHD, RT_HWD, RT_HDW, RT_DHW, RT_DWH, RT_WDH };
}

public class Axis
{
    public const int WIDTH = 0;
    public const int HEIGHT = 1;
    public const int DEPTH = 2;
    public static List<int> ALL = new List<int>() { WIDTH, HEIGHT, DEPTH };
}

public class AuxilaryMethods
{
    public static bool RectIntersect(ItemModel item1, ItemModel item2, int x, int y)
    {
        List<double> d1 = item1.GetDimension();
        List<double> d2 = item2.GetDimension();

        double cx1 = item1.Position[x] + d1[x]/2;
        double cy1 = item1.Position[y] + d1[y]/2;
        double cx2 = item2.Position[x] + d2[x]/2;
        double cy2 = item2.Position[y] + d2[y]/2;

        double ix = Math.Max(cx1, cx2) - Math.Min(cx1, cx2);
        double iy = Math.Max(cy1, cy2) - Math.Min(cy1, cy2);

        return ix < (d1[x]+d2[x])/2 && iy < (d1[y]+d2[y])/2;
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

// GLOBALS
public static class Globals
{
    public static readonly int DEFAULT_NUMBER_OF_DECIMALS = 3;
    public static readonly List<double> START_POSITION = new List<double>() { 0, 0, 0 };
}

// MODELS
public class ItemModel
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
        switch(Rotation)
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

public class BinModel
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
            "Bin: {0} ({1}x{2}x{3})",
            Name,
            Width,
            Height,
            Depth
        );
    }
}

public class PackerModel
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