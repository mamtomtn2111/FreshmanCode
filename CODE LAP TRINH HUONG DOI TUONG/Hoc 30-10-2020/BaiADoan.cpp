#include<iostream>
using namespace std;
class Sach{
	private:
		string tenSach;
		string NXB;
		int namSX;
		int soTrang;
		int gia;
	public:
		Sach();
		Sach(string ten, string nxb, int nam,int t, int g);	
	virtual	void nhap();
	virtual	void xuat();
};
Sach::Sach(){
	tenSach = "";
	NXB = "";
	namSX = 0;
	soTrang = 0;
	gia = 0;
	}
Sach::Sach(string ten, string nxb, int nam,int t, int g){
	ten = tenSach;
	nxb = NXB;
	nam = namSX;
	t = soTrang;
	g = gia;
}

void Sach::nhap(){
	fflush(stdin);
	cout<<"\nNhap ten Sach : ";
	getline(cin, tenSach);
	fflush(stdin);
	cout<<"\nNhap nha xuat ban : ";
	getline(cin, NXB);
	fflush(stdin);
	cout<<"\nNhap nam san xuat : ";
	cin>>namSX;
	fflush(stdin);
	cout<<"\nNhap so trang : ";
	cin>>soTrang;
	fflush(stdin);
	cout<<"\nNhap gia Sach : ";
	cin>>gia;
}
void Sach::xuat(){
	cout<<"\nTen Sach : "<<tenSach;
	cout<<"\nNha xuat ban : "<<NXB;
	cout<<"\nNam san xuat : "<<namSX;
	cout<<"\nSo trang : "<<soTrang;
	cout<<"\nGia Sach : "<<gia;
}
class SGK:public Sach{
	private:
		int lop;
		Sach s;
	public:
		void nhap();
		void xuat();
};
void SGK::nhap(){
	s.nhap();
	cout<<"\nNhap khoi lop : ";
	cin>>lop;
}
void SGK::xuat(){
	s.xuat();
	cout<<"\nKhoi lop la : "<<lop;
}

class TapChi:public Sach{
	private:
		string dang;
		Sach s;
	public:
		void nhap();
		void xuat();
		
};
void TapChi::nhap(){
	s.nhap();
	fflush(stdin);
	cout<<"\nNhap dang tap chi : ";
	getline(cin, dang);
}
void TapChi::xuat(){
	fflush(stdin);
	s.xuat();
	cout<<"\nDang tap chi la: "<<dang;
}
class TieuThuyet:public Sach{
	private:
		string theloai;
		Sach s;
	public:
		void nhap();
		void xuat();
		
};
void TieuThuyet::nhap(){
	s.nhap();
	fflush(stdin);
	cout<<"\nNhap the loai : ";
	getline(cin, theloai);
}
void TieuThuyet::xuat(){
	fflush(stdin);
	s.xuat();
	cout<<"\nThe loai sach la : "<<theloai;
}
class QuanLy{
	private:
		int n;
		Sach **ds;
	public:
		QuanLy(int n1){
			n=n1;
			ds = new Sach*[n];
		}
	void nhap(){
		for(int i = 0; i < n; i++){
			cout<<"Ban nhap SGK, tap chi hay Tieu Thuyet (1, 2, 3)?";
			int loai;
			cin>>loai;
			switch(loai){
				case 1:
					ds[i] = new SGK();
				
					break;
				case 2:
					ds[i] = new TapChi();
				
					break;
				case 3:
					ds[i] = new TieuThuyet();
				
					break;
			}
			ds[i]->nhap();
			ds[i]->xuat();
		}
	}

};
int main(){

//	SGK s;
//	SGK s1 = SGK(3);
//	s1.nhap();
//	s1.xuat();
//	TieuThuyet t;
//	t.nhap();
//	t.xuat();
//	TapChi t2;
//	t2.nhap();
//	t2.xuat();
int n = 2;
QuanLy ql(n);

ql.nhap();
//ql.xuat();


}
