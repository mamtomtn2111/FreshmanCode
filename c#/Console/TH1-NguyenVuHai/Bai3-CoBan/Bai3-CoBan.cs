using System;
using System.Text;

namespace Bai3_CoBan
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            const double pi = 3.14;
            float R, ChuVi, DienTich;
            Console.WriteLine("Nhập vào bán kính hình tròn: ");
            R = float.Parse(Console.ReadLine());
            ChuVi = (float)(pi * 2 * R);
            DienTich = (float)(pi * Math.Pow(R, 2));
            Console.WriteLine("Chu vi hình tròn là: " + ChuVi);
            Console.WriteLine("Diện tích hình tròn là: " + DienTich);
        }
    }
}
