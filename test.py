from py3dbp import Packer, Bin, Item

packer = Packer()

packer.add_bin(Bin("Hatsune Miku Luggage", 23.6875, 11.75, 3.0, 70.0))

packer.add_item(Item("Keyboard", 3.9370, 1.9685, 1.9685, 1))
packer.add_item(Item("T-Shirt", 3.9370, 1.9685, 1.9685, 1))

packer.pack()

for b in packer.bins:
    print(":::::::::::", b.string())

    print("FITTED ITEMS:")
    for item in b.items:
        print("====> ", item.string())

    print("UNFITTED ITEMS:")
    for item in b.unfitted_items:
        print("====> ", item.string())

    print("***************************************************")
    print("***************************************************")