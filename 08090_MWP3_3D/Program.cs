using System;
using System.Globalization;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] ts;
        double a, b;
        double wyn;
        string s1;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            ts = s.Split(' ');
            a = Convert.ToDouble(ts[0]);
            b = Convert.ToDouble(ts[1]);
            NumberFormatInfo setPrecision = new NumberFormatInfo();
            setPrecision.NumberDecimalDigits = 3;
            if (b%2==0)
            {
                wyn = Math.Round(System.Math.PI * a / b, 3);
                s1 = Convert.ToString(wyn);
                Console.WriteLine(wyn.ToString("0.000" + " " + b / 2));
                //Console.WriteLine(String.Format("{0:0.000}", wyn) + " " + b / 2);
            }
            else
            {
                wyn = Math.Round(System.Math.PI * a / b / 2, 3);
                s1 = Convert.ToString(wyn);
                Console.WriteLine(wyn.ToString("0.000" + " " + b));
                //Console.WriteLine(String.Format("{0:0.000}", wyn) + " " + b);
            }
           
        }
    }
}