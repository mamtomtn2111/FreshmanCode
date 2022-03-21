//Nguyen Vu Hai - CNTT K18 CLC

#include<iostream>
#include<iomanip>

using namespace std;

class KhachHang{
    private:
        string HoTen;
        string SoNha;
        string MaSoCongTo;
    public:
        KhachHang(){};
        void NhapTT(){
            fflush(stdin);
            cout<<"Nhap vao ho ten: ";
            getline(cin,HoTen);

            cout<<"Nhap vao so nha :";
            getline(cin,SoNha);

            cout<<"Nhap vao ma cong to: ";
            getline(cin,MaSoCongTo);
        }

        void XuatTT(){
            cout<<"\n|"<<setw(20)<<HoTen<<"|"<<setw(20)<<SoNha<<"|"<<setw(20)<<MaSoCongTo;
        }
};

class BienLai: public KhachHang{
    private:
        double SoCu;
        double SoMoi;
        double Tien;
    public:
        BienLai(){};
        
        void NhapBL(){
            KhachHang::NhapTT();
            fflush(stdin);
            cout<<"Nhap vao so dien cu: ";
            cin>>SoCu;

            cout<<"Nhap vao so dien moi: ";
            cin>>SoMoi;
        }

        void XuatBL(){
            KhachHang::XuatTT();
            setw(20);
            cout<<"|"<<setw(20)<<SoCu<<"|"<<setw(20)<<SoMoi<<"|"<<setw(20)<<( SoMoi - SoCu )*8500<<"|";
        }
};

class QLBL{
    private:
        int n;
        BienLai *bl;
    public:
        QLBL(int _n){
            n=_n;
            bl = new BienLai[n];
        }

        void NHAP(){
            cout<<"\n\t===NHAP THONG TIN BIEN LAI KHACH HANG===";
            for(int i = 0; i < n; i++){
                cout<<"\nBIEN LAI "<<i+1<<endl;
                bl[i].NhapBL();
            }
        }

        void XUAT(){
            cout<<"\n\t===XUAT THONG TIN BIEN LAI KHACH HANG===";
            cout<<"\n|"<<setw(20)<<"Ho ten"<<"|"<<setw(20)<<"So nha"<<"|"<<setw(20)<<"Ma cong to"<<"|"<<setw(20)<<"So dien cu"<<"|"<<setw(20)<<"So dien moi"<<"|"<<setw(20)<<"Tien|";
            for(int i = 0; i < n; i++){
                bl[i].XuatBL();
            }
        }
};

int main(){
    int n;
    cout<<"Nhap vao n ho su dung dien: ";
    cin>>n;
    QLBL Ql(n);
    Ql.NHAP();
    Ql.XUAT();
    return 0;
}