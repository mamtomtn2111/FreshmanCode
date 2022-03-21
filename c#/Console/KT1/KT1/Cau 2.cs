using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KT1
{
    //Nguyễn Vũ Hải
    //CNTT K18 CLC
    //DTC195480201CLC0006
    class HoSoHS
    {
        private string MaSV;
        private string HoTen;
        private string Lop;

        public HoSoHS()
        {
            MaSV = "DTC1";
            HoTen = "Nguyễn Văn A";
            Lop = "CNTT K18 CLC";
        }

        public HoSoHS(string _MaSV, string _HoTen, string _Lop)
        {
            _MaSV = MaSV;
            _HoTen = HoTen;
            _Lop = Lop;
        }

        public void NhapHS()
        {
            Console.WriteLine("Nhập vào mã Hs: ");
            MaSV = Console.ReadLine();

            Console.WriteLine("Nhập vào họ tên Hs: ");
            HoTen = Console.ReadLine();

            Console.WriteLine("Nhập vào lớp Hs: ");
            Lop = Console.ReadLine();
        }

        public void XuatHS()
        {
            Console.WriteLine("Mã Hs: " + MaSV);
            Console.WriteLine("Họ tên Hs: " + HoTen);
            Console.WriteLine("Lớp Hs: " + Lop);
        }

    }
    class QLHoSo : HoSoHS
    {
        private int n;
        HoSoHS[] DanhSach;

        public QLHoSo()
        {
            n = 0;
        }

        public QLHoSo(string _MaSV, string _HoTen, string _Lop, int _n) : base(_MaSV, _HoTen, _Lop)
        {
            _n = n;
        }

        public void Nhap()
        {
            Console.WriteLine("Nhập vào danh sách n học sinh: ");
            n = Convert.ToInt32(Console.ReadLine());
            DanhSach = new HoSoHS[n];

            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Học sinh thứ {0}", i + 1);
                DanhSach[i] = new HoSoHS();
                DanhSach[i].NhapHS();
            }
        }

        public void Xuat()
        {
            Console.WriteLine("Xuất học sinh====:");
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("\nHọc sinh thứ {0}", i + 1);
                DanhSach[i].XuatHS();
                Console.WriteLine("\n");
            }
        }
    }
    class Bai_2
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.InputEncoding = Encoding.UTF8;
            QLHoSo HocSinh = new QLHoSo();
            HocSinh.Nhap();
            HocSinh.Xuat();
        }
    }
}

