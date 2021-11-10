using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string wyn;
        char z;
        while((s=Console.ReadLine())!=null)
        {
            wyn = "";
            for(int i=0; i<s.Length; i++)
            {
                if(s[i]=='<')
                {
                    wyn += s[i];
                    i++;
                    while(s[i]!='>')
                    {
                        z = char.ToUpper(s[i]);
                        wyn += z;
                        i++;
                    }
                    i--;
                }
                else
                {
                    wyn += s[i];
                }
            }
            Console.WriteLine(wyn);
        }
    }
}