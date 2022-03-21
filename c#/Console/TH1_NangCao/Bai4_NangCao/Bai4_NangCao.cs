using System;
using System.Text;

namespace Bai4_NangCao
{
    class Bai4_NangCao
    {
        public static int GiaiThua(int n)
        {
            if (n == 0)
            {
                return 1;
            }
            else if (n == 1)
                return 1;
            return n * GiaiThua(n - 1);
        }
        static void Main(string[] args)
        {
            int x, n;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào số x:");
            x = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Nhập vào số n: ");
            n = Convert.ToInt32(Console.ReadLine());

            double Tong = 0;
            for(int i = 1; i <=n;i++)
            {
                Tong += (double)(Math.Pow(x,i) / GiaiThua(i));
            }
            Console.WriteLine("S(x,n): " + Tong);
        }
    }
}
