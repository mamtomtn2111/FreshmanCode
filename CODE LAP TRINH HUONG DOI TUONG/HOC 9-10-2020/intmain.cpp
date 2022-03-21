#include"Congphanso.h"

int main()
{
	PhanSo ph,ph1(1,2),ph2(2,6),ph3;

//	ph1.nhap();
//	ph2.nhap();
	
	ph=ph1+ph2;
	ph.xuat();
	
	ph3=ph1-ph2;
	ph3.xuat();
}
