using System;

class Program
{
    static void Main(string[] args)
    {
        int[] tab = new int[10];
        string s;
        int x;
        int ile = 0;
        bool flaga = false, flaga2 = false;
        while((s=Console.ReadLine())!=null)
        {
            if(s=="+")
            {
                if(ile==10 && flaga)
                {
                    x = int.Parse(Console.ReadLine());
                    Console.WriteLine(":(");
                }
                else
                {
                    //Console.WriteLine(ile);
                    x = int.Parse(Console.ReadLine());
                    tab[ile] = x;
                    Console.WriteLine(":)");
                    ile++;
                    if (ile == 10)
                    {
                        flaga = true;
                        ile = 10;
                    }
                }
            }
            else if(s=="-")
            {
                if(ile==0 && flaga2)
                {
                    Console.WriteLine(":(");
                }
                else
                {
                    ile--;
                    if(ile==-1)
                    {
                        ile++;
                        Console.WriteLine(":(");
                    }
                    else
                    {
                        Console.WriteLine(tab[ile]);
                        flaga = true;
                        if (ile == -1)
                        {
                            ile++;
                            flaga2 = true;
                        }
                    }
                }
            }
        }
    }
}