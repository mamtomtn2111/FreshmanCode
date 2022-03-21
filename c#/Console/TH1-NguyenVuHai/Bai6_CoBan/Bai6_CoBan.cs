using System;
using System.Text;

namespace Bai6_CoBan
{
    class Bai6_CoBan
    {
        public static int KTNguyenTo(int n)
        {
            int dem = 0;
            for(int i = 1; i <= n; i++)
                if (n % i == 0)
                    dem++;
            if(dem == 2)
            {
               return 1;
            }
            else
            {
               return 0;
            }
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            Console.WriteLine("Nhập vào số n để kiểm tra xem số n có phải số nguyên tố không?: ");
            n = Convert.ToInt32(Console.ReadLine());
            if(KTNguyenTo(n) == 1)
            {
                Console.WriteLine("Số " + n + " là số nguyên tố");
            }
            else
            {
                Console.WriteLine("Số " + n + " không phải là số nguyên tố");
            }
        }
    }
}
