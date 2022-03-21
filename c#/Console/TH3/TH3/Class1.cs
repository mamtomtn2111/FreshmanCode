using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH3
{
    class SinhVien
    {
        private string maSV;
        private string tenSV;
        private double diemTB;

        public SinhVien()
        {
            maSV = "";
            tenSV = "";
            diemTB = 0;
        }

        public SinhVien(string maSV, string tenSV, double diemTB)
        {
            this.maSV = maSV;
            this.tenSV = tenSV;
            this.diemTB = diemTB;
        }

        public double getDiem
        {
            get { return diemTB; }
            set { diemTB = value; }
        }

        public void nhap()
        {
            Console.Write("Nhap ma sinh vien: ");
            maSV = Console.ReadLine();

            Console.Write("Nhap ten sinh vien: ");
            tenSV = Console.ReadLine();

            Console.Write("Nhap diem TB: ");
            diemTB = Convert.ToDouble(Console.ReadLine());
        }

        public void xuat()
        {
            Console.WriteLine("Ma sinh vien la: " + maSV);

            Console.WriteLine("Ten sinh vien la: " + tenSV);

            Console.WriteLine("Diem Trung Binh la: " + diemTB);

            Console.WriteLine("\n----------------------\n");
        }
    }

    class QLSV : SinhVien
    {
        private int n;
        SinhVien[] danhSach;

        public QLSV()
        {
            n = 0;
        }

        public QLSV(string maSV, string tenSV, double diemTB, int n)
            : base(maSV, tenSV, diemTB)
        {
            this.n = n;
        }

        public void nhapTT()
        {
            Console.Write("Nhap n so SV: ");
            n = Convert.ToInt32(Console.ReadLine());

            danhSach = new SinhVien[n];
            for (int i = 0; i < n; i++)
            {
                Console.Write("\n===Nhap thong tin Sinh Vien thu {0}\n", (i + 1));
                danhSach[i] = new SinhVien();
                danhSach[i].nhap();
            }
        }

        public void xuatTT()
        {

            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("\n===Sinh vien thu {0}", (i + 1));
                danhSach[i].xuat();
            }
        }

        public void sapXepGiamDan()
        {
            int i;
            for (i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (danhSach[i].getDiem < danhSach[j].getDiem)
                    {
                        double temp = danhSach[i].getDiem;
                        danhSach[i].getDiem = danhSach[j].getDiem;
                        danhSach[j].getDiem = temp;
                    }
                }
            }
        }

        public void sapXepTangDan()
        {
            int i;
            for (i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (danhSach[i].getDiem < danhSach[j].getDiem)
                    {
                        double temp = danhSach[i].getDiem;
                        danhSach[i].getDiem = danhSach[j].getDiem;
                        danhSach[j].getDiem = temp;
                    }
                }
            }

            Console.WriteLine("\n3 SV co diem TB cao nhat la: \n");
            for (i = 0; i < 3; i++)
            {

                danhSach[i].xuat();
                //Console.Read();
            }
        }


        /*public void maxTB()
        {
            double max = danhSach[0].getDiem;
            for (int i = 0; i < n; i++)
            {
                if (danhSach[i].getDiem > max)
                {
                    max = danhSach[i].getDiem;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                if (danhSach[i].getDiem == max)
                {
                    Console.WriteLine("SV co diem cao nhat la: ");
                    danhSach[i].xuat();
                    Console.ReadLine();
                }
            }

        }*/
    }
    class Class1
    {
        static void Main(string[] args)
        {
            QLSV sv = new QLSV();
            sv.nhapTT();
            Console.WriteLine("\nDanh sach sinh vien la\n");
            sv.xuatTT();
            //sv.sapXepGiamDan();
            Console.WriteLine("\nDanh sach sinh vien theo thu tu giam dan la\n");
            sv.xuatTT();
            //sv.maxTB();
            sv.sapXepTangDan();

            Console.Read();
        }
    }
}
