using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] st = s.Split(' ');
        int a = Convert.ToInt32(st[0]);
        int b = Convert.ToInt32(st[1]);
        s = Console.ReadLine();
        st = s.Split(' ');
        int[] tab = new int[a];
        int i = 0;
        foreach(var x in st)
        {
            tab[i] = Convert.ToInt32(x);
            i++;
        }
        for (i = 0; i < a; i++)
        {
            Console.Write(tab[b++] + " ");
            if(b==a)
            {
                b = 0;
            }
        }
    }
}