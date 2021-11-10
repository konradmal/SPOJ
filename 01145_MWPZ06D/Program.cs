using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int a, b;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToInt32(tab[0]);
            b = Convert.ToInt32(tab[1]);
            if(a==1)
                Console.WriteLine("TAK");
            else
            {
                a--;
                if (b % a == 0)
                    Console.WriteLine("NIE");
                else
                    Console.WriteLine("TAK");
            }
        }
    }
}