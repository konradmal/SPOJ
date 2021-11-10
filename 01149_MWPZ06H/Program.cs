using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int n;
        int[] tab;
        string s;
        string[] st;
        int j;
        int ile;
        int ii;
        for(int i=0; i<t; i++)
        {
            j = 0;
            n = int.Parse(Console.ReadLine());
            tab = new int[n];
            ii = n - 2;
            s = Console.ReadLine();
            st = s.Split(' ');
            foreach(string x in st)
            {
                tab[j] = Convert.ToInt32(x);
                j++;
            }
            Array.Sort(tab);
            ile = 1;
            Console.Write(tab[n-1] + " ");
            while(ii >= 0 && tab[ii] == tab[n-1])
            {
                Console.Write(tab[n - 1] + " ");
                ii--;
                ile++;
            }
            for(j=0; j<=n-1-ile;j++)
            {
                Console.Write(tab[j] + " ");
            }
            Console.WriteLine();
        }
    }
}