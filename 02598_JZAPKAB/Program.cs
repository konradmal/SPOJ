using System;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();
        int n = s.Length;
        int suma = 0;
        for(int i=0; i<n; i++)
        {
            if (s[i] == 'a')
                suma += 1;
            else if (s[i] == 'b')
                suma += 2;
            else if (s[i] == 'c')
                suma += 3;
            else if (s[i] == 'd')
                suma += 4;
            else if (s[i] == 'e')
                suma += 5;
            else if (s[i] == 'f')
                suma += 6;
            else if (s[i] == 'g')
                suma += 7;
            else if (s[i] == 'h')
                suma += 8;
            else if (s[i] == 'i')
                suma += 9;
            else if (s[i] == 'k')
                suma += 10;
            else if (s[i] == 'l')
                suma += 20;
            else if (s[i] == 'm')
                suma += 30;
            else if (s[i] == 'n')
                suma += 40;
            else if (s[i] == 'o')
                suma += 50;
            else if (s[i] == 'p')
                suma += 60;
            else if (s[i] == 'q')
                suma += 70;
            else if (s[i] == 'r')
                suma += 80;
            else if (s[i] == 's')
                suma += 90;
            else if (s[i] == 't')
                suma += 100;
            else if (s[i] == 'v')
                suma += 200;
            else if (s[i] == 'x')
                suma += 300;
            else if (s[i] == 'y')
                suma += 400;
            else if (s[i] == 'z')
                suma += 500;
        }
        Console.WriteLine(suma);
    }
}