using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int a, b, c;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            a = Convert.ToInt32(tab[0]);
            b = Convert.ToInt32(tab[1]);
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
            Console.WriteLine(2 * a);
        }
    }
}