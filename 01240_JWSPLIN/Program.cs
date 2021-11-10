using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        double a, b, c, d, e, f, x1, y1, x2, y2, x3, y3;
        string s;
        string[] tab;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split('\t');
            a = Convert.ToDouble(tab[0]);
            b = Convert.ToDouble(tab[1]);
            c = Convert.ToDouble(tab[2]);
            d = Convert.ToDouble(tab[3]);
            e = Convert.ToDouble(tab[4]);
            f = Convert.ToDouble(tab[5]);
            x1 = (b - d) / (a - c);
            x2 = (b - f) / (a - e);
            x3 = (d - f) / (c - e);
            y1 = (b - (b - d) / (a - c) * a);
            y2 = (b - (b - f) / (a - e) * a);
            y3 = (d - (d - f) / (c - e) * c);
            if (x1==x2 && x2==x3 && y1==y2 && y2==y3)
                Console.WriteLine("TAK");
            else if((a == c && c == e) || (b==d && d==f))
                Console.WriteLine("TAK");
            else
                Console.WriteLine("NIE");
        }
    }
}