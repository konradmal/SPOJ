using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int a, b, c;
        for(int i=0; i<t; i++)
        {
            string s = Console.ReadLine();
            string[] tab = s.Split(' ');
            a = Convert.ToInt32(tab[0]);
            b = Convert.ToInt32(tab[1]);
            if (b > a)
            {
                c = a;
                a = b;
                b = c;
            }
            while (b != 0)
            {
                c = b;
                a %= b;
                b = a;
                a = c;
            }
            Console.WriteLine(a);
        }
        
    }
}