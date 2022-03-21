#include<iostream>
using namespace std;

class Nguoi
{
private:
    string hoTen; // H? và tên
    string diaChi; // Ð?a chi nhà riêng
    int namSinh;
public:
    Nguoi(){
    }
    Nguoi(string ht, string dc, int nam)
    {
        hoTen = ht; diaChi = dc; namSinh = nam;
    }
//    Nguoi operator=(const Nguoi &n)
//    {
//        hoTen = n.hoTen;
//        diaChi = n.diaChi;
//        namSinh = n.namSinh;
//        return *this;
//    }
    void nhap()
    {
        cout<<"Ho va ten:";
        getline(cin,hoTen);
        
        cout<<"Dia chi:";
        getline(cin,diaChi);
        
        cout<<"Nam sinh:";
        cin>>namSinh;
    }
    void xuat()
    {
        cout<<"\n"<<hoTen<<", "<< diaChi<<", "<< namSinh;
    }
};
//class NhanSu: public Nguoi
//{
//private:
//    int maNhanSu ;
//    float heSochucVu, heSoLuong;
//public:
//    NhanSu(string ht, string dc, int nam, int ma, float hscv, float hsl): Nguoi(ht, dc, nam)
//    {
//        maNhanSu = ma;
//        heSochucVu = hscv;
//        heSoLuong = hsl;
//    }
//}


