using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] ts;
        string w;
        char z;
        while ((s = Console.ReadLine()) != null)
        {
            w = "";
            ts = s.Split(' ');
            z = Convert.ToChar(ts[0]);
            for(int i=0; i<ts[1].Length; i++)
            {
                if(ts[1][i] != z)
                {
                    w += ts[1][i];
                }
            }
            Console.WriteLine(w);
        }
    }
}