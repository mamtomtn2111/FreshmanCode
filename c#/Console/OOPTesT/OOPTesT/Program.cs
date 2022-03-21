using System;
using System.Text;

namespace OOPTesT
{
    class KhachHang
    {
        private string _Ma ;
        private string _HoTen;
        private int _Tuoi;

        public KhachHang()
        {
            _Ma = "DTC123";
            _HoTen = "Nguyễn Văn A";
            _Tuoi = 20;
        }
        public KhachHang(string Ma, string HoTen, int Tuoi)
        {
            _Ma = Ma;
            _HoTen = HoTen;
            _Tuoi = Tuoi;
        }

        public void NhapKhachHang()
        {
            Console.WriteLine("Nhập vào mã: ");
            _Ma = Console.ReadLine();

            Console.WriteLine("Nhập vào họ tên: ");
            _HoTen = Console.ReadLine();

            Console.WriteLine("Nhập vào tuổi: ");
            _Tuoi = Convert.ToInt32(Console.ReadLine());
        }

        public void XuatKhachHang()
        {
            Console.WriteLine("Mã khách hàng: " + _Ma);
            Console.WriteLine("Họ tên: " + _HoTen);
            Console.WriteLine("Tuổi" + _Tuoi);
        }
    }

    class QLKhachHang : KhachHang
    {
        private int _n;
        KhachHang[] DanhSach;

        public QLKhachHang()
        {
            _n = 1;
        }
        public QLKhachHang(string Ma, string HoTen, int Tuoi, int n): base(Ma, HoTen, Tuoi)
        {
            this._n = n;
        }
        public void Nhap()
        {
            Console.WriteLine("Nhập vào n khách hàng: ");
            _n = Convert.ToInt32(Console.ReadLine());
            DanhSach = new KhachHang[_n];
            for(int i = 0;i < _n; i++)
            {
                Console.WriteLine("Nhập thông tin khách hàng thứ {0}", i);
                DanhSach[i] = new KhachHang();
                DanhSach[i].NhapKhachHang();
            }
        }

        public void Xuat()
        {
            Console.WriteLine("Danh sách khách hàng:");
            for (int i = 0; i < _n; i++)
            {
                DanhSach[i].XuatKhachHang();
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            QLKhachHang kh = new QLKhachHang();
            kh.Nhap();
            kh.Xuat();
        }
    }
}
