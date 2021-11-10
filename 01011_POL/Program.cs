using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        int n;
        string wyn;
        for(int i=0; i<t; i++)
        {
            wyn = "";
            s = Console.ReadLine();
            n = s.Length;
            for(int j=0; j<n/2; j++)
            {
                wyn += s[j];
            }
            Console.WriteLine(wyn);
        }
    }
}