#include<iostream>
using namespace std;
class Nguoi{
	private:
		string cmt,ht,que;
		int ns;
	public:
		Nguoi();
		Nguoi(string socmt,string hoten,string quequan,int nam);
		void nhap();
		void xuat();
		int tinhtuoi(int);
};
Nguoi::Nguoi(){
	cmt="";
	ht="";
	que="";
	ns=0;
}
Nguoi::Nguoi(string socmt,string hoten,string quequan,int nam){
	cmt=socmt;
	ht=hoten;
	que=quequan;
	ns=nam;
}
void Nguoi::nhap(){
	fflush(stdin);
	cout<<"\nCMT: ";
	getline(cin,cmt);
	cout<<"\nHo ten: ";
	getline(cin,ht);
	cout<<"\nQue quan: ";
	getline(cin,que);
	cout<<"\nNam sinh:";
	cin>>ns;
}
void Nguoi::xuat(){
	cout<<"\nCMT: "<<cmt<<"\nHoten: "<<ht<<"\nQue quan: "<<
	que<<"\nNam sinh: "<<ns;
}
int Nguoi::tinhtuoi(int namhientai){
	return namhientai-ns;
}
class Sinhvien:public Nguoi{
	private:
		string masv,nganh;
	public:
		Sinhvien();
		Sinhvien(string _maSinhVien, string _nganhHoc);
		Sinhvien(string, string,string,int,string,string);
		void nhap();
		void xuat();
};      
Sinhvien::Sinhvien(){
	
}
Sinhvien::Sinhvien(string _maSinhVien, string _nganhHoc)
{
	masv=_maSinhVien;
	nganh=_nganhHoc;
}
Sinhvien::Sinhvien(string socmt,string hoten,string quequan,int nam,
 string masinhvien,string nganhhoc):Nguoi(socmt,hoten, quequan,nam)
   {
   	    masv=masinhvien;
		nganh=nganhhoc;
	}
void Sinhvien::nhap(){
	Nguoi::nhap();//ke thua phuong thuc nhap tu lop Nguoi
	cout<<"\nMa sinh vien: ";
	fflush(stdin);
	getline(cin,masv);
	cout<<"\nNganh hoc: ";
	getline(cin,nganh);
}
void Sinhvien::xuat(){
	Nguoi::xuat();//ke thua phuong thuc xuat tu lop Nguoi
	cout<<"\nMa sinh vien: "<<masv<<"\nNganh hoc: "<<nganh;
}
class QuanLySinhVien{
	private:
		Sinhvien ds[100];
		int n;
	public:
		QuanLySinhVien();
		QuanLySinhVien(int ssv);
		QuanLySinhVien(Sinhvien mSinhVien[]);
		void nhap();
		void xuat();
};
QuanLySinhVien::QuanLySinhVien(){
}
QuanLySinhVien::QuanLySinhVien(int ssv){
	n=ssv;
}
QuanLySinhVien::QuanLySinhVien(Sinhvien mSinhVien[]){
	for(int i=0;i<n;i++)
	ds[i]=mSinhVien[i];
}
void QuanLySinhVien::nhap(){
	for(int i=0;i<n;i++)
		ds[i].nhap();
	}
void QuanLySinhVien::xuat(){
	for(int i=0;i<n;i++)
	ds[i].xuat();
}
int main(){
	//Bai 1
	Nguoi n=Nguoi("12345678","Nguyen Van A","Thai Nguyen",2000);
   // n.nhap();
	n.xuat();
	cout<<"\nTuoi = "<<n.tinhtuoi(2020);
	//Bai 2
	Sinhvien sv=Sinhvien();
	sv=Sinhvien("123","Nguyen Van A","ThaiNguyen",2000,"DTC123","CNTT");
	//sv.nhap();
	sv.xuat();
	//Bai 3
	QuanLySinhVien ql=QuanLySinhVien(2);
	ql.nhap();
	ql.xuat();
	}
