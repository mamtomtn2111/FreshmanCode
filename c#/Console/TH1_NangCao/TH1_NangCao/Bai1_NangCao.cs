using System;
using System.Text;

namespace TH1_NangCao
{
    class Bai1_NangCao
    {
        static void Main(string[] args)
        {
            int DonGia, SoLuong;
            float ThanhTien, GiamGia;
            Console.OutputEncoding = Encoding.UTF8;

            Console.WriteLine("Nhập vào đơn giá của sản phẩm: ");
            DonGia = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Nhập vào số lượng sản phẩm: ");
            SoLuong = Convert.ToInt32(Console.ReadLine());
            ThanhTien = DonGia * SoLuong;
            if(ThanhTien > 100)
            {
                GiamGia = (float)(ThanhTien -  ThanhTien * (3.0 / 100));
                Console.WriteLine("Thành tiền lớn hơn 100, giảm 3%, tổng: {0}", GiamGia);
            }
            else
            {
                Console.WriteLine("Thành tiền nhỏ hơn 100, không giảm, tổng: " + ThanhTien);
            }
        }
    }
}
