#include<iostream>
#include<cmath>

using namespace std;

class Diem{
    private:
        double x;
        double y;
    public:
        Diem(){};
        Diem(double x1,double y1){
                x = x1;
                y = y1;
        }

        void Nhap(){
            cout<<"Nhap vao hoanh do: ";
            cin>>x;
            cout<<"Nhap vao tung do: ";
            cin>>y;
        }

        void Xuat(){
            cout<<"Diem vua nhap co toa do "<<x<<" - "<<y<<endl;
        }
        double KhoangCach(Diem d){
        	double z;
        		z = sqrt( pow((x-d.x),2) + pow((y-d.y),2) );
        	return z;
		}
};

int main(){
    Diem a,b;
    a.Nhap();
    b.Nhap();

    a.Xuat();
    b.Xuat();
    cout<<"\nKhoang cach 2 diem la: "<<a.KhoangCach(b);
}
