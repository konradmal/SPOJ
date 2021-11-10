using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int a, b, c, n;
        int[] liczby;
        int licz;
        for(int i=0; i<t; i++)
        {
            licz = 0;
            liczby = new int[1000];
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToInt32(tab[0]);
            b = Convert.ToInt32(tab[1]);
            c = Convert.ToInt32(tab[2]);
            for(int j=2; j<a; j++)
            {
                if(j%b==0 && j%c!=0)
                {
                    liczby[licz] = j;
                    licz++;
                }
            }
            n = liczby.Length;
            for(int j=0; j<n-1; j++)
            {
                if(liczby[j]!=0)
                    Console.Write(liczby[j] + " ");
            }
            if (liczby[n-1] != 0)
                Console.WriteLine(liczby[n-1]);
            else
                Console.WriteLine();
        }
    }
}