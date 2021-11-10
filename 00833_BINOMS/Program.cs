using System;

class Program
{
    static double licznik(double x, double y)
    {
        if(x-y<y)
        {
            y = x - y;
        }
        double a = x - y + 1;
        double w = 1;
        for(;a <= x; a++)
        {
            w = w * a;
        }
        return w;
    }

    static double mianownik(double x, double y)
    {
        double w = 1;
        if(x-y<y)
        {
            y = x - y;
        }
        for(double i = 1; i<=y; i++)
        {
            w = w * i;
        }
        return w;
    }

    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        double a, b;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToUInt64(tab[0]);
            b = Convert.ToUInt64(tab[1]);
            if(b==0 || a==0)
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(Math.Round(licznik(a, b) / mianownik(a, b)));
            }
        }
    }
}