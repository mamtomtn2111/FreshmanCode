using System;
using System.Text;

namespace TH2
{
    class Bai1TH2
    {
        public static void NhapMang(int[] arr, int n)
        {
            for(int i = 0;i < n; i++)
            {
                Console.WriteLine("a[{0}]: ", i);
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }
        }

        public static void XuatMang(int[] arr, int n)
        {
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("a[{0}] = {1}", i, arr[i]);
            }
        }

        public static void XuatDuong(int[] arr, int n)
        {
            for (int i = 0; i < n; i++)
            {
                if(arr[i] > 0)
                {
                    Console.WriteLine("a[{0}] = {1}", i, arr[i]);
                }    
            }
        }

        public static void XuatPhanTuLeViTriChan(int[] arr, int n)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0 && (i % 2 == 0))
                {
                    Console.WriteLine("a[{0}] = {1}", i, arr[i]);
                }
            }
        }

        public static int KTNguyenTo(int n)
        {
            int dem = 0;
            for (int i = 1; i <= n; i++)
                if (n % i == 0)
                    dem++;
            if (dem == 2)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        public static int KTSoChinhPhuong(int n)
        {
            int sqrtn = (int)Math.Sqrt(n);
            if (sqrtn * sqrtn == n)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        public static int KtSoHoanHao(int n)
        {
            int sum = 0;
            for (int i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    sum = sum + i;
                }
            }
            if (sum == n)
                return 1;
            else
                return 0;
        }

        public static int TimMax(int[] arr,int n)
        {
            int max = arr[0];
            for(int i = 0; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }
            return max;
        }

        public static int TimMin(int[] arr, int n)
        {
            int min = arr[0];
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < min)
                    min = arr[i];
            }
            return min;
        }

        public static void XoaPhanTu(int[] arr, int n)
        {
            Console.WriteLine("Nhập vị trí phần tử cần xóa: ");
            int pos = Convert.ToInt32(Console.ReadLine());
            int i = 0;
            while (i != pos - 1)
                i++;
            while (i < n)
            {
                arr[i] = arr[i + 1];
                i++;
            }
            n--;
        }

        public static void XoaPhanTuX(int[] arr, int n)
        {
            int i;
            int count = 0;
            Console.WriteLine("Xóa hết các phần tử X trong mảng: ");
            int x = Convert.ToInt32(Console.ReadLine());
            for (i = 0; i < n; i++)
            {
                if (arr[i] == x)
                    count++;
                else
                    arr[i - count] = arr[i];
            }
            n -= count;
        }

        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            
            Console.WriteLine("Nhập vào số n: ");
            n = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[n];

            NhapMang(arr, n);
            XuatMang(arr, n);

            Console.WriteLine("Xuất các phần tử dương của mảng:");
            XuatDuong(arr, n);

            Console.WriteLine("Xuất các phẩn tử lẻ vị trí chẵn của mảng: ");
            XuatPhanTuLeViTriChan(arr, n);

            Console.WriteLine("Các phần tử số nguyên tố của mảng: ");
            for(int i = 0; i < n; i++)
            {
                if (KTNguyenTo(arr[i]) == 1)
                    Console.WriteLine(arr[i]);
            }

            Console.WriteLine("Các phần tử chính phương của mảng là: ");
            for(int i = 0; i < n; i++)
            {
                if (KTSoChinhPhuong(arr[i]) == 1)
                    Console.WriteLine(arr[i]);
            }

            Console.WriteLine("Các phần tử hoàn hảo của mảng là: ");
            for(int i = 0; i < n; i++)
            {
                if (KtSoHoanHao(arr[i]) == 1)
                    Console.WriteLine(arr[i]);
            }

            Console.WriteLine("Số lớn nhất của mảng là: " + TimMax(arr, n));
            Console.WriteLine("Số nhỏ nhất của mảng là: " + TimMin(arr, n));

            Console.WriteLine("\n");

            //Xóa phẩn tử ở vị tri
            Console.WriteLine("Nhập vị trí phần tử cần xóa: ");
            int pos = Convert.ToInt32(Console.ReadLine());
            int j = 0;
            while (j != pos - 1)
                j++;
            while (j < n - 1)
            {
                arr[j] = arr[j + 1];
                j++;
            }
            n--;
            XuatMang(arr, n);

            //Xóa phần tử x
            int k;
            int count = 0;
            Console.WriteLine("Xóa hết các phần tử X trong mảng: ");
            int x = Convert.ToInt32(Console.ReadLine());
            for (k = 0; k < n; k++)
            {
                if (arr[k] == x)
                    count++;
                else
                    arr[k - count] = arr[k];
            }
            n -= count;
            XuatMang(arr, n);
        }
    }
}
