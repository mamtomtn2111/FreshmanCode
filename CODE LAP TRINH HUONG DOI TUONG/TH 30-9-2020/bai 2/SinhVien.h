#include "CheckTime.h"

class SinhVien
{
	private:
		string MaSinhVien;
		string HoTen;
	public:
		SinhVien(string ma="",string ht="")
		{
			MaSinhVien=ma;
			HoTen=ht;
		}
		void Nhap()
		{
			fflush(stdin);
			cout<<"Nhap vao ma sinh vien: ";
			getline(cin,MaSinhVien);
			fflush(stdin);
			cout<<"Ho ten: ";
			getline(cin,HoTen);
		}
		void Xuat()
		{
			cout<<endl<<"Ma sinh vien la: "<<MaSinhVien;
			cout<<endl<<"Ho ten sinh vien la: "<<HoTen;
		}
};
