using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int wi, pi, wj, pj;
        string s;
        string[] ts;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            ts = s.Split(' ');
            wi = Convert.ToInt32(ts[0]);
            pi = Convert.ToInt32(ts[1]);
            wj = Convert.ToInt32(ts[2]);
            pj = Convert.ToInt32(ts[3]);
            if(wi > wj)
            {
                if (Math.Abs(pi - pj) % 3 == 1)
                {
                    Console.WriteLine(0);
                }
                else
                {
                    Console.WriteLine(1);
                }
            }
            else
            {
                if (Math.Abs(pi - pj) % 3 == 1)
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
}