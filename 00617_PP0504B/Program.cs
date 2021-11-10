using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int a, b;
        string wyn;
        for(int i=0; i<t; i++)
        {
            wyn = "";
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = tab[0].Length;
            b = tab[1].Length;
            if(a>=b)
            {
                for(int j=0; j<b; j++)
                {
                    wyn = wyn + tab[0][j] + tab[1][j];
                }
            }
            else
            {
                for (int j = 0; j < a; j++)
                {
                    wyn = wyn + tab[0][j] + tab[1][j];
                }
            }
            Console.WriteLine(wyn);
        }
    }
}