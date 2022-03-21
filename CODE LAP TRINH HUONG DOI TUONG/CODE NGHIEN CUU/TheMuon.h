#include "SinhVien.h"

class TheMuon
{
private:
    string soPhieuMuon;
    Date ngayMuon;
    Date hanTra;
    SinhVien sv;
public:
    TheMuon(){};
    TheMuon(string so, Date nm, Date nt, SinhVien s)
    {
        soPhieuMuon = so;
        ngayMuon.setDate(nm);
        hanTra.setDate(nt);
        sv.setSinhVien(s);
    }
    void nhap()
    {
        cout<<"So the muon:";
        cin>>soPhieuMuon;
        
        cout<<"Ngay muon:";
        ngayMuon.nhap();
        
        cout<<"Ngay tra:";
        hanTra.nhap();
        
        sv.nhap();
    }
    void xuat()
    {
        cout<<"So phieu muon: "<<soPhieuMuon;
        cout<<", ";
        ngayMuon.xuat();
        
        cout<<", ";
        hanTra.xuat();
        cout<<sv.toString();
    }
};
