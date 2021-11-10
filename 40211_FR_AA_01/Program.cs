using System;

class Program
{
    static void Main(string[] args)
    {
        int suma = 0;
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        int a = Convert.ToInt32(tab[0]);
        int b = Convert.ToInt32(tab[1]);
        suma = suma + a - b;
        s = Console.ReadLine();
        tab = s.Split(' ');
        a = Convert.ToInt32(tab[0]);
        b = Convert.ToInt32(tab[1]);
        suma = suma + a - b;
        s = Console.ReadLine();
        tab = s.Split(' ');
        a = Convert.ToInt32(tab[0]);
        b = Convert.ToInt32(tab[1]);
        suma = suma + a - b;
        s = Console.ReadLine();
        tab = s.Split(' ');
        a = Convert.ToInt32(tab[0]);
        b = Convert.ToInt32(tab[1]);
        suma = suma + a - b;
        Console.WriteLine(suma);
    }
}