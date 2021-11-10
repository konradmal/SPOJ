using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int n = 0;
        int max = 0;
        string s;
        for(int i=0;i<t; i++)
        {
            s = Console.ReadLine();
            if (s == "for")
            {
                n++;
                if (n > max)
                    max = n;
            }
            else if (s == "end")
                n--;
        }
        if(max==0)
            Console.WriteLine("O(1)");
        else if(max==1)
            Console.WriteLine("O(n)");
        else
            Console.WriteLine("O(n^" + max + ")");
    }
}