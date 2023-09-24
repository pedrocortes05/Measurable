namespace ConsoleApp1;

public class ThreeDBinPacker
{
    public void MyMethod()
    {
        System.Console.WriteLine("Creating my namespace");
    }
}

// CONSTANTS
public class RotationType
{
    public static readonly int RT_WHD = 0;
    public static readonly int RT_HWD = 1;
    public static readonly int RT_HDW = 2;
    public static readonly int RT_DHW = 3;
    public static readonly int RT_DWH = 4;
    public static readonly int RT_WDH = 5;
    public static readonly int[] ALL = new int[] { RT_WHD, RT_HWD, RT_HDW, RT_DHW, RT_DWH, RT_WDH };
}

public class Axis
{
    public static readonly int WIDTH = 0;
    public static readonly int HEIGHT = 1;
    public static readonly int DEPTH = 2;
    public static readonly int[] ALL = new int[] { WIDTH, HEIGHT, DEPTH };
}

public bool RectIntersect(ItemModel item1, ItemModel item2, int x, int y)
{
    double d1 = item1.GetDimension();
    double d2 = item2.GetDimension();

    double cx1 = item1.Position[x] + d1[x]/2;
    double cy1 = item1.Position[y] + d1[y]/2;
    double cx2 = item2.Position[x] + d2[x]/2;
    double cy2 = item2.Position[y] + d2[y]/2;

    double ix = Math.Max(cx1, cx2) - Math.Min(cx1, cx2);
    double iy = Math.Max(cy1, cy2) - Math.Min(cy1, cy2);

    return ix < (d1[x]+d2[x])/2 && iy < (d1[y]+d2[y])/2;
}

public bool Intersect(ItemModel item1, ItemModel item2)
{
    return (
        RectIntersect(item1, item2, Axis.WIDTH, Axis.HEIGHT) &&
        RectIntersect(item1, item2, Axis.HEIGHT, Axis.DEPTH) &&
        RectIntersect(item1, item2, Axis.WIDTH, Axis.DEPTH)
    );
}

public double GetLimitNumberOfDecimals(int numberOfDecimals)
{
    return Decimal("1." +  + new string('0', numberOfDecimals)); // Decimal doesnt exist yet
}

DEFAULT_NUMBER_OF_DECIMALS = 3
START_POSITION = [0, 0, 0]

// MODELS
public class ItemModel
{
    public ItemModel(string name, int width, int height, int depth, int weight)
    {
        Name = name;
        Width = width;
        Height = height;
        Depth = depth;
        Weight = weight;
        RotationType = 0;
        Position = START_POSITION;
        NumberOfDecimals = DEFAULT_NUMBER_OF_DECIMALS;
    }

    public void FormatNumbers(int numberOfDecimals)
    {
        Width = SetToDecimal(Width, NumberOfDecimals);
        Height = SetToDecimal(Height, NumberOfDecimals);
        Depth = SetToDecimal(Depth, NumberOfDecimals);
        Weight = SetToDecimal(Weight, NumberOfDecimals);
        NumberOfDecimals = numberOfDecimals;
    }
    
    public double GetVolume()
    {
        return SetToDecimal(Width * Height * Depth, NumberOfDecimals);
    }

    public double GetDimension()
    {
        switch(RotationType)
        {
            case RotationType.RT_WHD:
                return new double[] { Width, Height, Depth };
            case RotationType.RT_HWD:
                return new double[] { Height, Width, Depth };
            case RotationType.RT_HDW:
                return new double[] { Height, Depth, Width };
            case RotationType.RT_DHW:
                return new double[] { Depth, Height, Width };
            case RotationType.RT_DWH:
                return new double[] { Depth, Width, Height };
            case RotationType.RT_WDH:
                return new double[] { Width, Depth, Height };
            default:
                return new double[] { };
        }
    }
}

public class BinModel
{
    public BinModel(string name, int width, int height, int depth, int maxWeight)
    {
        Name = name;
        Width = width;
        Height = height;
        Depth = depth;
        MaxWeight = maxWeight;
        Items = new List<ItemModel>();
        UnfittedItems = new List<ItemModel>();
        NumberOfDecimals = DEFAULT_NUMBER_OF_DECIMALS;
    }

    public void FormatNumbers(int numberOfDecimals)
    {
        Width = SetToDecimal(Width, NumberOfDecimals);
        Height = SetToDecimal(Height, NumberOfDecimals);
        Depth = SetToDecimal(Depth, NumberOfDecimals);
        MaxWeight = SetToDecimal(MaxWeight, NumberOfDecimals);
        NumberOfDecimals = numberOfDecimals;
    }

    public double GetVolume()
    {
        return SetToDecimal(Width * Height * Depth, NumberOfDecimals);
    }

    public double GetTotalWeight()
    {
        double totalWeight = 0;

        foreach (ItemModel item in Items)
        {
            totalWeight += item.Weight;
        }

        return SetToDecimal(totalWeight, NumberOfDecimals);
    }

    public bool PutItem(ItemModel item, List<int> pivot)
    {
        bool fit = false;
        List<int> validItemPosition = item.Position;
        item.Position = pivot;

        for (int i = 0; i < RotationType.ALL.Length; i++)
        {
            item.RotationType = i;
            double[] dimension = item.GetDimension();
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
                if (Intersect(currentItemInBin, item))
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
}

public class PackerModel
{
    public PackerModel()
    {
        Bins = new List<BinModel>();
        Items = new List<ItemModel>();
        UnfitItems = new List<ItemModel>();
        TotalItems = 0;
    }

    public List<BinModel> AddBin(BinModel bin)
    {
        return Bins.Add(bin);
    }

    public List<ItemModel> AddItem(ItemModel item)
    {
        TotalItems = Items.Length + 1;
        return Items.Add(item);
    }

    public void PackToBin(List<BinModel> bin, List<ItemModel> item)
    {
        bool fitted = false;

        if (!bin.Items)
        {
            response = bin.PutItem(item, START_POSITION);

            if (!response)
            {
                bin.UnfittedItems.Add(item);
            }

            return;
        }

        for (int axis = 0; axis < 3; axis++)
        {
            itemsInBin = bin.Items;

            foreach (ItemModel ib in itemsInBin)
            {
                pivot = [0, 0, 0]; //Can you do this????
                w, h, d = ib.GetDimension();
                if (axis == Axis.WIDTH)
                {
                    pivot = [
                        ib.Position[0] + w,
                        ib.Position[1],
                        ib.Position[2]
                    ];
                }
                else if (axis == Axis.HEIGHT)
                {
                    pivot = [
                        ib.Position[0],
                        ib.Position[1] + h,
                        ib.Position[2]
                    ];
                }
                else if (axis == Axis.DEPTH)
                {
                    pivot = [
                        ib.Position[0],
                        ib.Position[1],
                        ib.Position[2] + d
                    ];
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

    public void Pack(bool biggerFirst = false, bool distributeItems = false, int numberOfDecimals = DEFAULT_NUMBER_OF_DECIMALS)
    {
        foreach (BinModel bin in Bins)
        {
            bin.FormatNumbers(numberOfDecimals);
        }

        foreach (ItemModel item in Items)
        {
            item.FormatNumbers(numberOfDecimals);
        }

        Bins.Sort(key=lambda bin: bin.GetVolume(), reverse=biggerFirst);
        Items.Sort(key=lambda item: item.GetVolume(), reverse=biggerFirst);

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