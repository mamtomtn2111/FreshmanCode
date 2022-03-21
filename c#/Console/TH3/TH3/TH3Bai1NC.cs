using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TH3
{
    class CD
    {
        private string CDname;
        private string CDtype;
        private float CDprice;

        public string GetCDname
        {
            get { return CDname; }
            set { CDname = value; }
        }

        public CD()
        {
            CDname = "Hello";
            CDtype = "Rock";
            CDprice = 10000;
        }

        public void NhapCD()
        {
            Console.WriteLine("Nhập vào tên CD: ");
            CDname = Console.ReadLine();

            Console.WriteLine("Nhập vào loại CD: ");
            CDtype = Console.ReadLine();

            Console.WriteLine("Nhập vào giá CD: ");
            CDprice = float.Parse(Console.ReadLine());
        }

        public void XuatCD()
        {
            Console.Write(CDname + "\t\t");
            Console.Write(CDtype + "\t\t");
            Console.Write(CDname + "\t\t");
        }
    }


    class QLCD : CD
    {
        CD[] DanhSach;
        public QLCD() { }
        public void Nhap()
        {
            Console.
        }

    }


    class TH3Bai1NC
    {
        static void Main(string[] args)
        {
            Console.InputEncoding = Encoding.UTF8;
            Console.OutputEncoding = Encoding.UTF8;
        }
    }
}
