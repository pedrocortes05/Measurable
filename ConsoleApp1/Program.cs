using ConsoleApp1;

Console.WriteLine("Hello, World!");

PackerModel packer = new PackerModel();

packer.AddBin(new BinModel("small-envelope", 11.5, 6.125, 0.25, 10));
packer.AddBin(new BinModel("large-2-box", 23.6875, 11.75, 3.0, 70.0));

packer.AddItem(new ItemModel("50g [powder 1]", 3.9370, 1.9685, 1.9685, 1));
packer.AddItem(new ItemModel("50g [powder 2]", 4.9370, 1.9685, 1.9685, 2));

packer.Pack();

foreach (BinModel b in packer.Bins)
{   
    Console.WriteLine(":::::::::::" + b.String());

    Console.WriteLine("FITTED ITEMS:");
    foreach (ItemModel item in b.Items)
    {
        Console.WriteLine("====> " + item.String());
    }
    Console.WriteLine("UNFITTED ITEMS:");
    foreach (ItemModel item in b.UnfittedItems)
    {
        Console.WriteLine("====> " + item.String());
    }
    Console.WriteLine("***************************************************");
    Console.WriteLine("***************************************************");
}