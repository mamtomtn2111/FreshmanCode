#include<iostream>

using namespace std;

class Nguoi
{
	private:
		string HoTen;
		string DiaChi;
		int NamSinh;
	public:
		Nguoi();
		Nguoi(string ht,string dc,int ns);
		void NhapTT();
		void inTT();
};

Nguoi::Nguoi()
{
	HoTen="";
	DiaChi="";
	NamSinh=0;
}

Nguoi::Nguoi(string ht,string dc,int ns)
{
	HoTen=ht;
	DiaChi=dc;
	NamSinh=ns;
}

void Nguoi::NhapTT()
{
	cout<<"nhap vao ho ten: ";
	getline(cin,HoTen);
	fflush(stdin);
	cout<<"Nhap vao dia chi: ";
	getline(cin,DiaChi);
	fflush(stdin);
	cout<<"Nhap vao nam sinh: ";
	cin>>NamSinh;
}

void Nguoi::inTT()
{
	cout<<"\nHo ten la: "<<HoTen;
	cout<<"\nDia chi la: "<<DiaChi;
	cout<<"\nNam sinh la: "<<NamSinh;
}

class SinhVien: public Nguoi
{
	private:
		string MaSV;
		string TenLop;
		float Diem1;
		float Diem2;
		float Diem3;
	public:
		SinhVien();
		SinhVien(string msv,string tl,float Diem1,float Diem2,float Diem3);
		void NhapSV();
		void XuatSV();
		float TinhDiemTrungBinh();
};

SinhVien::SinhVien()
{
	MaSV="";
	TenLop="";
	Diem1=0;
	Diem2=0;
	Diem3=0;
}

SinhVien::SinhVien(string msv,string tl,float D1,float D2,float D3)
{
	MaSV=msv;
	TenLop=tl;
	Diem1=D1;
	Diem2=D2;
	Diem3=D3;
}

void SinhVien::NhapSV()
{
	Nguoi::NhapTT();
	fflush(stdin);
	cout<<"Nhap vao ma sinh vien";
	getline(cin,MaSV);
	fflush(stdin);
	cout<<"Nhap vao Ten Lop: ";
	getline(cin,TenLop);
	fflush(stdin);
	cout<<"Nhap vao diem 1: ";
	cin>>Diem1;
	cout<<"Nhap vao diem 2: ";
	cin>>Diem2;
	cout<<"Nhap vao diem 3: ";
	cin>>Diem3;
}

void SinhVien::XuatSV()
{
	Nguoi::inTT();
	cout<<"\nMa Sinh vien la: "<<MaSV;
	cout<<"\nTen lop: "<<TenLop;
	cout<<"\nDiem 1: "<<Diem1;
	cout<<"\nDiem 2: "<<Diem2;
	cout<<"\nDiem 3: "<<Diem3;
}

float SinhVien::TinhDiemTrungBinh()
{
	float DiemTB;
		DiemTB = ( Diem1 + Diem2 + Diem3 )/3;
	return DiemTB;
}

int main()
{
	SinhVien sv;
	sv.NhapSV();
	sv.XuatSV();
	cout<<"\nDiem trung binh la: "<<sv.TinhDiemTrungBinh();
}
