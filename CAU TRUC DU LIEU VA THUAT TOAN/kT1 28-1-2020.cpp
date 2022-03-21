#include<iostream>
#define MAX 100

using namespace std;

struct SinhVien{
	string MaSV;
	string HoTen;
	float DiemTB;
};

struct List{
	SinhVien ds[MAX];
	int count;
};

void init(List l){
	l.count = 0;
}

int isEmpty(List l){
	return l.count == 0;
}

int isFull(List l){
	return l.count == 100;
}

void Nhap(List &l){
	cout<<"Nhap so luong sinh vien: ";
	cin>>l.count;
	for(int i = 0; i <l.count; i++){
		fflush(stdin);
		cout<<"\n===NHAP VAO THONG TIN SINH VIEN THU "<<i+1<<"===\n";
		cout<<"\nNhap vao ma sinh vien: ";
		getline(cin,l.ds[i].MaSV);
		cout<<"Nhap vao ho ten: ";
		getline(cin,l.ds[i].HoTen);
		fflush(stdin);
		cout<<"Nhap vao diem trung binh: ";
		cin>>l.ds[i].DiemTB;
	}
}

void Xuat(List &l){
	for(int i = 0; i < l.count; i ++){
		cout<<"\n===XUAT SINH VIEN THU "<<i+1<<"===\n";
		cout<<"Ma sinh vien la: "<<l.ds[i].MaSV;
		cout<<endl<<"Ho ten la: "<<l.ds[i].HoTen;
		cout<<endl<<"Diem TB: "<<l.ds[i].DiemTB;
	}
}

int Max(List &l){
	int max = l.ds[0].DiemTB;
	for(int i = 0; i < l.count; i ++){
		if(l.ds[i].DiemTB > max)
			max = l.ds[i].DiemTB;
	}
	return max;
}

void XuatMax(List &l){
	cout<<"\n===XUAT DANH SACH SINH VIEN CO DIEM TRUNG BINH LON NHAT LA===:\n";
	for(int i = 0; i < l.count; i++){
		if(l.ds[i].DiemTB == Max(l)){
			cout<<"\n===XUAT SINH VIEN THU "<<i+1<<"===\n";
			cout<<"\nMa sinh vien la: "<<l.ds[i].MaSV;
			cout<<endl<<"\nHo ten la: "<<l.ds[i].HoTen;
			cout<<endl<<"\nDiem TB: "<<l.ds[i].DiemTB;
		}
	}
}

void ThemPT(List &l, int p,SinhVien sv){
	cout<<"\nNhap vi tri can chen: ";
	cin>>p;
	if(isFull(l))
		cout<<"\nDANH SACH DAY !!";
	if(p < 0 || p > l.count)
		cout<<"\nVi tri chen khong hop le !!";
	else{
		fflush(stdin);
		cout<<"\nNhap vao ma sinh vien: ";
		getline(cin,sv.MaSV);
		cout<<"\nNhap vao ho ten: ";
		getline(cin,sv.HoTen);
		fflush(stdin);
		cout<<"Nhap vao diem trung binh: ";
		cin>>sv.DiemTB;
		
		for(int i = l.count + 1; i >= p; i--)
			l.ds[i] = l.ds[i-1];
		l.ds[p-1] = sv;
		l.count++;
	}
}

void XoaPT(List &l,int p){
	cout<<"\nNhap vi tri phan tu can xoa la:";
	cin>>p;
	if(isEmpty(l))
		cout<<"\nDanh sach rong !!";
	if( p < 0 || p>l.count)
		cout<<"Vi tri xoa khong hop le !!";
	else{
	for(int i = p; i < l.count;i++)
		l.ds[i] = l.ds[i+1];
		l.count--;
	}
}

//Xoa nhung nguoi co diem tb < 5

void XoaTB5(List &l){
	cout<<"\n===SAU KHI XOA NGUOI CO DIEM TB < 5====";
	for(int i = 0; i < l.count + 1; i++){
		if(l.ds[i].DiemTB < 5){
			l.ds[i] = l.ds[i+1];
			l.count--;
		}
	}
}

int main(){
	SinhVien sv;
	int p;
	List l;
	Nhap(l);
	cout<<"\n===MANG BAN VUA NHAP LA: ===="<<endl;
	Xuat(l);
	ThemPT(l,p,sv);
	cout<<"\n===MANG SAU KHI THEM LA: ===="<<endl;
	Xuat(l);
	XuatMax(l);
	XoaPT(l,p);
	cout<<"\n===MANG SAU KHI XOA LA: ===="<<endl;
	Xuat(l);
	XoaTB5(l);
	cout<<"\n===MANG SAU KHI XOA NHUNG NGUOI CO PHAN TU < 5";
	Xuat(l);
}
