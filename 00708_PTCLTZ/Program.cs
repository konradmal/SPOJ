using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int a, n;
        for(int i=0; i<t; i++)
        {
            n = 0;
            a = int.Parse(Console.ReadLine());
            while(a!=1)
            {
                if(a%2==0)
                {
                    a /= 2;
                }
                else
                {
                    a = 3 * a + 1;
                }
                n++;
            }
            Console.WriteLine(n);
        }
    }
}