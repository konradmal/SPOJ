using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        int ile;
        string wynik = "";
        for(int i=0; i<t; i++)
        {
            wynik = "";
            ile = 1;
            s = Console.ReadLine();
            string z;
            for(int j=1; j<=s.Length; j++)
            {
                while(j < s.Length && s[j]==s[j-1])
                {
                    ile++;
                    j++;
                }
                if(ile==1)
                {
                    wynik += s[j-1];
                }
                else if(ile==2)
                {
                    wynik += s[j - 1];
                    wynik += s[j - 1];
                }
                else if(ile> 2)
                {
                    z = Convert.ToString(ile);
                    wynik += s[j - 1] + z;
                }
                ile = 1;
            }
            Console.WriteLine(wynik);
        }
    }
}