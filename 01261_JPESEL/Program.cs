using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        int suma;
        int r = 0;
        int a, b, c, d, e, f, g, h, i, j, k;
        for(int z=0; z<t; z++)
        {
            suma = 0;
            s = Console.ReadLine();
            if(s.Length!=11)
            {
                Console.WriteLine("D");
                goto tsar;
            }
            a = Convert.ToInt32(s[0]) - 48;
            b = Convert.ToInt32(s[1]) - 48;
            c = Convert.ToInt32(s[2]) - 48;
            d = Convert.ToInt32(s[3]) - 48;
            e = Convert.ToInt32(s[4]) - 48;
            f = Convert.ToInt32(s[5]) - 48;
            g = Convert.ToInt32(s[6]) - 48;
            h = Convert.ToInt32(s[7]) - 48;
            i = Convert.ToInt32(s[8]) - 48;
            j = Convert.ToInt32(s[9]) - 48;
            k = Convert.ToInt32(s[10]) - 48;

            suma = a * 1 + b * 3 + c * 7 + d * 9 + e * 1 + f * 3 + g * 7 + h * 9 + i * 1 + j * 3 + k * 1;

            if(suma>0 && suma%10==0)
            {
                Console.WriteLine("D");
            }
            else
            {
                Console.WriteLine("N");
            }
            tsar:
            ;
        }
    }
}