using System;

class Program
{
    static void Main(string[] args)
    {
        int t;
        t = Convert.ToInt32(Console.ReadLine());
        int suma = 0;
        int max = 0;
        int x;
        for(int i=0; i<t; i++)
        {
            x = Convert.ToInt32(Console.ReadLine());
            suma += x;
            if (suma > max)
            {
                max = suma;
            }
            if(suma < 0)
            {
                suma = 0;
            }
        }
        Console.WriteLine(max);
    }
}