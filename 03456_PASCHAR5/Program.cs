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
                if(s[i]>='a' && s[i]<='z')
                {
                    z = Convert.ToChar(s[i] + 13);
                    if(z>'z')
                    {
                        z = Convert.ToChar(z - 26);
                    }
                    wyn += z;
                }
                else if(s[i] >= 'A' && s[i] <= 'Z')
                {
                    z = Convert.ToChar(s[i] + 13);
                    if (z > 'Z')
                    {
                        z = Convert.ToChar(z - 26);
                    }
                    wyn += z;
                }
                else if(s[i] >= '0' && s[i] <= '9')
                {
                    z = Convert.ToChar(s[i] + 5);
                    if (z > '9')
                    {
                        z = Convert.ToChar(z - 10);
                    }
                    wyn += z;
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