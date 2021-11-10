using System;

class Program
{
    static void Main(string[] args)
    {
        int x = int.Parse(Console.ReadLine());
        for(int i=0;i<x;i++)
        {
            string s = Console.ReadLine();
            string[] s1 = s.Split(' ');
            int a = Convert.ToInt32(s1[0]);
            int b = Convert.ToInt32(s1[1]);
            {
                if(a%10 == 0)
                {
                    Console.WriteLine("0");
                }
                else if(a % 10 == 1)
                {
                    Console.WriteLine("1");
                }
                else if(a % 10 == 2)
                {
                    if(b%4==0)
                        Console.WriteLine("6");
                    else if(b%4==1)
                        Console.WriteLine("2");
                    else if(b%4==2)
                        Console.WriteLine("4");
                    else
                        Console.WriteLine("8");
                }
                else if(a % 10 == 3)
                {
                    if (b % 4 == 0)
                        Console.WriteLine("1");
                    else if (b % 4 == 1)
                        Console.WriteLine("3");
                    else if (b % 4 == 2)
                        Console.WriteLine("9");
                    else
                        Console.WriteLine("7");
                }
                else if(a % 10 == 4)
                {
                    if (b % 2 == 0)
                        Console.WriteLine("6");
                    else if (b % 4 == 1)
                        Console.WriteLine("4");
                }
                else if(a % 10 == 5)
                {
                    Console.WriteLine("5");
                }
                else if(a % 10 == 6)
                {
                    Console.WriteLine("6");
                }
                else if(a % 10 == 7)
                {
                    if (b % 4 == 0)
                        Console.WriteLine("1");
                    else if (b % 4 == 1)
                        Console.WriteLine("7");
                    else if (b % 4 == 2)
                        Console.WriteLine("9");
                    else
                        Console.WriteLine("3");
                }
                else if(a % 10 == 8)
                {
                    if (b % 4 == 0)
                        Console.WriteLine("6");
                    else if (b % 4 == 1)
                        Console.WriteLine("8");
                    else if (b % 4 == 2)
                        Console.WriteLine("4");
                    else
                        Console.WriteLine("2");
                }
                else if(a % 10 == 9)
                {
                    if (b % 2 == 0)
                        Console.WriteLine("1");
                    else if (b % 2 == 1)
                        Console.WriteLine("9");
                }
            }
        }
    }
}