/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/
#include<iostream>
#define YEAR 2020

using namespace std;

class Nguoi{
	protected:
		string CMT;
		string HoTen;
		int NamSinh;
	public:
		Nguoi(){
		CMT="";
		HoTen="";
		NamSinh=0;	
		};
		
		Nguoi(string _SoCMT, string _HoTen, int _NamSinh){
			CMT=_SoCMT;
			HoTen=_HoTen;
			NamSinh=_NamSinh;
		}
		
		void SetNguoi(Nguoi Ng){
			CMT=Ng.CMT;
			HoTen=Ng.HoTen;
			NamSinh=Ng.NamSinh;
		}
		
		string GetID(){
			return CMT;
		}
		
		int GetNamSinh(){
			return NamSinh;
		}
		
		string GetName(){
			return HoTen;
		}
		
		void nhap(){
			fflush(stdin);
			cout<<"\nNhap vao so cmt: ";
			getline(cin,CMT);
			fflush(stdin);
			cout<<"\nNhap vao ho ten: ";
			getline(cin,HoTen);
			fflush(stdin);
			cout<<"\nNhap vao nam sinh: ";
			cin>>NamSinh;
		}
		
		void xuat(){
			cout<<endl<<"So CMT la: "<<CMT;
			cout<<"\nHo Ten: "<<HoTen;
			cout<<"\nNam Sinh: "<<NamSinh;
			cout<<"\nTuoi: "<<TinhTuoi();
		}
		
		int TinhTuoi(){
			int Tuoi;
			Tuoi=YEAR-NamSinh;
			return Tuoi;
		}
};

class SinhVien: public Nguoi{
	private:
		string MaSV;
		string NganhHoc;
	public:
		SinhVien(){};
		SinhVien(string _SoCMT, string _HoTen, int _NamSinh, string _maSinhVien, string _nganhHoc){
			CMT=_SoCMT;
			HoTen=_HoTen;
			NamSinh=_NamSinh;
			MaSV=_maSinhVien;
			NganhHoc=_nganhHoc;
		}
		void NhapSV(){
			Nguoi::nhap();
			fflush(stdin);
			cout<<"\nNhap vao ma sinh vien: ";
			getline(cin,MaSV);
			cout<<"\nNhap vao nganh hoc";
			getline(cin,NganhHoc);
		}
		
		void XuatSV(){
			Nguoi::xuat();
			cout<<"\nMa sinh vien: "<<MaSV;
			cout<<"\nNganh hoc: "<<NganhHoc;
		}
};
