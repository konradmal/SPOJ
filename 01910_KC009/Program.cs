using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        int n;
        string wyn;
        while((s=Console.ReadLine())!=null)
        {
            wyn = "";
            n = s.Length;
            for(int i=0;i<n; i++)
            {
                wyn += s[n - 1 - i];
            }
            Console.WriteLine(wyn);
        }
    }
}