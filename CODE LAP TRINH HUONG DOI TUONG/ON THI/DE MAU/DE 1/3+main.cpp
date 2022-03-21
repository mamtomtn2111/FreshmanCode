/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include "1+2.h"
#include<string.h>

class QuanLySinhVien{
	private:
		int n;
		SinhVien *sv;
	public:
		QuanLySinhVien(){
		};
		QuanLySinhVien(int ssv){
			n=ssv;
		}
		QuanLySinhVien(SinhVien *sv1,int n1)
		{
			n=n1;
			for(int i = 0; i < n; i++)
				sv[i] = sv1[i];
		}
	void NHAP(){
		cout<<"Nhap vao so sinh vien: ";
		cin>>n;
		cout<<"\n====NHAP DANH SACH SINH VIEN===";
		sv= new SinhVien[n];
		for(int i = 0; i < n; i++){
			cout<<"\nNGUOI THU "<<i+1;
			sv[i].NhapSV();
		}
	}
	void XUAT(){
		for(int i = 0; i < n; i++){
			cout<<"\nNGUOI THU "<<i+1;
			sv[i].XuatSV();
		}
	}
	
	void SapXep(){
		SinhVien temp;
		for(int i = 0; i < n; i++)
			for(int j = i + 1; j < n;j++){
				if(sv[i].HoTen > sv[j].HoTen){
					temp=sv[i];
					sv[i]=sv[j];
					sv[j]=temp;
				}
			}
			cout<<"\n====DANH SACH SAU KHI DUOC SAP XEP LA===";
		}
		
};

int main(){
	QuanLySinhVien a;	
	a.NHAP();
	cout<<"\n==DANH SACH SINH VIEN VUA NHAP LA===";
	a.XUAT();
	a.SapXep();
	a.XUAT();
}
