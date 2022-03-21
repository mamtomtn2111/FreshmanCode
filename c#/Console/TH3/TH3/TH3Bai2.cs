using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH3
{
    class SinhVien
    {
        private string MaSV;
        private string HoTen;
        private float DiemTb;
        public float GetDiemTb
        {
            get { return DiemTb; }
            set { DiemTb = value; }
        }
        public SinhVien()
        {
            MaSV = "DTC1";
            HoTen = "Nguyễn Văn A";
            DiemTb = 0;
        }

        public SinhVien(string _MaSV, string _HoTen, float _DiemTB)
        {
            _MaSV = MaSV;
            _HoTen = HoTen;
            _DiemTB = DiemTb;
        }

        public void NhapSV()
        {
            Console.WriteLine("Nhập vào mã sv: ");
            MaSV = Console.ReadLine();

            Console.WriteLine("Nhập vào họ tên sv: ");
            HoTen = Console.ReadLine();

            Console.WriteLine("Nhập vào điểm trung bình sv: ");
            DiemTb = float.Parse(Console.ReadLine());
        }

        public void XuatSV()
        {
            Console.WriteLine("Mã SV: " + MaSV);
            Console.WriteLine("Họ tên sv: " + HoTen);
            Console.WriteLine("Điểm trung bình sv: " + DiemTb);
        }

        
    }

    class QLSV : SinhVien
    {
        private int n;
        SinhVien[] DanhSach;

        public QLSV()
        {
            n = 0;
        }

        public QLSV(string _MaSV, string _HoTen, float _DiemTB, int _n) : base(_MaSV, _HoTen, _DiemTB)
        {
            _n = n;
        }

        public void Nhap()
        {
            Console.WriteLine("Nhập vào danh sách n sinh viên: ");
            n = Convert.ToInt32(Console.ReadLine());
            DanhSach = new SinhVien[n];

            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Sinh viên thứ {0}", i);
                DanhSach[i] = new SinhVien();
                DanhSach[i].NhapSV();
            }
        }

        public void SapXepDiemTbGiam()
        {
            int i;
            SinhVien temp;
            for (i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (DanhSach[i].GetDiemTb < DanhSach[j].GetDiemTb)
                    {
                        temp = DanhSach[i];
                        DanhSach[i] = DanhSach[j];
                        DanhSach[j] = temp;
                    }
                }
            }
        }
        public void Xuat()
        {
            Console.WriteLine("Xuất 3 sinh viên cao điểm nhất:");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine("Sinh viên thứ {0}", i);
                DanhSach[i].XuatSV();
                Console.WriteLine("\n");
            }
        }
    }
    class TH3Bai2
    {
        static void Main(string[] args)
        {
            Console.InputEncoding = Encoding.UTF8;
            Console.OutputEncoding = Encoding.UTF8;
            QLSV SinhVien = new QLSV();
            SinhVien.Nhap();
            SinhVien.SapXepDiemTbGiam();
            SinhVien.Xuat();
        }
    }
}
