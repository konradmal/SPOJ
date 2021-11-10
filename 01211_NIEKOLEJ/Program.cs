using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        StringBuilder s = new StringBuilder("");

        if(t==0)
        {
            Console.WriteLine(0);
        }
        else if(t==1 || t==2)
            Console.WriteLine("NIE");
        else
        {
            for (int i = 1; i <= t; i += 2)
                s.Append(i + " ");
            for(int i=0;i<=t;i+=2)
                s.Append(i + " ");
        }
        Console.WriteLine(s);
    }
}