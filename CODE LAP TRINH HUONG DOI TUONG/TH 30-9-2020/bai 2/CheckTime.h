#include<iostream>
using namespace std;

class CheckTime
{
	private:
		int day;
		int month;
		int year;
		int SoNgay;
	public:
		bool NamNhuan(int year)
		{
			if(year %4 ==0)
				return true;
			return false;
		}
		int SoNgayTrongNam(int month,int year)
		{
			switch(month)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					SoNgay=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					SoNgay=30;
					break;
				case 2:
					if(NamNhuan(year))
					{
						SoNgay = 29;
					}
					else SoNgay =28;
				break;
			}
			return SoNgay;
		}
		bool NgayHopLe(int day,int month,int year)
		{
			if(!(year >0 && month))
			{
				return false;
			}
			
			if(!(month>=1 && month <=12))
			{
				return false;
			}
			
			if(!(day>=1 && day<=SoNgayTrongNam(month,year)))
			{
				return false;
			}
			return true;
		}
		void nhap()
		{
			do
			{
				cout<<"Ngay, thang, nam: ";
				cin>>day>>month>>year;
				if(NgayHopLe(day,month,year)!=true)
					cout<<"Nhap lai thoi gian: ";
			}while(NgayHopLe(day,month,year)!=true);
		}
		void xuat()
		{
			cout<<endl<<day<<"-"<<month<<"-"<<year;
		}
};
