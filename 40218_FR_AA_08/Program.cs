using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] ts = s.Split(' ');
        if ((Math.Abs(ts[0][0] - ts[1][0]) == 1 && Math.Abs(ts[0][1] - ts[1][1]) == 2) || (Math.Abs(ts[0][0] - ts[1][0]) == 2 && Math.Abs(ts[0][1] - ts[1][1]) == 1))
        {
            Console.WriteLine("TAK");
        }
        else
            Console.WriteLine("NIE");
    }
}