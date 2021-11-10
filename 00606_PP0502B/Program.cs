using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int u, v, w, e;
        string s;
        string[] ts;
        for(int i=0;i<t;i++)
        {
            s = Console.ReadLine();
            ts = s.Split(' ');
            u = Convert.ToInt32(ts[0]);
            e = u;
            int[] tab = new int[u];
            w = 0;
            for(int j=u; j>0; j--)
            {
                v = Convert.ToInt32(ts[j]);
                tab[w] = v;
                w++;
            }
            for(int j=0; j<e-1; j++)
            {
                Console.Write(tab[j] + " ");
            }
            Console.WriteLine(tab[e-1]);
        }
    }
}