/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>
#include<cstring>
using namespace std;

class Nguoi{
	protected:
		string HoTen;
		string SoCMND;
		string DiaChi;
	public: 
		Nguoi(){};
		Nguoi(string _HoTen, string _cmnd, string _DiaChi){
			HoTen = _HoTen;
			SoCMND = _cmnd;
			DiaChi = _DiaChi;
		}
		void NhapN(){
			fflush(stdin);
			cout<<"Nhap vao ho ten: ";
			getline(cin,HoTen);
			cout<<"Nhap vao so CMND: ";
			getline(cin,SoCMND);
			
			cout<<"Nhap vao dia chi: ";
			getline(cin,DiaChi);
		}
		
		void XuatN(){
			cout<<"\nHo ten: "<<HoTen;
			cout<<"\nSo CMND: "<<SoCMND;
			cout<<"\nDia chi: "<<DiaChi;
		}
		
		string GetName(){
			return HoTen;
		}
};

class KhachHang: public Nguoi{
	private:
		string MaKhachHang;
		int Tien;
	public:
		KhachHang(){};
		KhachHang(string _HoTen, string _cmnd, string _DiaChi, string MaKH, int _SoTien){
			HoTen = _HoTen;
			SoCMND = _cmnd;
			DiaChi = _DiaChi;
			MaKhachHang = MaKH;
			Tien = _SoTien;
		}
		void Nhap(){
			Nguoi::NhapN();
			cout<<"Nhap vao ma khach hang: ";
			getline(cin,MaKhachHang);
			
			fflush(stdin);
			cout<<"Nhap vao so tien: ";
			cin>>Tien;
		}
		
		void Xuat(){
			Nguoi::XuatN();
			cout<<"\nMa khach hang: "<<MaKhachHang;
			cout<<"\nSo tien: "<<Tien;
		}
};

class QLKH{
	private:
		int n;
		KhachHang *kh;
	public:
		QLKH(int sKh){
			n = sKh;
			kh = new KhachHang[n];
		}
		QLKH(int _n, KhachHang *kh1){
			n = _n;
			for(int i = 0; i < n; i++)
				kh[i] = kh1[i];
		}
		void Nhap(){
			cout<<"\n\n====NHAP DANH SACH KHACH HANG===";
			for(int i = 0; i < n; i ++){
				cout<<"\nNhap nguoi thu "<<i+1<<endl;
				kh[i].Nhap();
			}
		}
		
		void Xuat(){
			for(int i = 0; i < n; i++){
				cout<<"\nNguoi "<<i + 1;
				kh[i].XuatN();
			}
		}
		
		
		void SapXep(){
			for(int i = 0; i < n -1; i++){
				for(int j = i + 1; j < n;j++){
					if(kh[i].GetName() > kh[j].GetName())
						swap(kh[i],kh[j]);
				}
			}
		}
};

int main(){
	int n;
	cout<<"Nhap vao so luong khac hang: ";
	cin>>n;
	QLKH a(n);
	a.Nhap();
	cout<<"\n===XUAT KHACH HANG===";
	a.Xuat();
	a.SapXep();
	cout<<"\n===SAP XEP THONG TIN KHACH HANG THEO TEN===";
	a.Xuat();
}
