#include<iostream>

using namespace std;

class Nguoi{
    private:
        string HoTen;
        string NamSinh;
        string NgheNghiep;
    public:
        Nguoi(){};

        void NhapN(){
            fflush(stdin);
            cout<<"\nNhap ho ten: ";
            getline(cin,HoTen);

            cout<<"Nhap vao nam sinh: ";
            getline(cin,NamSinh);

            cout<<"Nhap vao nghe nghiep: ";
            getline(cin,NgheNghiep);
        }

        void XuatN(){
            cout<<"\n\tHo ten: "<<HoTen;
            cout<<"\n\tNam Sinh: "<<NamSinh;
            cout<<"\n\tNghe nghiep"<<NgheNghiep;
        }
};

class HoDan{
    private:
        int SoTV;
        string SoNha;
        Nguoi *ng;
    public:
        HoDan(){};

        HoDan(int _SoTV){
            SoTV = _SoTV;
            ng = new Nguoi[SoTV];
        }

        void StorageNguoi(int _SoTV){
            SoTV = _SoTV;
            ng = new Nguoi[SoTV];
        }
        int GetSoTV(){
            return SoTV;
        }

        void NhapHD(){
        	fflush(stdin);
            cout<<"\n==Nhap vao so nha: ";
            getline(cin,SoNha);
            fflush(stdin);
            cout<<"Nhap vao so thanh vien: ";
            cin>>SoTV;
            fflush(stdin);
            StorageNguoi(SoTV);
            for(int i = 0; i < GetSoTV(); i++){
                cout<<"\n\tNguoi "<<i+1;
                ng[i].NhapN();
            }
        }

        void XuatHD(){
            cout<<"\n\n==So nha: "<<SoNha;
            cout<<"\nSo thanh vien: "<<SoTV;
            for(int i = 0; i < SoTV; i++){
                cout<<"\nNguoi "<<i+1;
                ng[i].XuatN();
            }
        }
};

class QuanLy{
    private:
        int n;
        HoDan *hd;
    public:
        QuanLy(){};
        void Setup(int _n){
            n=_n;
            hd = new HoDan[n];
        }
        void Nhap(){
        	cout<<"Nhap vao n ho dan: ";
		    cin>>n;
			Setup(n);
                for(int i = 0; i < n; i++){
                    hd[i].NhapHD();
                }
        }
        
        void Xuat(){
            cout<<"\n\t===XUAT HO DAN===";

              for(int i = 0; i < n;i++){
                  hd[i].XuatHD();
            }
        }
};

int main(){
	QuanLy ql;
	ql.Nhap();
	ql.Xuat();
}