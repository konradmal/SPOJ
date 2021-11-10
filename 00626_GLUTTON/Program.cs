using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int n, m, o;
        int wynik;
        int jeden;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            m = Convert.ToInt32(tab[0]);
            n = Convert.ToInt32(tab[1]);
            wynik = 0;
            for(int j=0; j<m; j++)
            {
                o = int.Parse(Console.ReadLine());
                jeden = 86400 / o;
                wynik += jeden;
            }
            if(wynik % n == 0)
                Console.WriteLine(wynik / n);
            else
                Console.WriteLine(wynik / n + 1);
        }
    }
}