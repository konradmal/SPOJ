using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        string s, wynik;
        for(int i=0; i<t; i++)
        {
            s = Console.ReadLine();
            wynik = "";
            for(int j=0; j<s.Length; j++)
            {
                if(s[j]=='A' || s[j]=='B' || s[j]=='C')
                {
                    wynik += '2';
                }
                else if(s[j] == 'D' || s[j] == 'E' || s[j] == 'F')
                {
                    wynik += '3';
                }
                else if (s[j] == 'G' || s[j] == 'H' || s[j] == 'I')
                {
                    wynik += '4';
                }
                else if (s[j] == 'J' || s[j] == 'K' || s[j] == 'L')
                {
                    wynik += '5';
                }
                else if (s[j] == 'M' || s[j] == 'N' || s[j] == 'O')
                {
                    wynik += '6';
                }
                else if (s[j] == 'P' || s[j] == 'Q' || s[j] == 'R' || s[j] == 'S')
                {
                    wynik += '7';
                }
                else if (s[j] == 'T' || s[j] == 'U' || s[j] == 'V')
                {
                    wynik += '8';
                }
                else if (s[j] == 'W' || s[j] == 'X' || s[j] == 'Y' || s[j] == 'Z')
                {
                    wynik += '9';
                }
            }
            Console.WriteLine(wynik);
        }
    }
}