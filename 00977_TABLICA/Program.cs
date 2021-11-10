using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] tab;
        s = Console.ReadLine();
        tab = s.Split(' ');
        int n = tab.Length;
        int x;
        int[] wyn = new int[n];
        for(int i=0; i<n; i++)
        {
            x = Convert.ToInt32(tab[n - 1 - i]);
            wyn[i] = x;
        }
        for(int i=0; i<n-1;i++)
        {
            Console.Write(wyn[i] + " ");
        }
        Console.WriteLine(wyn[n-1]);
    }
}