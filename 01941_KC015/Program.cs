using System;

class Program
{
    static void Main(string[] args)
    {
        string s;
        string[] ts;
        string a, b, z;
        while((s=Console.ReadLine())!=null)
        {
            ts = s.Split(' ');
            a = ts[0];
            z = ts[1];
            b = ts[2];
            if(z=="==")
            {
                if(a.Length == b.Length)
                {
                    for(int i=0; i<a.Length; i++)
                    {
                        if(a[i]!=b[i])
                        {
                            Console.WriteLine(0);
                            goto tsar;
                        }
                    }
                    Console.WriteLine(1);
                    goto tsar;
                }
                else
                {
                    Console.WriteLine(0);
                    goto tsar;
                }
            }
            else if(z=="!=")
            {
                if(a.Length!=b.Length)
                {
                    Console.WriteLine(1);
                    goto tsar;
                }
                else
                {
                    for (int i = 0; i < a.Length; i++)
                    {
                        if (a[i] != b[i])
                        {
                            Console.WriteLine(1);
                            goto tsar;
                        }
                    }
                    Console.WriteLine(0);
                    goto tsar;
                }
            }
            else if(z==">=")
            {
                if(a.Length > b.Length)
                {
                    Console.WriteLine(1);
                    goto tsar;
                }
                else if(a.Length < b.Length)
                {
                    Console.WriteLine(0);
                    goto tsar;
                }
                else
                {
                    for(int i=0; i<a.Length; i++)
                    {
                        if(a[i]<b[i])
                        {
                            Console.WriteLine(0);
                            goto tsar;
                        }
                        else if(a[i]>b[i])
                        {
                            Console.WriteLine(1);
                            goto tsar;
                        }
                    }
                    Console.WriteLine(1);
                    goto tsar;
                }
            }
            else
            {
                if (a.Length < b.Length)
                {
                    Console.WriteLine(1);
                    goto tsar;
                }
                else if (a.Length > b.Length)
                {
                    Console.WriteLine(0);
                    goto tsar;
                }
                else
                {
                    for (int i = 0; i < a.Length; i++)
                    {
                        if (a[i] > b[i])
                        {
                            Console.WriteLine(0);
                            goto tsar;
                        }
                        else if (a[i] < b[i])
                        {
                            Console.WriteLine(1);
                            goto tsar;
                        }
                    }
                    Console.WriteLine(1);
                    goto tsar;
                }
            }
        tsar:;
        }
    }
}