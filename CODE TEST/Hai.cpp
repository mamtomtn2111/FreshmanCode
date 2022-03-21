#include<iostream>
using namespace std;

class Nguoi{
	protected:
		int namSinh;
		string hoTen,CMND;
	public:
		Nguoi(){};
		Nguoi(string _soCMT, string _hoTen, int _namSinh){
			this->CMND = _soCMT;
			this->hoTen = _hoTen;
			this->namSinh = _namSinh;
		};
		
		void set_namSinh(int namSinh){
			this->namSinh = namSinh;
		}
		int get_namSinh(){
			return this->namSinh;
		}
		
		void set_CMND(string CMT){
			this->CMND = CMT;
		}
		string get_CMND(){
			return this->CMND;
		}
		
		void set_hoTen(string hoten){
			this->hoTen = hoten;
		}
		string get_hoTen(){
			return this->hoTen;
		}
		void nhap(){
			cout<<"\nNhap so chung minh nhan dan : ";
			fflush(stdin);
			getline(cin,this->CMND);
			cout<<"Nhap ho ten : ";
			fflush(stdin);
			getline(cin,this->hoTen);
			cout<<"Nhap nam sinh : ";
			cin>>this->namSinh;
		}
		
		void xuat(){
			cout<<this->CMND<<"\t"<<this->hoTen<<"\t"<<this->namSinh;
		}
		
		int tinhTuoi(){
			return 2020 - this->namSinh;
		}
};

class SinhVien : public Nguoi{
	private:
		string maSV,nganhHoc;
	public:
		SinhVien(){};
		SinhVien(string _soCMT, string _hoTen, int _namSinh,string _maSinhVien,string _nganhHoc){
			SinhVien::Nguoi(_soCMT ,_hoTen ,_namSinh);
			this->maSV = _maSinhVien;
			this->nganhHoc = _nganhHoc;
		}
		
		void NhapSV(){
			Nguoi::nhap();
			cout<<"Nhap ma sinh vien : ";
			fflush(stdin);
			getline(cin,this->maSV);
			cout<<"Nhap nganh hoc : ";
			fflush(stdin);
			getline(cin,this->nganhHoc);
		}
		
		void xuatSV(){
			SinhVien::xuat();
			cout<<"\t"<<this->maSV<<"\t"<<this->nganhHoc<<endl;
		}
};


class QuanLySinhVien{
	private:
		SinhVien *a;
		int n;
	public:
		QuanLySinhVien(){};
		QuanLySinhVien(int ssv){
			this->n=ssv;
		}
		QuanLySinhVien(SinhVien mSinhVien[], int n1){
			for(int i=0;i<this->n;i++){
				this->a[i] = mSinhVien[i];
			}
			this->n = n1;
		}
		
		void NhapDS(){
			cout<<"Nhap so sinh vien : ";
			cin>>n;
			a=new SinhVien[n];
			for(int i=0;i<n;i++){
				cout<<"\n\tTHONG TIN CUA SINH VIEN THU : "<<i+1<<endl;
				a[i].NhapSV();
			}
		}
		
		void XuatDS(){
			for(int i=0;i<n;i++){
				a[i].xuatSV();
			}
		}
		
		void SapXepten(){
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(a[i].get_hoTen() > a[j].get_hoTen()){
						swap(a[i],a[j]);
					}
				}
			}
		}
};

int main(){
	QuanLySinhVien a;
	a.NhapDS();
	cout<<"\n\tDANH SACH VUA NHAP LA : ";
	a.XuatDS();
	a.SapXepten();
	cout<<"\n\tDANH SACH SAU KHI SAP XEP LA : "<<endl;
	a.XuatDS();
	
	return 0;
}
