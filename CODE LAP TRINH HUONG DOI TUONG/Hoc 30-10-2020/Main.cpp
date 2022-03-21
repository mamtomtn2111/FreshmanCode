#include<iostream>
#include "SachRieng.h"
using namespace std;

int main()
{
	int SGK,TieuThuyet,TapChi;
	Sach s(SGK,TieuThuyet,TapChi);
	
	s.NhapSachSGK();
	s.NhapSachTieuThuyet();
	s.NhapSachTapChi();
	
	s.XuatSachSGK();
	s.XuatSachTieuThuyet();
	s.XuatSachTapChi();
}
