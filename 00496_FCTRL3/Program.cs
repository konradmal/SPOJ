using System;

class Program
{
    static void Main(string[] args)
    {
        int x = int.Parse(Console.ReadLine()), y;
        for(int i=0;i<x;i++)
        {
            y = int.Parse(Console.ReadLine());
            if(y==0 || y==1)
            {
                Console.WriteLine("0 1");
            }
            else if(y==2)
            {
                Console.WriteLine("0 2");
            }
            else if(y==3)
            {
                Console.WriteLine("0 6");
            }
            else if(y==4)
            {
                Console.WriteLine("2 4");
            }
            else if(y==5 || y==6 || y==8)
            {
                Console.WriteLine("2 0");
            }
            else if(y==7)
            {
                Console.WriteLine("4 0");
            }
            else if(y==9)
            {
                Console.WriteLine("8 0");
            }
            else
            {
                Console.WriteLine("0 0");
            }
        }
    }
}
