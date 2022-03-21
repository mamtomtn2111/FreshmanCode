#include "SinhVien.h"

class TheMuon
{
private:
	string SoPhieuMuon;
	CheckTime NgayMuon;
	CheckTime NgayTra;
	SinhVien sv;
public:
	TheMuon(){};
	TheMuon(string so,CheckTime nm,CheckTime nt,SinhVien s)
	{
		SoPhieuMuon=so;
		NgayMuon.xuat();
		NgayTra.xuat();
		sv.Xuat();
	}
	void Nhap()
	{
		cout<<"so the muon: ";
		cin>>SoPhieuMuon;
		
		cout<<"Ngay muon";
		NgayMuon.nhap();
		
		cout<<"Ngay Tra: ";
		NgayTra.nhap();
		
		sv.Nhap();
	}
	void Xuat()
	{
		cout<<"So phieu muon: "<<SoPhieuMuon;
		cout<<", ";
		NgayMuon.xuat();
		cout<<", ";
		NgayTra.xuat();
		sv.Xuat();
	}
};
