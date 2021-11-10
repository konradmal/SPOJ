using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] tab;
        string z;
        int x, y;
        int[] rej = new int[10] { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        while((s=Console.ReadLine())!=null)
        {
            tab = s.Split(' ');
            z = tab[0];
            x = Convert.ToInt32(tab[1]);
            y = Convert.ToInt32(tab[2]);
            if(z=="z")
            {
                rej[x] = y;
            }
            else if(z=="+")
            {
                Console.WriteLine(rej[x] + rej[y]);
            }
            else if(z=="-")
            {
                Console.WriteLine(rej[x] - rej[y]);
            }
            else if(z=="*")
            {
                Console.WriteLine(rej[x] * rej[y]);
            }
            else if(z=="/")
            {
                Console.WriteLine(rej[x] / rej[y]);
            }
            else
            {
                Console.WriteLine(rej[x] % rej[y]);
            }
        }
    }
}