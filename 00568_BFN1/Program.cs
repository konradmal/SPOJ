using System;

class Program
{
    static bool pal(int a)
    {
        string s = Convert.ToString(a);
        for (int i = 0; i < s.Length / 2; i++)
        {
            if (s[i] != s[s.Length - 1 - i])
                return false;
        }
        return true;
    }

    static int odw(int a)
    {
        string s = Convert.ToString(a);
        int wyn = 0;
        int mnoz = 1;
        for(int i = 0; i < s.Length; i++)
        {
            wyn = wyn + Convert.ToInt32(s[i] - 48) * mnoz;
            mnoz *= 10;
        }
        return wyn;
    }

    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int l;
        int ile1;
        int ile2;
        for(int i=0; i<t; i++)
        {
            ile1 = 0;
            l = int.Parse(Console.ReadLine());
            if(l<=9)
            {
                Console.WriteLine(l + " " + ile1);
            }
            else
            {
                for(; ; )
                {
                    if (pal(l))
                    {
                        Console.WriteLine(l + " " + ile1);
                        break;
                    }
                    else
                    {
                        ile2 = odw(l);
                        l += ile2;
                        ile1++;
                    }
                }
            }
        }
    }
}