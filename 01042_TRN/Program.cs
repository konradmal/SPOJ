using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        int a = Convert.ToInt32(tab[0]);
        int b = Convert.ToInt32(tab[1]);
        int[] t = new int[a * b];
        int j;
        for(int i=0; i<a; i++)
        {
            s = Console.ReadLine();
            tab = s.Split(' ');

            for(j=0; j<b; j++)
            {
                t[i + j * a] = Convert.ToInt32(tab[j]);
            }
        }
        
        Console.WriteLine();
        for(int i=0; i<b; i++)
        {
            for(j=0; j<a-1; j++)
            {
                Console.Write(t[i*a + j] + " ");
            }
            Console.WriteLine(t[i * a + j]);
        }      
    }
}