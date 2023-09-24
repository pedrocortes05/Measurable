namespace ConsoleApp1;

public class ThreeDBinPacker
{
    public void MyMethod()
    {
        System.Console.WriteLine("Creating my namespace");
    }
}

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

