#include "Nguoi.h"

class NhanSu
{
	private:
		char MaNhanSu[100];
		float HeSoChucVu;
		float HeSoLuong;
		Nguoi ng;
		int LuongCoBan;
		double luong;
	public:
		NhanSu(){
			MaNhanSu="";
			HeSoChucVu=0;
			HeSoLuong=0;
			Luong=0
		}
		NhanSu(char mns, float hscv, float hsl, double l){
			MaNhanSu=mns;
			HeSoChucVu=hscv;
			HeSoLuong=hsl;
			Luong=l;
		}
		void SetLuongCoBan(int lcb=1490000)
		{
			LuongCoBan=lcb;
		}
		void Nhap()
		{
			cout<<"\t\tnhap thong tin co ban:";
			ng.Nhap();
			cout<<"Nhap vao ma nhan su: ";
			cin>>MaNhanSu;
			cout<<"Nhap vao He so chuc vu: ";
			cin>>HeSoChucVu;
			cout<<"Nhap vao he so luong: ";
			cin>>HeSoLuong;
		}
		double TinhLuong()
		{
			luong=(HeSoLuong+HeSoChucVu)*LuongCoBan-HeSoLuong*LuongCoBan*(5/100);
			return luong;
		}
		void Xuat()
		{
			cout<<"\t\tToan bo thong tin nhan su la: ";
			ng.Xuat();
			cout<<"Ma Nhan su la: "<<MaNhanSu;
			cout<<"He so luong la: "<<HeSoLuong;
			cout<<"Luong cua nhan su la:"<<TinhLuong();
		}
};
