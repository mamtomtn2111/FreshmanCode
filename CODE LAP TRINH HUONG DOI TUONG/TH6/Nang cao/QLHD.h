
#include "HoDan.h"

class QLHD
{
	private:
		int n;
		HoDan *qlhd;
	public:
		
		QLHD(int _n)
		{
			n = _n;
			qlhd = new HoDan[n];
		}
		
		void Nhap()
		{
			for(int i =0; i < n ; i++)
			{
				int SoTV, SoNha;
				cout<<"So thanh vien: ";
				cin>> SoTV;
				cout<<"So nha: ";
				cin>>SoNha;
				qlhd[i].setup(SoNha, SoTV);
				qlhd[i].Nhap();
			}
		}
		
		void Xuat()
		{
			for(int i=0; i < n; i++)
			{
				qlhd[i].Xuat();
			}
		}
};
