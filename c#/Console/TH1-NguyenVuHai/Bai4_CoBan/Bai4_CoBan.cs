using System;
using System.Text;

namespace Bai4_CoBan
{
    class Bai4_CoBan
    {
        static void Main(string[] args)
        {
            int n = 0;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào số n xem số đó có phải số chính phương không: ");
            n = Convert.ToInt32(Console.ReadLine());
            int sqrtn = (int)Math.Sqrt(n);
            if (sqrtn * sqrtn == n)
            {
                Console.WriteLine("Số " + n + " là số chính phương !");
            }
            else
            {
                Console.WriteLine("Số " + n + " không là số chính phương !");
            }
        }
    }
}
