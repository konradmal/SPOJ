using System;

class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        double[] tab;
        double srednia;
        double suma;
        int z;
        double res, min;
        string s;
        string[] tb;
        int j;
        for(int i=0; i<t; i++)
        {
            suma = 0;
            s = Console.ReadLine();
            tb = s.Split(' ');
            z = Convert.ToInt32(tb[0]);
            tab = new double[z+1];
            j = 0;
            foreach(var x in tb)
            {
                tab[j] = Convert.ToInt32(x);
                if(j>=1)
                {
                    suma += tab[j];
                }
                j++;
            }
            srednia = suma / z;
            res = tab[1];
            min = Math.Abs(tab[1] - srednia);
            for(j=1; j<z+1; j++)
            {
                if(Math.Abs(tab[j]-srednia)<min)
                {
                    res = tab[j];
                    min = Math.Abs(tab[j] - srednia);
                }
            }
            Console.WriteLine(res);
        }
    }
}