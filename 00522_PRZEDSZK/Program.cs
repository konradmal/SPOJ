using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int a, b, c, a1, b1;
        string s;
        string[] tab;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = int.Parse(tab[0]);
            b = int.Parse(tab[1]);
            a1 = a;
            b1 = b;
            if(b>a)
            {
                c = b;
                b = a;
                a = c;
            }
            while(b!=0)
            {
                c = a % b;
                a = b;
                b = c;
            }
            c = a1 * b1 / a;
            Console.WriteLine(c);
        }
    }
}