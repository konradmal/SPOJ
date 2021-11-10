using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        bool zero = false;
        int ind0 = -1, ind1 = -1;

        for(int i=0; i<s.Length; i++)
        {
            if(s[i] == '0' && !zero)
            {
                zero = true;
                ind0 = i;
            }
            if(s[i] == '1')
            {
                ind1 = i;
            }
        }
        string wyn = "";
        for(int i=ind0+1; i<ind1; i++)
        {
            wyn += s[i];
        }
        if(wyn.Length==0)
            Console.WriteLine("PUSTY");
        else
            Console.WriteLine(wyn);
    }
}