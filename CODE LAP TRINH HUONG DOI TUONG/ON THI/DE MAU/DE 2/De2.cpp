/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/
#include<iostream>

using namespace std;

class Nguoi{
	protected:
		string CMT;
		string HoTen;
		string Que;
		int NamSinh;
	public:
		Nguoi(){};
		Nguoi(string _CMT, string _HoTen, string _Que, int _NamSinh){
			CMT = _CMT;
			HoTen = _HoTen;
			Que = _Que;
			NamSinh = _NamSinh;
		}
		
		void Nhap(){
			fflush(stdin);
			cout<<"\nNhap vao so cmt: ";
			getline(cin,CMT);
			
			cout<<"\nNhap vao ho ten: ";
			getline(cin,HoTen);
			
			cout<<"\nNhap vao que: ";
			getline(cin,Que);
			
			fflush(stdin);
			cout<<"\nNhap vao Nam sinh: ";
			cin>>NamSinh;
		}
		
		void Xuat(){
			cout<<"\nSo CMT: "<<CMT;
			cout<<"\nHo va ten: "<<HoTen;
			cout<<"\nQue: "<<Que;
			cout<<"\nNamSinh: "<<NamSinh;
		}
};

class SinhVien: public Nguoi{
	private:
		string MaSV;
		string NganhHoc;
	public:
		SinhVien(){};
		SinhVien(string _SoCMT, string _HoTen, string _Que,int _NamSinh, string _MSV, string _NganhHoc){
			CMT = _SoCMT;
			HoTen = _HoTen;
			Que = _Que;
			NamSinh = _NamSinh;
			MaSV = _MSV;
			NganhHoc = _NganhHoc;
		}
		
		void NhapSV(){
			Nguoi::Nhap();
			fflush(stdin);
			cout<<"\nNhap vao ma sinh vien: ";
			getline(cin,MaSV);
			cout<<"\nNhap vao nganh hoc: ";
			getline(cin,NganhHoc);
		}
		
		void XuatSV(){
			Nguoi::Xuat();
			cout<<"\nMa SV: "<<MaSV;
			cout<<"\nNganh Hoc: "<<NganhHoc;
		}
		
		string GetName(){
			return HoTen;
		}
		
		SinhVien operator= (const SinhVien &sv){
			CMT = sv.CMT;
			HoTen = sv.HoTen;
			Que = sv.Que;
			NamSinh = sv.NamSinh;
			MaSV= sv.MaSV;
			NganhHoc = sv.NganhHoc;
			return *this;
		}
};

class QLSV{
	private:
		int n;
		SinhVien *sv;
	public:
		QuanLySinhVien(){};
		QuanLySinhVien(int ssv){
			n=ssv;
		}
		QuanLySinhVien(SinhVien *sv1, int n1){
			n=n1;
			for(int i = 0; i < n; i++){
				sv[i] = sv1[i];
			}
		}
		
		void NHAP(){
			cout<<"Nhap vao n so sinh vien: ";
			cin>>n;
			sv = new SinhVien[n];
			cout<<"====NHAP DANH SACH SINH VIEN====";
			for(int i = 0; i < n; i++){
				cout<<"\nDanh sach sinh vien thu"<<i+1;
				sv[i].NhapSV();
			}
		}
		
		void XUAT(){
			cout<<"===XUAT DANH SACH SINH VIEN===";
			for(int i = 0; i < n; i++){
				cout<<"\nXuat danh sach sinh vien thu "<<i+1;
				sv[i].XuatSV();
			}
		}
		
		void TimKiem(){
			string k;
			cout<<"\nNhap vao sinh vien muon tim: ";
			fflush(stdin);
			getline(cin,k);
			for(int i = 0; i < n; i++){
				if(k.compare(sv[i].GetName()) == 0)
				sv[i].XuatSV();
			}
		}
};

int main(){
	QLSV a;
	a.NHAP();
	a.XUAT();
	a.TimKiem();
}
