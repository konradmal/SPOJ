using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] ts = s.Split(' ');
        int n = Convert.ToInt32(s[s.Length - 1]);
        int rok = Convert.ToInt32(ts[1]);
        n *= 2;
        n += 5;
        n *= 50;
        n += 1771;
        n -= rok;
        int i = n % 10;
        n /= 10;
        string wyn = Convert.ToString(i);
        i = n % 10;
        if (i > 0)
        {
            wyn = Convert.ToString(i) + wyn;
        }
        Console.WriteLine(wyn);
    }
}