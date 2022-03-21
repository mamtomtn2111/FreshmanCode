using System;
using System.Text;

namespace Bai3_NangCao
{
    class Bai3_NangCao
    {
        static void Main(string[] args)
        {
            double S = 0;
            int n;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào n số để tính theo công thức: ");
            n = Convert.ToInt32(Console.ReadLine());
            for(int i = 1; i <= n; i++)
            {
                double Mau = 0;
                for(int j = 1; j <= i; j++)
                {
                    Mau += Math.Pow(j, 2);
                }
                S += (double)(Math.Pow(-1, i + 1) / Mau);
            }
            Console.WriteLine("S = " + S);
        }
    }
}
