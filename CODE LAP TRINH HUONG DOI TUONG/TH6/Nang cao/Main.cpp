#include<iostream>
#include "QLHD.h"

int main()
{
	int n;
	cout<<"Nhap so nha: ";
	cin>>n;
	QLHD ql(n);
	ql.Nhap();
	ql.Xuat();
}
