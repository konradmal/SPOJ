using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        int a, b, c;
        a = Convert.ToInt32(tab[0]);
        b = Convert.ToInt32(tab[1]);
        c = Convert.ToInt32(tab[2]);
        int suma = 0;
        for(int i=2; i<t; i++)
        {
            a = Convert.ToInt32(tab[i-2]);
            b = Convert.ToInt32(tab[i-1]);
            c = Convert.ToInt32(tab[i]);
            if (a + b == c)
                suma++;
        }
        Console.WriteLine(suma);
    }
}