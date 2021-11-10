using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        double r = Convert.ToDouble(tab[0]);
        double d = Convert.ToDouble(tab[1]);
        d /= 2;
        double nr = r * r - d * d;
        Console.WriteLine(nr * 3.141592654);
    }
}