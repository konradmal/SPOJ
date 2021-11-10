using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] ts;
        int wyn;
        for(int i=0; i<t; i++)
        {
            wyn = -1;
            s = Console.ReadLine();
            ts = s.Split(' ');
            foreach(var x in ts)
            {
                wyn = wyn + Convert.ToInt32(x);
            }
            Console.WriteLine(wyn);
        }
    }
}