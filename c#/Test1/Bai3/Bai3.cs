using System;
using System.Text;

namespace Bai3
{
    class Bai3
    {
        public static float CountS(int n)
        {
            float S = 0;
            for(int i = 1; i <= n;i++)
            {
                S += (float)(1 / Math.Pow(i,3));
            }
            return (float)S;
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            Console.WriteLine("Viết chương trình tính biểu thức sau:");
            Console.WriteLine("S = 1 + 1/2^3 + 1/3^3 + ... + 1/n^3");
            Console.Write("Nhập vào số n: ");
            n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("S = {0}", CountS(n));
        }
    }
}
