using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int n;
        double k;
        string s;
        string[] ts;
        double a, b, c, p;
        double suma;
        for (int i = 0; i < t; i++)
        {
            suma = 0;
            s = Console.ReadLine();
            ts = s.Split(' ', '\t');
            n = Convert.ToInt32(ts[0]);
            ts[1] = ts[1].Replace(".", ",");
            k = Convert.ToDouble(ts[1]);
            for (int j = 0; j < n; j++)
            {
                s = Console.ReadLine();
                ts = s.Split(' ', '\t');
                a = Convert.ToDouble(ts[0]);
                b = Convert.ToDouble(ts[1]);
                c = Convert.ToDouble(ts[2]);
                if (a + b > c && a + c > b && b + c > a)
                {
                    p = (a + b + c) / 2;
                    suma = suma + Math.Sqrt(p * (p - a) * (p - b) * (p - c));
                }
            }
            suma = suma * k / 10;
            Console.WriteLine(Math.Round(suma));
        }
    }
}