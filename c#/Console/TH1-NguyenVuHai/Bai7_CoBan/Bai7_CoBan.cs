using System;
using System.Text;

namespace Bai7_CoBan
{
    class Bai7_CoBan
    {
        public static int GiaiThua(int n)
        {
            if(n == 0)
            {
                return 1;
            }
            else if (n == 1)
                return 1;
            return n * GiaiThua(n - 1);
        }
        static void Main(string[] args)
        {
            int n;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Tính giai thừa, nhập n:");
            n = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("n! = " + GiaiThua(n));
        }
    }
}
