#include<iostream>

using namespace std;

class SinhVien{
	private:
		string MaSV;
		string HoTen;
		string DiaChi;
		double d1,d2,d3;
	public:
		void NhapTTSV(){
			fflush(stdin);
			cout<<"Nhap vao ma sinh vien: ";
			getline(cin,MaSV);
			
			cout<<"Nhap vao ho ten: ";
			getline(cin,HoTen);
			
			cout<<"Nhap vao dia chi: ";
			getline(cin,DiaChi);
			
			fflush(stdin);
			cout<<"Nhap vao diem tb:";
			cin>>d1>>d2>>d3;
		}
		
		void InTTSV(){
			cout<<"\nMa sinh vien: "<<MaSV;
			cout<<"\nHo ten la: "<<HoTen;
			cout<<"\nDia chi la: "<<DiaChi;
			cout<<"\nDiem : "<<d1<<" - "<<d2<<" - "<<d3;
			cout<<"\nDiem trung binh la:"<<TinhDiemTB();
		}
		
		string GetAddress(){
			return DiaChi;
		}
		
		double TinhDiemTB(){
			double Diem;
				Diem=(d1 + d2 + d3)/3;
			return Diem;
		}
};

class DanhSachSinhVien{
	private:
		int n;
		SinhVien *sv;
	public:
		DanhSachSinhVien(){};
		DanhSachSinhVien(int ssv){
			n=ssv;
		};
		
		DanhSachSinhVien(SinhVien *sv1){
			for(int i = 0; i < n; i++)
				sv[i] = sv1[i];
		}
		
		void NHAP(){
			cout<<"Nhap vao n danh sach sinh vien: ";
			cin>>n;
			sv = new SinhVien[n];
			cout<<"\n\t===NHAP THONG TINH SINH VIEN===";
			for(int i = 0;i < n; i++){
				cout<<"\nSinh vien "<<i + 1;
				sv[i].NhapTTSV();
			}
		}
		
		void XUAT(){
			cout<<"\n\t===XUAT DANH SACH SINH VIEN===";
			for(int i = 0; i < n; i++){
				cout<<"\nSinh vien "<<i + 1;
				sv[i].InTTSV();
			}
		}
		
		void AddressFinding(string dc){
			fflush(stdin);
			cout<<"\nNhap vao dia chi: ";
			getline(cin,dc);
			cout<<"\n\t===XUAT DANH SACH SINH VIEN CO DIA CHI "<<dc;
			for(int i = 0; i < n; i++){
				if(dc.compare(sv[i].GetAddress()) == 0){
					cout<<"\nSinh vien "<<i + 1;
					sv[i].InTTSV();
				}
			}
		}
		
};

int main(){
	DanhSachSinhVien sv;
	sv.NHAP();
	sv.XUAT();
	sv.AddressFinding("94 hvt");
}
