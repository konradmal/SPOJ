using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] ts;
        double suma;
        double sumacalk = 0;
        double l;
        while ((s = Console.ReadLine()) != null)
        {
            ts = s.Split(' ');
            suma = 0;
            foreach(var x in ts)
            {
                l = Convert.ToDouble(x);
                suma += l;
            }
            suma = Math.Round(suma);
            Console.WriteLine(suma);
            sumacalk += suma;
        }
        sumacalk = Math.Round(sumacalk);
        Console.WriteLine(sumacalk);
    }
}