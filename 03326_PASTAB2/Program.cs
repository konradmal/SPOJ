using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int[] tab = new int[t];
        for(int i=0; i<t; i++)
        {
            int x = int.Parse(Console.ReadLine());
            tab[i] = x;
        }
        string s = Console.ReadLine();
        string[] ss = s.Split(' ');
        int war = Convert.ToInt32(ss[1]);
        if(ss[0]==">")
        {
            for(int i=0; i<t; i++)
            {
                if(tab[i]>war)
                    Console.WriteLine(tab[i]);
            }
        }
        else
        {
            for(int i=0; i<t; i++)
            {
                if(tab[i]<war)
                    Console.WriteLine(tab[i]);
            }
        }
    }
}