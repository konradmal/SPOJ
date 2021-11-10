using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        int a, b, c, d;
        string[] tab = s.Split(' ');
        a = Convert.ToInt32(tab[0]);
        b = Convert.ToInt32(tab[1]);
        c = Convert.ToInt32(tab[2]);
        d = Convert.ToInt32(tab[3]);
        int e = a * b + c * d;
        Console.WriteLine(e);
    }
}