using System;

class Program
{
    static void Main(string[] args)
    {
        int t;
        string s;
        int a = 42, b;
        int ile = 0;
        while((s=Console.ReadLine())!=null)
        {
            t = Convert.ToInt32(s);
            Console.WriteLine(t);
            if(t==42 && a!=42)
            {
                ile++;
            }
            if (ile == 3)
                break;
            a = t;
        }
    }
}