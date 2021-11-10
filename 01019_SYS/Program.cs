using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        int x;
        int a, b, r;
        string s1, s2;
        for(int i=0; i<t; i++)
        {
            x = int.Parse(Console.ReadLine());
            s1 = "";
            s2 = "";
            a = x;
            b = x;
            while(a>0)
            {
                r = a % 16;
                if (r == 0 || r == 1 || r == 2 || r == 3 || r == 4 || r == 5 || r == 6 || r == 7 || r == 8 || r == 9)
                    s1 = r + s1;
                else if (r == 10)
                    s1 = 'A' + s1;
                else if (r == 11)
                    s1 = 'B' + s1;
                else if (r == 12)
                    s1 = 'C' + s1;
                else if (r == 13)
                    s1 = 'D' + s1;
                else if (r == 14)
                    s1 = 'E' + s1;
                else
                    s1 = 'F' + s1;
                a /= 16;
            }
            while(b>0)
            {
                r = b % 11;
                if (r == 0 || r == 1 || r == 2 || r == 3 || r == 4 || r == 5 || r == 6 || r == 7 || r == 8 || r == 9)
                    s2 = r + s2;
                else
                    s2 = 'A' + s2;
                b /= 11;
            }
            Console.WriteLine(s1 + " " + s2);
        }
    }
}