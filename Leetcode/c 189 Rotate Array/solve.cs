using System;

class Program{
    public static void Main()
    {
        int[] a = { 1, 4, 5, 2, 3, 7, 8 };
        Array.Sort(a);
        foreach (int i in a)
        {
            Console.WriteLine(i);
        }
    }
}