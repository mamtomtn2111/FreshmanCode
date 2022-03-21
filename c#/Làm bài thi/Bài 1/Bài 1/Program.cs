using System;
using System.Text;

namespace Bài_1
{
    class SinhVien
    {
        private string _Ma;
        private string _HoTen;
        private string _Lop;

        public SinhVien()
        {
            _Ma = "DTC123";
            _HoTen = "Nguyễn Văn A";
            _Lop = "CNTT K18";
        }
        public SinhVien(string Ma, string HoTen, string Lop)
        {
            _Ma = Ma;
            _HoTen = HoTen;
            _Lop = Lop;
        }

        public void NhapSinhVien()
        {
            Console.WriteLine("Nhập vào mã: ");
            _Ma = Console.ReadLine();

            Console.WriteLine("Nhập vào họ tên: ");
            _HoTen = Console.ReadLine();

            Console.WriteLine("Nhập vào lớp: ");
            _Lop = Console.ReadLine();
        }

        public void XuatSinhVien()
        {
            Console.WriteLine("Mã Sinh viên: " + _Ma);
            Console.WriteLine("Họ tên: " + _HoTen);
            Console.WriteLine("Lớp" + _Lop);
        }
    }

    class QLSinhVien : SinhVien
    {
        private int _n;
        SinhVien[] DanhSach;

        public QLSinhVien()
        {
            _n = 1;
        }
        public QLSinhVien(string Ma, string HoTen, string Lop, int n) : base(Ma, HoTen, Lop)
        {
            this._n = n;
        }
        public void Nhap()
        {
            Console.WriteLine("Nhập vào n sinh viên: ");
            _n = Convert.ToInt32(Console.ReadLine());
            DanhSach = new SinhVien[_n];
            for (int i = 0; i < _n; i++)
            {
                Console.WriteLine("Nhập thông tin sinh viên thứ {0}", i);
                DanhSach[i] = new SinhVien();
                DanhSach[i].NhapSinhVien();
            }
        }

        public void Xuat()
        {
            Console.WriteLine("\n\t====Danh sách Sinh viên====");
            for (int i = 0; i < _n; i++)
            {
                DanhSach[i].XuatSinhVien();
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            QLSinhVien sv = new QLSinhVien();
            sv.Nhap();
            sv.Xuat();
        }
    }
}
