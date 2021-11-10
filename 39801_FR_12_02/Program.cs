using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string[] tab = s.Split(' ');
        if(tab[0][0] == tab[1][0] || tab[0][1] == tab[1][1])
            Console.WriteLine("TAK");
        else
            Console.WriteLine("NIE");
    }
}