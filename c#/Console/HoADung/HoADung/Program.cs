using System;
using System.Text;

namespace HoADung
{
    class Program
    {
        static void Main(string[] args)
        {
            static bool checkcp(int n)
            {
                bool yes = true, no = false;

                Double so = Math.Sqrt(n);
                if (so * so == n)
                {
                    return yes;
                }
                else
                {
                    return no;
                }

            }

            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào số chính phương n: ");
            int n;
            do
            {
                Console.WriteLine("Nhập vào số n (2<= n <= 100");
                n = Convert.ToInt32(Console.ReadLine());
            } while (n < 2 || n > 100);


            if (checkcp(n))
            {
                Console.WriteLine("Số {0} là số chính phương", n);
            }
            else
            {
                Console.WriteLine("Số {0} không phải số chính phương", n);
            }

            Console.Write("Số hoàn hảo có trong mảng là : \n");
            for (int i = 1; i < n; i++)
            {
                if (checkcp(i))
                {
                    Console.WriteLine("{0}", i);
                }
            }

        }
    }
}
