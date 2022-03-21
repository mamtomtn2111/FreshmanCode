/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>

using namespace std;

class Nguoi{
	protected:
		string HoTen;
		string DiaChi;
		int Tuoi;
	public:
		Nguoi(){};
		Nguoi(string _Ten, string _Dc, int _Tuoi){
			HoTen = _Ten;
			DiaChi = _Dc;
			Tuoi = _Tuoi;
		}
		
		void NhapNguoi(){
			fflush(stdin);
			cout<<"Nhap vao ho ten: ";
			getline(cin,HoTen);
			
			cout<<"Nhap vao dia chi: ";
			getline(cin,DiaChi);
			
			fflush(stdin);
			
			cout<<"Nhap vao tuoi: ";
			cin>>Tuoi;
		}
		
		int GetAge(){
			return Tuoi;
		}
		
		string GetName(){
			return HoTen;
		}
		
		void XuatNguoi(){
			cout<<"\nHo ten: "<<HoTen;
			cout<<"\nDia chi: "<<DiaChi;
			cout<<"\nTuoi :"<<Tuoi;
		}
};

class SinhVien:public Nguoi{
	private:
		string NganhHoc;
		string Khoa;
	public:
		SinhVien(){};
		SinhVien operator=(const SinhVien &sv){
			HoTen = sv.HoTen;
			DiaChi = sv.DiaChi;
			Tuoi = sv.Tuoi;
			NganhHoc = sv.NganhHoc;
			Khoa = sv.Khoa;
			return *this;
		}
		void NhapSinhVien(){
			Nguoi::NhapNguoi();
			fflush(stdin);
			cout<<"Nhap vao nganh hoc: ";
			getline(cin,NganhHoc);
			
			cout<<"Nhap vao khoa: ";
			getline(cin,Khoa);
		}
		
		void XuatSinhVien(){
			Nguoi::XuatNguoi();
			cout<<"Nganh hoc: "<<NganhHoc;
			cout<<"Khoa: "<<Khoa;
		}
};

class QuanLySinhVien{
	private:
		int n;
		SinhVien *sv;
	public:
		QuanLySinhVien(){};
		QuanLySinhVien(int ssv){
			n = ssv;
		}
		QuanLySinhVien(SinhVien *sv1){
			for(int i = 0; i < n; i++)
				sv[i] = sv1[i];
		}
		void Nhap(){
			cout<<"Nhap vao n sinh vien: ";
			cin>>n;
			sv = new SinhVien[n];
			cout<<"===NHAP VAO DANH SACH SACH SINH VIEN===\n";
			for(int i = 0; i < n;i++){
				cout<<"\nSinh vien "<<i + 1<<endl;
				sv[i].NhapSinhVien();
			}
		}
		
		void Xuat(){
			for(int i = 0; i < n; i++){
				cout<<"\nSinh vien "<<i + 1<<endl ;
				sv[i].XuatSinhVien();
			}
		}
		
		void SapXep(){
			SinhVien temp;
			for(int i = 0; i < n; i++){
				for(int j = i + 1; j < n; j++){
					if(sv[i].GetAge() > sv[j].GetAge()){
						swap(sv[i],sv[j]);
					}
				}
			}
		}
		
		void TimKiem(){
			string s;
			cout<<"\nNhap vao ho ten can tim: ";
			getline(cin,s);
			cout<<"===XUAT DANH SACH SINH VIEN CO TEN "<<s<<"===\n";
			for(int i = 0; i < n; i++){
				if(sv[i].GetName() == s){
					cout<<"SinhVien "<<i + 1;
					sv[i].XuatSinhVien();
				}
			}
		}
};

int main(){
	QuanLySinhVien a;
	a.Nhap();
	cout<<"\n===XUAT DANH SACH SINH VIEN===\n";
	a.Xuat();
	a.SapXep();
	cout<<"\n===SAP XEP DANH SACH SINH VIEN THEO TUOI===";
	a.Xuat();
	a.TimKiem();
}
