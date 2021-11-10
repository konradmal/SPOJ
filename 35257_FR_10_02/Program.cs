using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        string s2 = Console.ReadLine();
        string wynik = "";
        for(int i=0; i<s2.Length; i++)
        {
            wynik += s2[i];
            for(int j=0;j<t;j++)
            {
                if(Convert.ToString(s2[i])==tab[j])
                {
                    wynik += s2[i];
                    break;
                }
            }
        }
        Console.WriteLine(wynik);
    }
}