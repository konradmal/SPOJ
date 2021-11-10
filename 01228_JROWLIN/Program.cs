using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        double a = Convert.ToDouble(tab[0], System.Globalization.CultureInfo.InvariantCulture);
        double b = Convert.ToDouble(tab[1], System.Globalization.CultureInfo.InvariantCulture);
        double c = Convert.ToDouble(tab[2], System.Globalization.CultureInfo.InvariantCulture);
        double wynik;
        c -= b;
        if (c == 0 && a == 0)
        {
            Console.WriteLine("NWR");
        }
        else if (a == 0 && c != 0)
        {
            Console.WriteLine("BR");
        }
        else
        {
            wynik = c / a;
            wynik = Math.Round(wynik, 2);
            if(wynik%1==0)
            {
                Console.WriteLine(wynik + ".00");
            }
            else
            {
                Console.WriteLine(wynik);
            }
            
        }
    }
}