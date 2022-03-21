using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPTesT
{
    //Nguyễn Vũ Hải
    //CNTT K18 CLC
    //DTC195480201CLC0006
    class XeMay
    {
        private string _SoMay;
        private string _SoKhung;
        private string _HangSanXuat;
        private string _MauXe;
        private int _GiaThanh;

        public int GetGiaThanh
        {
            get { return _GiaThanh; }
            set { _GiaThanh = value; }
        }
        public XeMay()
        {
            _SoMay = "MAY1";
            _SoKhung = "ABC1";
            _HangSanXuat = "TOYOTA";
            _MauXe = "Xanh";
            _GiaThanh = 10000;
        }
        public XeMay(string SoMay, string SoKhung, string HangSanXuat, string MauXe, int GiaThanh)
        {
            _SoMay = SoMay;
            _SoKhung = SoKhung;
            _HangSanXuat = HangSanXuat;
            _MauXe = MauXe;
            _GiaThanh = GiaThanh;
        }

        public void NhapXeMay()
        {
            Console.WriteLine("Nhập vào số máy: ");
            _SoMay = Console.ReadLine();

            Console.WriteLine("Nhập vào số khung: ");
            _SoKhung = Console.ReadLine();

            Console.WriteLine("Nhập vào hãng sản xuất: ");
            _HangSanXuat = Console.ReadLine();

            Console.WriteLine("Nhập vào màu xe: ");
            _MauXe = Console.ReadLine();

            Console.WriteLine("Nhập vào giá thành: ");
            _GiaThanh = Convert.ToInt32(Console.ReadLine());
        }

        public void XuatXeMay()
        {
            Console.WriteLine("Số máy: " + _SoMay);
            Console.WriteLine("Số khung: " + _SoKhung);
            Console.WriteLine("Hãng sản xuất: " + _HangSanXuat);
            Console.WriteLine("Màu xe: " + _MauXe);
            Console.WriteLine("Giá thành: " + _GiaThanh);
        }
    }

    class QLXeMay : XeMay
    {
        private int _n;
        XeMay[] DanhSach;

        public QLXeMay()
        {
            _n = 1;
        }
        public QLXeMay(string SoMay, string SoKhung, string HangSanXuat, string MauXe, int GiaThanh,int n) : base(SoMay, SoKhung, HangSanXuat, MauXe, GiaThanh)
        {
            this._n = n;
        }
        public void Nhap()
        {
            Console.WriteLine("Nhập vào n xe máy: ");
            _n = Convert.ToInt32(Console.ReadLine());
            DanhSach = new XeMay[_n];
            for (int i = 0; i < _n; i++)
            {
                Console.WriteLine("Nhập thông tin xe máy thứ {0}", i);
                DanhSach[i] = new XeMay();
                DanhSach[i].NhapXeMay();
            }
        }

        public void Xuat()
        {
            Console.WriteLine("Danh sách xe máy:");
            for (int i = 0; i < _n; i++)
            {
                Console.WriteLine("\nXe máy thứ {0} :",i);
                DanhSach[i].XuatXeMay();
            }
        }
        public int TimMax()
        {
            int Max = 0;
            for(int i = 0; i < _n; i++)
            {
                if(DanhSach[i].GetGiaThanh > Max)
                {
                    Max = DanhSach[i].GetGiaThanh;
                }
            }
            return Max;
        }

        public void XuatMaxGiaThanh()
        {
            Console.WriteLine("\nDanh xe máy có giá thành cao nhất: ");
            for (int i = 0; i < _n; i++)
            {
                if (DanhSach[i].GetGiaThanh == TimMax())
                {
                    Console.WriteLine("\nXe máy thứ {0} :", i);
                    DanhSach[i].XuatXeMay();
                } 
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.InputEncoding = Encoding.UTF8;
            Console.OutputEncoding = Encoding.UTF8;
            QLXeMay kh = new QLXeMay();
            kh.Nhap();
            kh.Xuat();
            kh.XuatMaxGiaThanh();
        }
    }
}
