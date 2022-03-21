#include<iostream>
#include<cmath>

using namespace std;

class PhanSo{
    private:
        int ts;
        int ms;
    public:
        PhanSo(){
        	ts = 0;
        	ms = 1;
		};
        PhanSo(int ts1, int ms1){
            ts = ts1;
            ms = ms1;
        }

        int USLN(int a, int b){
            int r;
            while (a % b != 0){
                r = a%b;
                a = b;
                b = r;
            }
            return b;
        }
        PhanSo RutGon(){
            int z = USLN (ts , ms);
            return PhanSo(ts / z , ms / z);
        }

        void ChuanHoa(){
            if(ts < 0 && ms < 0){
                ts = abs(ts);
                ms = abs(ms);
            }
            else if(ms < 0){
                ts = -abs(ts);
                ms = abs(ms);
            }
        }

        void operator = (const PhanSo &ps){
            ts = ps.ts;
            ms = ps.ms;
        }

        bool operator == (PhanSo &ps){
            if(ts == ms)
                return 1;
            return 0;
        }
    friend istream &operator >> (istream &is, PhanSo &ps){
            do{
                cout<<"Nhap vao tu so: ";
                is>>ps.ts;
                cout<<"Nhap vao mau so: ";
                is>>ps.ms;
                if(ps.ms == 0) cout<<"Mau so != 0, nhap lai mau so !!!\nNhap lai tu so: ";
            }while(ps.ms == 0);
            return is;
        }

    friend ostream &operator << (ostream &os, PhanSo ps){
            ps.ChuanHoa();
            if(ps.ms == 1)
                os<< ps.ts <<endl;
            else if(ps.ts == ps.ms){
            	os<<"1";
			}
            else{
                os<< ps.ts <<"/"<<ps.ms<<endl;
			}
            return os;
        }

    friend PhanSo operator + (PhanSo a, PhanSo b){
            PhanSo c;
            c.ts = a.ts * b.ms + b.ts * a.ms;
            c.ms = a.ms * b.ms;
            c=c.RutGon();
            return c;
        }
    
    friend PhanSo operator - (PhanSo a, PhanSo b){
        PhanSo c;
        c.ts = a.ts * b.ms - b.ts * a.ms;
        c.ms = a.ms * b.ms;
        c=c.RutGon();
        return c;
    }

    friend PhanSo operator * (PhanSo a, PhanSo b){
        PhanSo c;
        c.ts = a.ts * b.ts;
        c.ms = a.ms * b.ms;
        c=c.RutGon();
        return c;
    }

    friend PhanSo operator/ (PhanSo a,PhanSo b){
        PhanSo c;
        c.ts = a.ts * b.ms;
        c.ms = a.ms * b.ts;
        c=c.RutGon();
        return c;
    }
};

int main(){
    PhanSo a,b;
    cin>>a;
    cin>>b;
    cout<<"\nA: ";
    a=a.RutGon();
    cout<<a;
    cout<<"B: ";
    b=b.RutGon();
    cout<<b;
    
    cout<<"A + B = "<<a+b;
    cout<<"A - B = "<<a-b;
    cout<<"A x B = "<<a*b;
    cout<<"A : B = "<<a/b;
}
