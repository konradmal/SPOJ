using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] ts;
        int ilel;
        int ilew;
        while ((s = Console.ReadLine()) != null)
        {
            ts = s.Split(' ');
            ilel = 0;
            ilew = 0;
            foreach(var x in ts)
            {
                if(char.IsLetter(x[0]))
                {
                    ilew++;
                }
                else if(char.IsDigit(x[0]))
                {
                    ilel++;
                }
            }
            Console.WriteLine(ilel + " " + ilew);
        }
    }
}