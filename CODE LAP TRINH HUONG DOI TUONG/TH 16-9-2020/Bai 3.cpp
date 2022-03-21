#include<iostream>

using namespace std;

bool NamNhuan(int year)
{
	if(year %4 ==0)
		return true;
	return false;
}

int SoNgayTrongNam(int month,int year)
{
	int SoNgay;
	
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

int TinhSoNgay(int day,int month,int year)
{
	int dem=day;
	for(int i=1;i<=month-1;i++)
	{
		dem+=SoNgayTrongNam(i,day);
	}
	return dem;
}

int main()
{
	int day,month,year;
	cout<<"Nhap vao ngay: "<<endl;
	cin>>day;
	
	cout<<"Nhap vao thang: "<<endl;
	cin>>month;
	
	cout<<"Nhap vao nam: "<<endl;
	cin>>year;
	do{
		if(NgayHopLe(day,month,year))
		{
			int dem=TinhSoNgay(day,month,year);
			cout<<"Day la ngay thu: "<<dem<<endl;
		}
		else
		{
			cout<<"Ngay ban nhap khong hop le !!"<<endl;
			cout<<endl<<"\nMoi nhap lai tu dau: !!"<<endl;
			cout<<"Nhap vao ngay: "<<endl;
			cin>>day;
	
			cout<<"Nhap vao thang: "<<endl;
			cin>>month;
	
			cout<<"Nhap vao nam: "<<endl;
			cin>>year;
			int dem=TinhSoNgay(day,month,year);
			cout<<"Day la ngay thu: "<<dem<<endl;
		}
	}while(NgayHopLe(day,month,year)!=true);
	return 0;
}

