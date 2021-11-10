using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        int[] wyn= new int[101];
        for(int i=0; i<t; i++)
        {
            int x = Convert.ToInt32(tab[i]);
            wyn[x + 50]++;
        }
        int ile = 0;
        for(int i=0; i<101; i++)
        {
            if (wyn[i] > 0)
                ile++;
        }
        Console.WriteLine(ile);
    }
}