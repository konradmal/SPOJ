using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s;
        string[] s1, s2;
        int wynik=0, liczba;
        string znak;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            s1 = s.Split('+', '-');
            s2 = s.Split('0', '1', '2', '3', '4', '5', '6', '7', '8', '9');
            wynik = Convert.ToInt32(s1[0]);
            for(int j=1; j<s2.Length-1; j++)
            {
                liczba = Convert.ToInt32(s1[j]);
                znak = s2[j];
                if (znak == "+")
                    wynik += liczba;
                else
                    wynik -= liczba;
            }
            Console.WriteLine(wynik);
        }
    }
}