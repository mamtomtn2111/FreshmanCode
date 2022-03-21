using System;
using System.Text;

namespace Học_16_7_2021
{
    class Bai4Ngay16_9_2021
    {
        public static void NhapMang(int n,int[] arr)
        {
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Nhập vào mảng phần tử arr[{0}]: ",i);
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }
        }

        public static void XuatMang(int n, int[] arr)
        {
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("arr[{0}] = {1}", i, arr[i]);
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

        public static int KTChinhPhuong(int n)
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

        public static int KTHoanHao(int n)
        {
            int sum = 0;
            for(int i = 1; i<= n / 2; i++)
            {
                if (n % i == 0)
                    sum += i;
            }
            if(sum == n)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        public static void bubbleSortAscending(int n, int[] arr)
        {
            for(int i = 0; i < n - 1; i++)
            {
                for(int j = i + 1; j < n; j++)
                {
                    int mid = 0;
                    if(arr[i] > arr[j])
                    {
                        mid = arr[i];
                        arr[i] = arr[j];
                        arr[j] = mid;
                    }
                }
            }
        }

        public static void bubbleSortDescending(int n, int[] arr)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    int mid = 0;
                    if (arr[i] < arr[j])
                    {
                        mid = arr[i];
                        arr[i] = arr[j];
                        arr[j] = mid;
                    }
                }
            }
        }

        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            do
            {
                Console.WriteLine("Nhập vào số n (2<= n <= 100");
                n = Convert.ToInt32(Console.ReadLine());
            } while (2 < n && n > 100);
            int[] Arr = new int[n];

            NhapMang(n, Arr);
            Console.WriteLine("Mảng bạn vừa nhập là: ");
            XuatMang(n, Arr);

            //Xuất nguyên tố;
            Console.Write("Số nguyên tố có trong mảng là: \n");
            for (int i = 0; i < n; i++)
            {
                if(KTNguyenTo(Arr[i]) == 1)
                {
                    Console.WriteLine("arr[{0}] = {1}", i, Arr[i]);
                }
            }

            //Kt chính phương;
            Console.Write("Số chính phương có trong mảng là : \n");
            for (int i = 0; i < n; i++)
            {
                if (KTChinhPhuong(Arr[i]) == 1)
                {
                    Console.WriteLine("arr[{0}] = {1}", i, Arr[i]);
                }
            }

            //Kt số hoàn hảo;
            Console.Write("Số hoàn hảo có trong mảng là : \n");
            for(int i = 0; i < n; i++)
            {
                if (KTHoanHao(Arr[i]) == 1)
                {
                    Console.WriteLine("arr[{0}] = {1}", i, Arr[i]);
                }
            }

            //Sắp xếp mảng tăng dần;
            Console.Write("Sắp xếp mảng tăng dần: \n");
            bubbleSortAscending(n, Arr);
            XuatMang(n, Arr);

            //Sắp xếp mảng giảm dần;
            Console.Write("Sắp xếp mảng giảm dần: \n");
            bubbleSortDescending(n, Arr);
            XuatMang(n, Arr);
        }
    }
}
