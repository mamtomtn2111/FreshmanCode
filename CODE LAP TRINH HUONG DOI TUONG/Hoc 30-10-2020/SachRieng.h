#include "NhapXuatChung.h"

class Sach
{
	private:
		int SGK;
		int TieuThuyet;
		int TapChi;
		string TheLoai;
		string Lop;
		string DinhKy;
		ThongTin *nxc;
	public:
		Sach(){
		}
		Sach(int _SGK,int _TieuThuyet,int _TapChi){
			SGK=_SGK;
			TieuThuyet=_TieuThuyet;
			TapChi=_TapChi;
			nxc = new ThongTin[1000];
			
		}
		void NhapSachSGK()
		{
			cout<<"Nhap vao so luong SGK: ";
			cin>>SGK;
			for(int i=0;i<SGK;i++)
			{
				fflush(stdin);
				nxc[i].Nhap();
				fflush(stdin);
				cout<<"\nNhap vao khoi lop: ";
				getline(cin,Lop);
			}	
		}
		void NhapSachTieuThuyet()
		{
			cout<<"Nhap vao so luong tieu thuyet: ";
			cin>>TieuThuyet;
			for(int i=0;i<TieuThuyet;i++)
			{
				fflush(stdin);
				nxc[i].Nhap();
				fflush(stdin);
				cout<<"\nNhap vao the loai: ";
				getline(cin,TheLoai);
			}
		}
		void NhapSachTapChi()
		{
			cout<<"Nhap vao so luong tap chi: ";
			cin>>TapChi;
			for(int i = 0;i<TapChi;i++)
			{
				fflush(stdin);
				nxc[i].Nhap();
				fflush(stdin);
				cout<<"\nNhap vao dinh ky:";
				getline(cin,DinhKy);
			}
		}
		void XuatSachSGK()
		{
			cout<<"\n\t\tXUAT SACH SGK !!!";
			for(int a=0;a<SGK;a++)
			{
				nxc[a].Xuat();
				cout<<"\nKhoi Lop: "<<Lop[a];
			}
		}
		
		void XuatSachTieuThuyet()
		{
			cout<<"\n\t\tXUAT SACH TIEU THUYET !!";
			for(int b=0;b<TieuThuyet;b++)
			{
				nxc[b].Xuat();
				cout<<"\nThe loai tieu thuyet la: "<<TheLoai[b];
			}
		}
		
		void XuatSachTapChi()
		{
			cout<<"\n\t\tXUAT SACH TAP CHI !!";
			for(int c=0;c<TapChi;c++)
			{
				nxc[c].Xuat();
				cout<<"\nDinh ki tap chi la: "<<DinhKy[c];
			}
		}
};
