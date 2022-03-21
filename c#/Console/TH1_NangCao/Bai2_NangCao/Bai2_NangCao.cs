using System;
using System.Text;

namespace Bai2_NangCao
{
    class Bai2_NangCao
    {
        static void Main(string[] args)
        {
            int n;
            Console.OutputEncoding = Encoding.UTF8;
            Console.Write("Nhập vào số điện: ");
            n = Convert.ToInt32(Console.ReadLine());
            int ThanhTien = 0;
            for(int i = 1; i <= n; i++)
            {
                if(i > 0 && i < 101)
                {
                    ThanhTien += 5;
                }
                else if(i > 100 && i < 151)
                {
                    ThanhTien += 7;
                }
                else if(i > 150 && i < 201)
                {
                    ThanhTien += 10;
                }
                else if(i > 200 && i < 301)
                {
                    ThanhTien += 15;
                }
                else if(i > 300)
                {
                    ThanhTien += 20;
                }
            }
            Console.WriteLine("Số tiền của " + n + " số điện là: " + ThanhTien + " $");
        }
    }
}
