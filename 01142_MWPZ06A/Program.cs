using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        double a, b, c;
        string s;
        string[] tab;
        double ul;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToDouble(tab[0]);
            b = Convert.ToDouble(tab[1]);
            c = Convert.ToDouble(tab[2]);
            
            a += b;
            b *= c;
            c--;
            ul = -12 * (a - b) / c;
            Console.WriteLine(Math.Round(ul));
        }
    }
}