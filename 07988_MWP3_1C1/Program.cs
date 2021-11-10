using System;

class Program
{
    static int NWD(int a, int b)
    {
        int tmp;
        if (b > a)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        while (b != 0)
        {
            tmp = a % b;
            a = b;
            b = tmp;
        }
        return a;
    }

    static bool Lp(int a)
    {
        if (a >= 2)
        {
            if (a == 2)
            {
                return true;
            }
            else if (a != 2 && a % 2 == 0)
            {
                return false;
            }
        }
        else
        {
            return false;
        }

        for (int j = 3; j <= Math.Sqrt(a); j += 2)
        {
            if (a % j == 0)
                return false;
        }
        return true;
    }

    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] ts;
        int x, y;
        int j, k;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            ts = s.Split(' ');
            x = Convert.ToInt32(ts[0]);
            y = Convert.ToInt32(ts[1]);
            k = Convert.ToInt32(Math.Sqrt(x));
            if (x == y)
            {
                if (Lp(x))
                {
                    Console.WriteLine(1);
                }
                else if (x % 2 == 0)
                {
                    Console.WriteLine(x / 2);
                }
                else if (k * k == x)
                {
                    Console.WriteLine(k);
                }
                else
                {
                        j = 3;
                        while (x % j != 0)
                        {
                            j += 2;
                        }
                        Console.WriteLine(x / j);
                }
            }
            else
            {
                Console.WriteLine(NWD(x, y));
            }
        }
    }
}