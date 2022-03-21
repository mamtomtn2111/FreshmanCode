#include<iostream>
#include<iomanip>
using namespace std;

class Nguoi
{
	private:
		char HoTen[50];
		char DiaChi[50];
		int NamSinh;
	public:
		void NhapTT();
		void InTT();
};

void Nguoi::NhapTT()
{
		cout<<"nhap vao ho ten: ";
		cin.getline(HoTen,50);
		fflush(stdin);
		cout<<"Nhap vao dia chi: ";
		cin.getline(DiaChi,50);
		fflush(stdin);
		cout<<"Nhap vao nam sinh: ";
		cin>>NamSinh;
}

void Nguoi::InTT()
{
	cout<<"\nHo ten la: "<<HoTen;
	cout<<"\nDia chi la: "<<DiaChi;
	cout<<"\nNam sinh la: "<<NamSinh;
}

class NhanSu:Nguoi
{
	private:
		string MaNhanSu;
		float HeSoChucVu;
		float HeSoLuong;
		int LuongCoBan;
	public:
		Nguoi ng;
		void NhapTTNhanSu();
		void InTTNhanSu();
		int SetLuongCoBan(int lcb);
		double TinhLuong();
};

void NhanSu::NhapTTNhanSu()
{
	ng.NhapTT();
	fflush(stdin);
	cout<<"Nhap vao ma nhan su: ";
	getline(cin,MaNhanSu);
	fflush(stdin);
	cout<<"Nhap vao he so chuc vu: ";
	cin>>HeSoChucVu;
	cout<<"NHap vao he so luong: ";
	cin>>HeSoLuong;
	fflush(stdin);
}

void NhanSu::InTTNhanSu()
{
	ng.InTT();
	cout<<"\nMa nhan su la: "<<MaNhanSu;
	cout<<"\nHe so chuc vu la: "<<HeSoChucVu;
	cout<<"\nHe so luong la: "<<HeSoLuong<<endl;
}

int NhanSu::SetLuongCoBan(int lcb)
{
	LuongCoBan = lcb = 1600000;
	return LuongCoBan;
}

double NhanSu::TinhLuong()
{
	double Luong;
	Luong = (( HeSoLuong + HeSoChucVu ) * LuongCoBan) - (HeSoLuong * LuongCoBan * (5/100));
	return Luong;
}

int main()
{
	int lcb;
	NhanSu ns,ns1,ns2;
	ns1.NhapTTNhanSu();
	ns2.NhapTTNhanSu();
	cout<<setprecision(10);
	ns1.SetLuongCoBan(lcb);
	ns2.SetLuongCoBan(lcb);
	
	//Nhap nguoi 1
	ns1.InTTNhanSu();
	cout<<"Luong nguoi 1 la: "<<ns1.TinhLuong()<<endl;
	
	//Nhap nguoi 2
	ns2.InTTNhanSu();
	cout<<"Luong nguoi 2 la: "<<ns2.TinhLuong();
}
