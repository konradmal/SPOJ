using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        int ile;
        while((s=Console.ReadLine())!="0")
        {
            ile = 0;
            if (!(s[s.Length - 1] == '0' || s[s.Length - 1] == '5'))
            {
                Console.WriteLine("NIE");
            }
            else
            {
                for(int i=0; i<s.Length; i++)
                {
                    ile = ile + s[i] - '0';
                }
                if (ile % 3 == 0)
                {
                    Console.WriteLine("TAK");
                }
                else
                {
                    Console.WriteLine("NIE");
                }
            }
        }
    }
}