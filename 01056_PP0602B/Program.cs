using System;

class Program
{
    static void Main(string[] args)
    {
        int t, tmp, i, j;
        t = Convert.ToInt32(Console.ReadLine());
        int x, y;

        for (int z = 0; z < t; z++)
        {
            string s = Console.ReadLine();
            string[] s1 = s.Split(' ');
            x = Convert.ToInt32(s1[0]);
            y = Convert.ToInt32(s1[1]);
            int n = x * y;
            int[] tab = new int[n];
            for (i = 0; i < x; i++)
            {
                s = Console.ReadLine();
                s1 = s.Split(' ', '\t');
                for (j = 0; j < y; j++)
                {
                    tab[i * y + j] = Convert.ToInt32(s1[j]);
                }
            }

            tmp = tab[0];
            for (i = 0; i < y - 1; i++)
            {
                tab[i] = tab[i + 1];
            }
            for (i = y - 1; i < n - y; i = i + y)
            {
                tab[i] = tab[i + y];
            }
            for (i = n - 1; i > (x - 1) * y; i--)
            {
                tab[i] = tab[i - 1];
            }
            for (i = (x - 1) * y; i > 0; i = i - y)
            {
                tab[i] = tab[i - y];
            }

            tab[i + y] = tmp;

            for (i = 0; i < x; i++)
            {
                for (j = 0; j < y - 1; j++)
                {
                    Console.Write(tab[i * y + j] + " ");
                }
                Console.WriteLine(tab[i * y + j]);
            }
        }
        
        
    }
}