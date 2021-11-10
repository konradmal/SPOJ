using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] tab;
        double a, b, c;
        while((s=Console.ReadLine()) != null)
        {
            tab = s.Split(' ');
            a = Convert.ToDouble(tab[0], System.Globalization.CultureInfo.InvariantCulture);
            b = Convert.ToDouble(tab[1], System.Globalization.CultureInfo.InvariantCulture);
            c = Convert.ToDouble(tab[2], System.Globalization.CultureInfo.InvariantCulture);

            if(a+b>=c && a+c>=b && b+c>=a && a>0 && b>0 && c>0)
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(0);
            }
        }
    }
}