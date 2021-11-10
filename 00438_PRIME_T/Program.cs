using System;

class Program
{
    static bool P(int a)
    {
        if(a<2)
        {
            return false;
        }
        else if (a == 4 || a == 6 || a == 8 || a == 9 || a == 10)
        {
            return false;
        }
        else
        {
            for(int i=2; i<=a/2; i++)
            {
                if(a%i==0)
                {
                    return false;
                }
                    
            }
        }

        return true;
    }

    static void Main(string[] args)
    {
        int x = int.Parse(Console.ReadLine());
        for(int i=0; i<x; i++)
        {
            int a = int.Parse(Console.ReadLine());
            if(P(a))
                Console.WriteLine("TAK");
            else
                Console.WriteLine("NIE");
        }
    }
}