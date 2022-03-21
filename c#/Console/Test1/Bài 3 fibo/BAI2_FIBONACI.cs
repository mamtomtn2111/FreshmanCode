using System;
using System.Text;

namespace Bài_3_fibo
{
    class BAI2_FIBONACI
    {
        
        public static int fibonacci(int n)
        {
            if (n < 0)
            {
                return -1;
            }
            else if (n == 0 || n == 1)
            {
                return n;
            }
            else
            {
                return fibonacci(n - 1) + fibonacci(n - 2);
            }
        }

        static void Main(string[] args)
        {
            //In ra n số fibo đầu tiên
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            Console.WriteLine("Mời nhập số n: ");
            n = Convert.ToInt32(Console.ReadLine());
            Console.Write("{0} so dau tien cua day so Fibonacci: \n",n);
            for (int i = 0; i < n; i++)
            {
                Console.Write("{0} ", fibonacci(i));
            }
            Console.WriteLine();
            Console.ReadKey();
        }
    }
}
