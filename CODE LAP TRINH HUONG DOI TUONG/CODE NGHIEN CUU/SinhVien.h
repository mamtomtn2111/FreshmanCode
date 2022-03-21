#include "Date.h"

class SinhVien
{
private:
    string maSinhVien;
    string hoTen;
public:
    SinhVien(string ma="", string ht =""){
        maSinhVien = ma;
        hoTen = ht;
    }
    void nhap()
    {
        cout<<"Ma: ";
        cin>>maSinhVien;
        
        cin.ignore();
        cout<<"Ho ten: ";
        getline(cin,hoTen);
    };
    void setSinhVien(SinhVien s)
    {
        maSinhVien = s.maSinhVien;
        hoTen = s.hoTen;
    }
    string toString(){
        return maSinhVien +"," + hoTen;
    }
};
