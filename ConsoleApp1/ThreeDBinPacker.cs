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
}