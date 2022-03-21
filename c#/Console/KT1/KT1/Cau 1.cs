using System;
using System.Text;

namespace KT1
{
    //Nguyễn Vũ Hải
    //CNTT K18 CLC
    //DTC195480201CLC0006
    class Cau1
    {
        public static void NhapMang(int[] arr, int n)
        {
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("a[{0}]: ", i);
                arr[i] = Convert.ToInt32(Console.ReadLine());
            }
        }

        public static void XuatMang(int[] arr, int n)
        {
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("a[{0}] = {1}\n", i, arr[i]);
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

        public static int DemSoHoanHao(int[] arr,int n)
        {
            int dem = 0;
            for(int i = 0; i < n; i++)
            {
                if (KtSoHoanHao(arr[i]) == 1)
                {
                    dem++;
                }
            }
            return dem;
        }

        public static void SapXepTang(int[] arr, int n)
        {
            int temp;
            for(int i = 0; i < n; i++)
            {
                for(int j = i + 1; j < n; j++)
                    if(arr[i] > arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
            }
        }
        static void Main(string[] args)
        {
            int n;
            Console.OutputEncoding = Encoding.UTF8;
            
            do
            {
                Console.WriteLine("Nhập vào số n (2 <= n <= 100: )");
                n = Convert.ToInt32(Console.ReadLine());
                if(n < 2 || n > 100)
                {
                    Console.WriteLine("Bạn nhập sai n (2 <= n <= 100: )");
                    n = Convert.ToInt32(Console.ReadLine());
                }
            }while (n < 2 || n > 100);
            int[] arr = new int[n];
            NhapMang(arr, n);
            Console.WriteLine("\nMảng bạn vùa nhập là: ");
            XuatMang(arr, n);
            //Dem so 
            Console.WriteLine("\nSố lượng số hoàn hảo là: " + DemSoHoanHao(arr, n));

            //Hiện thị vị trí của các số hoàn hảo đó
            Console.Write("\nVị trí các phần tử hoàn hảo là: ");
            for(int i = 0; i < n; i++)
            {
                if(KtSoHoanHao(arr[i]) == 1)
                {
                    Console.Write(i + " ");
                }
            }

            //Sắp xếp mảng tăng
            SapXepTang(arr, n);
            Console.WriteLine("\nMảng bạn vừa sắp xếp là: ");
            XuatMang(arr, n);
        }
    }
}
