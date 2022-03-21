#include<iostream>

using namespace std;

class KhachHang
{
	private:
		string HoTen;
		int SoNha;
		string MaSoCongTo;
		int n;
	public:
		KhachHang()
		{
			n;
		};
		void Nhap()
		{
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap vao ho ten ";
				getline(cin,HoTen);
				fflush(stdin);
				cout<<"Nhap vao so nha: ";
				cin>>SoNha;
				fflush(stdin);
				cout<<"Nhap vao Ma so cong to: ";
				getline(cin,MaSoCongTo);
			}
		}
		void Xuat()
		{
			for(int i=0;i<n;i++)
			{
				cout<<endl<<"Thong tin khach hang thu"<<i+1;
				cout<<"Ho ten la:"<<HoTen;
				cout<<"So nha la:"<<SoNha;
				cout<<"Ma so cong to la: "<<MaSoCongTo;
			}
		}
};
