using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] st;
        int a, b;
        int[] tab;
        int i;
        int ile;
        while ((s = Console.ReadLine()) != null)
        {
            i = 0;
            ile = 0;
            st = s.Split(' ');
            a = Convert.ToInt32(st[0]);
            b = Convert.ToInt32(st[1]);
            tab = new int[b + 2];
            foreach(string x in st)
            {
                tab[i] = Convert.ToInt32(x);
                if (i>=2 && (tab[i] == a))
                {
                    ile++;
                }
                i++;
            }
            Console.WriteLine(ile);
        }
    }
}