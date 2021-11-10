using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] tab;
        int n;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');
            n = Convert.ToInt32(tab[0]);
            if(n==0)
                Console.WriteLine();
            else if(n==1)
                Console.WriteLine(Convert.ToInt32(tab[1]));
            else if(n==2)
                Console.WriteLine(Convert.ToInt32(tab[2]) + " " + Convert.ToInt32(tab[1]));
            else
            {
                for(int j=2; j<=n; j+=2)
                {
                    Console.Write(Convert.ToInt32(tab[j]) + " ");
                }
                if(n%2==1)
                {
                    for(int j=1; j<=n-2; j+=2)
                    {
                        Console.Write(Convert.ToInt32(tab[j]) + " ");
                    }
                    Console.WriteLine(Convert.ToInt32(tab[n]));
                }
                else
                {
                    for (int j = 1; j <= n - 2; j += 2)
                    {
                        Console.Write(Convert.ToInt32(tab[j]) + " ");
                    }
                    Console.WriteLine(Convert.ToInt32(tab[n-1]));
                }
            }
        }
    }
}