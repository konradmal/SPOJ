using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] ts;
        double[] tab = new double[3];
        while ((s = Console.ReadLine()) != null)
        {
            ts = s.Split(' ');
            tab[0] = Convert.ToDouble(ts[0]);
            tab[1] = Convert.ToDouble(ts[1]);
            tab[2] = Convert.ToDouble(ts[2]);
            Array.Sort(tab);
            if(tab[0] + tab[1] <= tab[2])
            {
                Console.WriteLine("brak");
            }
            else if(tab[0]*tab[0]+tab[1]*tab[1]==tab[2]*tab[2])
            {
                Console.WriteLine("prostokatny");
            }
            else if (tab[0] * tab[0] + tab[1] * tab[1] > tab[2] * tab[2])
            {
                Console.WriteLine("ostrokatny");
            }
            else
            {
                Console.WriteLine("rozwartokatny");
            }
        }
        
    }
}