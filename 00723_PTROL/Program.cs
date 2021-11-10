using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int n, a;
        for(int i=0; i<t; i++)
        {
            a = 2;
            s = Console.ReadLine();
            tab = s.Split(' ');
            n = Convert.ToInt32(tab[0]);
            int[] wyn = new int[n];
            int j;
            for(j=0; j<n-1; j++)
            {
                int x = Convert.ToInt32(tab[a]);
                wyn[j] = x;
                a++;
            }
            wyn[j] = Convert.ToInt32(tab[1]);
            for(j=0; j<n-1; j++)
            {
                Console.Write(wyn[j] + " ");
            }
            Console.WriteLine(wyn[j]);
        }
    }
}