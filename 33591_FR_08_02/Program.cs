using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int a, b, c, d, e, f, g, h;
        int swin, slost, tot, trzy;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToInt32(tab[0]);
            b = Convert.ToInt32(tab[1]);
            c = Convert.ToInt32(tab[2]);
            d = Convert.ToInt32(tab[3]);
            e = Convert.ToInt32(tab[4]);
            f = Convert.ToInt32(tab[5]);
            swin = a + c + e;
            slost = b + d + f;
            tot = a + b + c + d + e + f;
            trzy = tot / 3;
            tot += trzy;
            tot /= 2;
            g = tot - swin;
            h = tot - slost;
            Console.WriteLine(g + " " + h);
        }
    }
}