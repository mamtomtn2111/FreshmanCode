using System;
using System.Text;

namespace TH3
{
    //Nguyễn Vũ Hải
    //CNTT K18 CLC
    //DTC195480201CLC0006
    class Hang
    {
        private string MaHang;
        private string TenHang;
        private int Gia;
        private int SoLuong;

        public Hang()
        {
            MaHang = "AAA";
            TenHang = "Hàng B";
            Gia = 1;
            SoLuong = 0;
        }

        public Hang(string _MaHang, string _TenHang, int _Gia, int _SoLuong)
        {
            MaHang = _MaHang;
            TenHang = _TenHang;
            Gia = _Gia;
            SoLuong = _SoLuong;
        }

        public void NhapHang()
        {
            Console.WriteLine("Nhập vào mã hàng: ");
            MaHang = Console.ReadLine();

            Console.WriteLine("Nhập vào tên hàng: ");
            TenHang = Console.ReadLine();

            Console.WriteLine("Nhập vào giá hàng: ");
            Gia = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Nhập vào số lượng hàng: ");
            SoLuong = Convert.ToInt32(Console.ReadLine());
        }

        public void XuatHang()
        {
            Console.WriteLine("Mã hàng: " + MaHang);
            Console.WriteLine("Tên hàng: " + TenHang);
            Console.WriteLine("Tổng giá trị của mặt hàng: " + (Gia * SoLuong));
        }
    }

    class QLHang : Hang
    {
        private int n;
        Hang[] DanhSach;
        public QLHang()
        {
            n = 1;
        }

        public QLHang(string _MaHang, string _TenHang, int _Gia, int _SoLuong, int _n) : base(_MaHang, _TenHang, _Gia, _SoLuong)
        {
            _n = n;
        }

        public void Nhap()
        {
            Console.WriteLine("Nhập vào n hàng: ");
            n = Convert.ToInt32(Console.ReadLine());
            DanhSach = new Hang[n];
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Mặt hàng thứ {0}", i);
                DanhSach[i] = new Hang();
                DanhSach[i].NhapHang();
            }
        }

        public void Xuat()
        {
            Console.WriteLine("Danh sách hàng hiện có: ");
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Mặt hàng thứ {0}", i);
                DanhSach[i].XuatHang();
                Console.WriteLine("\n");
            }
        }
    }
    class TH3Bai1
    {
        static void Main(string[] args)
        {
            Console.InputEncoding = Encoding.UTF8;
            Console.OutputEncoding = Encoding.UTF8;
            QLHang Hang = new QLHang();
            Hang.Nhap();
            Hang.Xuat();
        }
    }
}
