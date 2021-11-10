using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine()), a, suma;
        string s;
        for(int i=0; i < t; i++)
        {
            a = int.Parse(Console.ReadLine());
            s = Console.ReadLine();
            string[] tab = s.Split(' ');
            suma = 0;
            foreach(var q in tab)
            {
                a = Convert.ToInt32(q);
                suma += a;
            }
            Console.WriteLine(suma);
        }
    }
}