#include "Nguoi.h"

class HoDan
{
	private:
		int SoNha;
		int SoTV;
		Nguoi *ds;
	public:
		HoDan(){
		}
		HoDan(int sn,int stv)
		{
			SoNha = sn;
			SoTV = stv;
			ds = new Nguoi[SoTV];
		}
		
		void Nhap()
		{
			for(int i = 0 ; i < SoTV; i++)
			{
				cin.ignore();
				ds[i].nhap();
			}
		}
		void setup(int sn, int stv)
		{
			SoNha = sn;
			SoTV = stv;
			ds = new Nguoi[SoTV];
		}
		
		void Xuat()
		{
			cout<<"====="<<"\nSo nha: "<< SoNha << "\nSo tv:"<< SoTV <<endl;
			for(int i=0;i<SoTV;i++)
			{
				ds[i].xuat();
			}
		}
};
