using System;
using System.Text;

namespace Bai_2
{
    class Bai1_PTBACNHAT
    {
        static void Main(string[] args)
        {
            //Giải PT bậc nhất 1 ẩn X
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào số A, B giải PT Ax + B = 0");
            float a, b, X;
            Console.WriteLine("Nhập vào số A: ");
            a = float.Parse(Console.ReadLine());
            Console.WriteLine("Nhập vào số B:");
            b = float.Parse(Console.ReadLine());
            X = -b / a;
            Console.WriteLine("X = {0}", X);
        }
    }
}
