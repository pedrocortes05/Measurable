using System;

namespace ThreeDimBinPacking
{
    class SampleClass
    {
        public void MyMethod()
        {
            System.Console.WriteLine("Creating my namespace");
		}
	}
}

namespace MyProgram
{
    public class Program
    {
        public static void Main()
        {
            System.Console.WriteLine("Starting...");
            ThreeDimBinPacking.SampleClass.myMethod();
        }
    }
}