using System;
using System.Text;

namespace Bai2_CoBan
{
    class Bai2_CoBan
    {
        static void Main(string[] args)
        {
            float dai, rong, chuvi, dientich;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Nhập vào các số đo của hình chữ nhật !");

            Console.Write("Nhập vào chiều dài: ");
            dai = float.Parse(Console.ReadLine());

            Console.Write("Nhập vào chiều rộng: ");
            rong = float.Parse(Console.ReadLine());

            chuvi = (dai + rong) * 2;
            Console.WriteLine("Chu vi của hình chữ nhật: " + chuvi);

            dientich = dai * rong;
            Console.WriteLine("Diện tích của hình chữ nhật: " + dientich);
        }
    }
}
