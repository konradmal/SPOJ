using System;

class Program
{
    static void Main(string[] args)
    {
        int t = Convert.ToInt32(Console.ReadLine());
        string wyn = "";
        for (int i = 0; i < t; i++)
        {
            string s = Console.ReadLine();
            string[] st = s.Split(' ');
            if(st[0] == "DODAJ")
            {
                wyn += st[1];
            }
            else if(st[0] == "ZAMIEN")
            {
                if (wyn.Length > 0)
                {
                    int n = wyn.Length - 1;
                    wyn = wyn.Remove(n);
                    wyn += st[1];
                }
            }
            else if(st[0] == "USUN")
            {
                int n = Convert.ToInt32(st[1]);
                if (n > wyn.Length)
                    wyn = "";
                else
                    wyn = wyn.Remove(wyn.Length - n);
            }
        }
        Console.WriteLine(wyn);
    }
}