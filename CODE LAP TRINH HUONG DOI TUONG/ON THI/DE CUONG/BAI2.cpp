#include<iostream>
#include<cmath>

using namespace std;

class DaGiac{
    protected:
        int SoCanh;
        float *a;
    public:
        DaGiac(){};
        
        DaGiac(int _SoCanh,float *a1){
            SoCanh=_SoCanh;
            for(int i = 0; i < SoCanh; i++){
                a[i]=a1[i];
            }
        }

        void Nhap(){
            for(int i = 0; i < SoCanh; i++){
                cout<<"CANH["<<i+1<<"]= ";
                cin>>a[i];
            }
        }

        float ChuVi(){
            float CV = 0;
               for(int i = 0; i < SoCanh; i++){
                CV += a[i];
            }
            return CV;
        }

        void Xuat(){
            cout<<"\t\n===XUAT THONG TIN CUA 1 DA GIAC====";
            for(int i = 0; i < SoCanh; i++){
                cout<<"\nCANH["<<i+1<<"]= "<<a[i];
            }
            cout<<"\nP = "<<ChuVi();
        }

        // int GetCanh(){
        //     return SoCanh;
        // }
};

class TamGiac: public DaGiac{
    public:
        TamGiac(int _SoCanh){
            SoCanh = _SoCanh;
            a = new float[SoCanh];
        };
        void NHAP(){
            DaGiac::Nhap();
        }
        void XUAT(){
            DaGiac::Xuat();
        }
        bool KT(){
                if(a[0] + a[1] > a[2] && a[0] + a[2] > a[1] && a[1] + a[2] > a[0])
                    return true;
                return false;
        }
        float TinhDienTich(){
            float s = 0;
            float const p = ChuVi()/2;
            float z = p;
            if(SoCanh > 3)
                cout<<"\nDay la da giac co so canh lon hon 3\nKhong the tinh duoc dien tich tam giac !!";
            else if(KT() == true){
                for(int i = 0; i <SoCanh; i++){
                    z *= (p-a[i]);                
                }
                s = sqrt(z);
                cout<<"\nDay la tam giac, co dien tich la: ";
                cout<<"\nS = "<<s;
            }
            else cout<<"\nTAM GIAC KHONG HOP LE !!!";
        }
};

int main(){
    int n;
    cout<<"Nhap vao so canh: ";
    cin>>n;
    TamGiac tg(n);
    tg.NHAP();
    tg.XUAT();
    tg.TinhDienTich();
    return 0;
}
