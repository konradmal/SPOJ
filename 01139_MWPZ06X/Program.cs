using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int a;
        for(int i=0; i<t; i++)
        {
            a = int.Parse(Console.ReadLine());
            Console.WriteLine(a * a);
        }
    }
}