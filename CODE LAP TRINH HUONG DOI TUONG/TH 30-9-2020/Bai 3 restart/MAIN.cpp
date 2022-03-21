#include<iostream>
#include<iomanip>
using namespace std;

class KhachHang
{
	private:
		char HoTen[50];
		int SoNha;
		char MsCT[50];
	public:
		void Nhapkh();
		void Xuatkh();
};

void KhachHang::Nhapkh()
{
	fflush(stdin);
	cout<<"\nNhap vao ho ten khach su dung:";
	cin.getline(HoTen,40);
	fflush(stdin);
	cout<<"Nhap vao so nha: ";
	cin>>SoNha;
	fflush(stdin);
	cout<<"Nhap vao ma so cong to: ";
	cin.getline(MsCT,50);
	fflush(stdin);
}

void KhachHang::Xuatkh()
{
	cout<<"\nHo Ten khach hang la:"<<HoTen<<"\nSo nha la:"<<SoNha<<"\nMa so cong to la: "<<MsCT;
}

class BienLai
{
	private:
		float STPT;
		float SM,SC;
		KhachHang kh;
		int n;
	public:
		void Nhap();
		void Xuat();
};


void BienLai::Nhap()
{
	cout<<"Nhap vao n khach: ";
	cin>>n;
	cout<<"\t\tNHAP VAO THONG TIN KHACH HANG: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\n==Nhap vao thong tin khach thu "<<i+1<<": ";
		kh.Nhapkh();
		cout<<"Nhap vao so cu: ";
		cin>>SC;
		cout<<"Nhap vao so moi: ";
		cin>>SM;
		STPT=(SM-SC)*850000;
	}
}

void BienLai::Xuat()
{
	cout<<"\n\t\tTHONG TIN KHACH HANG LA: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\n\tkhach hang thu"<<i+1<<"la :";
		kh.Xuatkh();
		cout<<"So dien cu cua quy khach la:"<<SC<<"\nSo dien moi cua quy khach la: "<<SM;
		cout<<setprecision(9)<<"\nSo tien quy khach phai tra la: "<<STPT;
	}
}

int main()
{
	BienLai bl;
	bl.Nhap();
	bl.Xuat();
}
