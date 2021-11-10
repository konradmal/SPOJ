using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string w = "";
        while((s = Console.ReadLine()) != null)
        {
            w = "";
            if (s[0] != ' ')
            {
                w += s[0];
            }
            for (int i = 1; i < s.Length; i++)
            {
                if (s[i] != ' ' && s[i - 1] == ' ' && s[i]>='a' && s[i]<='z')
                {
                    int x = s[i] - 32;
                    char z = Convert.ToChar(x);
                    w += z;
                }
                else if(s[i] != ' ')
                {
                    w += s[i];
                }
            }
            Console.WriteLine(w);
        }
    }
}