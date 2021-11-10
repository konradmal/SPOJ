using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        int u;
        int pln, pol, wsch, zach;
        string s;
        string[] tab;
        int x;
        string wynik;
        for(int i=0; i<t; i++)
        {
            wynik = "";
            pln = 0;
            pol = 0;
            wsch = 0;
            zach = 0;
            u = int.Parse(Console.ReadLine());
            for(int j=0; j<u; j++)
            {
                s = Console.ReadLine();
                tab = s.Split(' ');
                x = Convert.ToInt32(tab[1]);
                if(tab[0]=="0")
                {
                    pln += x;
                }
                else if(tab[0]=="1")
                {
                    pol += x;
                }
                else if(tab[0]=="2")
                {
                    zach += x;
                }
                else
                {
                    wsch += x;
                }
            }

            if(pol==pln && zach==wsch)
            {
                Console.WriteLine("studnia");
            }
            else
            {
                if (pol < pln)
                {
                    x = pln - pol;
                    wynik += "0 " + x;
                    Console.WriteLine(wynik);
                }
                else if (pol > pln)
                {
                    x = pol - pln;
                    wynik += "1 " + x;
                    Console.WriteLine(wynik);
                }
                wynik = "";
                if (zach > wsch)
                {
                    x = zach - wsch;
                    wynik += "2 " + x;
                    Console.WriteLine(wynik);
                }
                else if (wsch > zach)
                {
                    x = wsch - zach;
                    wynik += "3 " + x;
                    Console.WriteLine(wynik);
                }
            }
        }
    }
}