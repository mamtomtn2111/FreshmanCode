using System;
using System.Text;

namespace Bai5_CoBan
{
    class Bai5_CoBan
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Bài toán tìm gà và chó");

            for (int i = 0; i < 37; i++)
                for(int j = 0; j < 37; j++)
                {
                    if((i + j == 36 ) && ((i * 2 + j * 4) == 100))
                    {
                        Console.WriteLine("Số gà là: " + i);
                        Console.WriteLine("Số chó là: " + j);
                        break;
                    }
                }
        }
    }
}
