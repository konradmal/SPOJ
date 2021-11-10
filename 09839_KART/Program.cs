using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int x;
        int y;
        int suma;
        for(int i=0; i<t; i++)
        {
            suma = 0;
            y = 5;
            if(int.TryParse(Console.ReadLine(), out x))
            {
                while (y <= x)
                {
                    suma += x / y;
                    y *= 5;
                }
                Console.WriteLine(suma);
            }
        }
    }
}