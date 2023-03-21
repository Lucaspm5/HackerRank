using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        Dictionary<string, string> d = new Dictionary<string, string>();

        for (int i = 0; i < n; i++)
        {
            string[] x = Console.ReadLine().Split();
            d[x[0]] = x[1];
        }

        while (true)
        {
            try
            {
                string NAME = Console.ReadLine();
                if (d.ContainsKey(NAME))
                {
                    Console.WriteLine("{0}={1}", NAME, d[NAME]);
                }
                else
                {
                    Console.WriteLine("Not found");
                }
            }
            catch
            {
                break;
            }
        }
    }
}
