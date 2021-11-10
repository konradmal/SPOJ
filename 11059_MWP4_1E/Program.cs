using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] ts;
        int n, q;
        int suma, wart;
        int[] tab;
        bool flaga;
        for(int i=0; i<t; i++)
        {
            q = 0;
            suma = 0;
            wart = 0;
            flaga = false;
            s = Console.ReadLine();
            ts = s.Split(' ');
            n = Convert.ToInt32(ts[0]);
            tab = new int[n];
            foreach (string x in ts)
            {
                if (flaga)
                {
                    tab[q] = Convert.ToInt32(x);
                    suma += tab[q];
                    q++;
                }
                else
                {
                    flaga = true;
                }
            }
            flaga = false;
            for (int j = 0; j < n - 1; j++)
            {
                wart += tab[j];
                suma -= tab[j];
                if (wart == suma)
                {
                    Console.WriteLine(j+1);
                    flaga = true;
                    break;
                }
            }
            if(!flaga)
            {
                Console.WriteLine(0);
            }
        }
    }
}