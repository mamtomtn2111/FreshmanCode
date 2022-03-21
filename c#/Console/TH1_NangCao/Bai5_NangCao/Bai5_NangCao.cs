using System;
using System.Text;

namespace Bai5_NangCao
{
    class Bai5_NangCao
    {
        static void Main(string[] args)
        {
            int n;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào số n: ");
            n = Convert.ToInt32(Console.ReadLine());

            double S = 0;
            for(int i = 1; i <=n; i++)
            {
                S += (double)(1.0 / (i * (i + 1) * (i + 2)));
            }
            Console.WriteLine("S = " + S);
        }
    }
}
