#include "iostream"
using namespace std;
class PhanSo 
{
	private:
		int tu, mau;
	public:
		PhanSo(){
		}
		PhanSo(int t, int m) 
		{
			tu = t;
			mau = m;
		}
		void nhap()
		{
			cout<<"Nhap vao tu va mau cua phan so: ";
			cin>>tu>>mau;
		}
		void xuat()
		{
			cout<<tu<<"/"<<mau<<endl;
		}
		int USCLN()
		{
			int a = tu, b = mau;
			while(a != b)
				if(a > b)
					a = a - b;
				else
					b = b - a;
			return a;
		}
		PhanSo operator+(PhanSo ps)
		{
			PhanSo tmp;
				tmp.tu = tu * ps.mau + mau * ps.tu;
				tmp.mau = mau * ps.mau;
			int n = tmp.USCLN();
				tmp.tu = tmp.tu/n;
				tmp.mau =tmp.mau /n;
			return tmp;
		}
		PhanSo operator-(PhanSo ps)
		{
			PhanSo tmp;
				tmp.tu = tu * ps.mau - mau * ps.tu;
				tmp.mau = mau * ps.mau;
			int n = tmp.USCLN();
				tmp.tu = tmp.tu/n;
				tmp.mau =tmp.mau /n;
			return tmp;
		}
		PhanSo operator*(PhanSo ps)
		{
			PhanSo tmp;
				tmp.tu = tu*ps.tu;
				tmp.mau = mau * ps.mau;
			int n = tmp.USCLN();
				tmp.tu = tmp.tu/n;
				tmp.mau =tmp.mau /n;
			return tmp;
		}
		PhanSo operator*(PhanSo ps)
		{
			PhanSo tmp;
				tmp.tu = tu*ps.mau;
				tmp.mau = mau * ps.tu;
			int n = tmp.USCLN();
				tmp.tu = tmp.tu/n;
				tmp.mau =tmp.mau /n;
			return tmp;
		} 
};
