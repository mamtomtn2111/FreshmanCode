using System;
using System.Text;

namespace Bai4
{
    class Bai4
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            while(true)
            {
                Console.WriteLine("Nhập vào số năm trong khoảng 2 đến 100 :");
                n = Convert.ToInt32(Console.ReadLine());
                if (n < 2 || n > 100)
                {
                    Console.WriteLine("Bạn đã nhập sai, mời nhập lại: ");
                    n = Convert.ToInt32(Console.ReadLine());
                }
                if(n > 1 && n < 101)
                {
                    Console.WriteLine("\nBạn đã nhập đúng khoảng từ 2 đến 100, kết thúc chương trình !");
                    break;
                }
            }
        }
    }
}
