using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] tab;
        char w;
        int a, b;
        while((s = Console.ReadLine()) != null)
        {
            tab = s.Split(' ');
            w = Convert.ToChar(tab[0]);
            a = Convert.ToInt32(tab[1]);
            b = Convert.ToInt32(tab[2]);
            if(w=='+')
                Console.WriteLine(a+b);
            else if(w=='-')
                Console.WriteLine(a-b);
            else if(w=='*')
                Console.WriteLine(a*b);
            else if(w=='/')
                Console.WriteLine(a/b);
            else
                Console.WriteLine(a%b);
        }
    }
}