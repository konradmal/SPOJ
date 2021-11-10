using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string wynik;
        while((s=Console.ReadLine())!= null)
        {
            wynik = "";
            for(int i=0; i<s.Length; i++)
            {
                if(s[i]==' ')
                {
                    wynik += Convert.ToChar(s[i]);
                }
                else if((s[i]+3)<='Z')
                {
                    wynik +=  Convert.ToChar(s[i] + 3);
                }
                else
                {
                    wynik += Convert.ToChar(s[i] + 3 - 26);
                }
            }
            Console.WriteLine(wynik);
        }
    }
}