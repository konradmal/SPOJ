using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] ts = s.Split(' ');
        double x = Convert.ToInt64(ts[0]);
        double y = Convert.ToInt64(ts[1]);
        double r = Convert.ToInt64(ts[2]);
        int t = int.Parse(Console.ReadLine());
        double x1, y1;
        double o1, o2, o3;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            ts = s.Split(' ');
            x1 = Convert.ToInt64(ts[0]);
            y1 = Convert.ToInt64(ts[1]);
            o1 = (x - x1) * (x - x1);
            o2 = (y - y1) * (y - y1);
            o3 = o1 + o2;
            o3 = Math.Sqrt(o3);
            if(o3<r)
            {
                Console.WriteLine("I");
            }
            else if(o3>r)
            {
                Console.WriteLine("O");
            }
            else
            {
                Console.WriteLine("E");
            }
        }
    }
}