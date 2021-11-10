using System;

class Program
{
    static void Main(string[] args)
    {
        int suma = 0;
        int x;
        string s;
        while ((s = Console.ReadLine()) != null)
        {
            x = int.Parse(s);
            suma += x;
            Console.WriteLine(suma);
        }
    }
}