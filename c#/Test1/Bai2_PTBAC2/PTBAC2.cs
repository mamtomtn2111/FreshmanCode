using System;
using System.Text;

namespace Bai2PTBAC2
{
    class PTBAC2
    {
        static void Main(string[] args)
        {
            float a, b, c, delta;
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Mời nhập các số để giải PT bậc 2: ");
            Console.WriteLine("Nhập số A: ");
            a = float.Parse(Console.ReadLine());

            Console.WriteLine("Nhập số B: ");
            b = float.Parse(Console.ReadLine());

            Console.WriteLine("Nhập số C: ");
            c = float.Parse(Console.ReadLine());

            delta = (float)(Math.Pow(b, 2) - (4 * a * c));

            Console.WriteLine("Delta = {0}", delta);
            if(a == 0 && b == 0 && c == 0)
            {
                Console.WriteLine("Phương trình {0}x^2 + {1}x + {2} = 0 vô số nghiệm !",a,b,c);
            }
            else if(delta < 0)
            {
                Console.WriteLine("Phương trình {0}x^2 + {1}x + {2} = 0 vô nghiệm !",a,b,c);
            }
            else if(delta == 0)
            {
                Console.WriteLine("Phương trình có nghiệm kép x1 = x2 = {0}", (float)(-b / (2 * a)));
            }
            else if(delta > 0)
            {
                float x1 = (float)((-b - Math.Sqrt(delta)) / (2 * a));
                float x2 = (float)((-b + Math.Sqrt(delta)) / (2 * a));
                Console.WriteLine("Phương trình có 2 nghiệm phân biệt: ");
                Console.WriteLine("x1 = {0}", x1);
                Console.WriteLine("x2 = {0}", x2);
            }
        }
    }
}
