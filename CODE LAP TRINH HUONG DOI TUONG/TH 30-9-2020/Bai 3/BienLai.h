#include "KhachHang.h"

using namespace std;

class BienLai
{
	private:
		double SoMoi;
		double SoCu;
		double SoTien;
		KhachHang kh;
		int n;
	public:
		BienLai()
		{
			SoMoi=0;
			SoCu=0;
			SoTien=0;
		}
		double TinhTien()
		{
			for(int i=0;i<n;i++)
			{
				kh.Nhap();
				cout<<"Nhap vao so cu: ";
				cin>>SoCu;
				cout<<"Nhap vao so moi: ";
				cin>>SoMoi;
				SoTien=(SoMoi-SoCu)*850000;
			}
		}
		void Xuat()
		{
			for(int i=0;i<n;i++)
			{
				kh.Xuat();
				cout<<"So cu: "<<SoCu;
				cout<<"So moi: "<<SoMoi;
				cout<<"So tien cua ho la: "<<SoTien;
			}
		}
};
