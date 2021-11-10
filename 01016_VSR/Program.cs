using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        double a, b, c;
        string s;
        string[] tab;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToInt32(tab[0]);
            b = Convert.ToInt32(tab[1]);
            c = 2 * ((a * b) / (a + b));
            Console.WriteLine(c);
        }
    }
}