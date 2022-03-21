#include <iostream>
#include <math.h>
using namespace std;

class DaGiac
{
	private:
		int n;
		float *a;
	public:
		DaGiac(int _n)
		{
			n = _n;
			a = new float[n];
		};
		void Nhap()
		{
			for(int i = 0; i < n; i++)
			{
				cout<<"a["<<i<<"] = ";
				cin>>a[i];
			}
		}
		void Xuat()
		{
			cout<<"\nSo canh la: "<<n<<endl;
			for(int i = 0; i < n; i++)
			{
				cout<<"\nCanh thu "<<i+1<<" co do dai "<<a[i]<<endl;
			}		
		}
		void ChuVi(int tong = 0)
		{
			for(int i = 0; i < n; i++)
			{
				tong = tong + a[i];
			}
			cout<<"\nChu vi cua da giac la: "<<tong<<endl;
		}
};
class TamGiac
{
	private:
		float *a;
	public:
		TamGiac()
		{
			a = new float[3];
		};
		void Nhap()
		{
			for(int i = 0; i < 3; i++)
			{
				cout<<"a["<<i<<"] = ";
				cin>>a[i];
			}
		}
		void Xuat()
		{
			for(int i = 0; i < 3; i++)
			{
				cout<<"\nCanh thu "<<i+1<<" co do dai "<<a[i]<<endl;
			}		
		}
		void ChuVi(int tong = 0)
		{
			for(int i = 0; i < 3; i++)
			{
				tong = tong + a[i];
			}
			cout<<"\nChu vi cua tam giac la: "<<tong<<endl;
		}
		void DienTich(int temp = 0, int tich = 0)
		{
			temp = (a[0] + a[1] + a[2])/2;
			tich = sqrt(temp*(temp - a[0])*(temp - a[1])*(temp - a[2]));
			cout<<"\nDien tich cua tam giac la: "<<tich<<endl;
		}
		
}; 

int main ()
{
	TamGiac x;
	x.Nhap();
	x.Xuat();
	x.ChuVi();
	x.DienTich();
}
