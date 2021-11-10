using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        int[] litery = new int[123];
        int x;
        char z;
        x = 100;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            for(int j=0; j<s.Length; j++)
            {
                x = s[j];
                litery[x]++;
            }
        }
        for(int i=97; i<=122; i++)
        {
            if(litery[i]!=0)
            {
                z = Convert.ToChar(i);
                Console.WriteLine(z + " " + litery[i]);
            }
        }
        for (int i = 65; i <= 90; i++)
        {
            if (litery[i] != 0)
            {
                z = Convert.ToChar(i);
                Console.WriteLine(z + " " + litery[i]);
            }
        }
    }
}