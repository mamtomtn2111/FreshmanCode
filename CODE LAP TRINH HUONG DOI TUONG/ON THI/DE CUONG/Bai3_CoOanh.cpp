#include <iostream>
#include<math.h>
using namespace std;

//Phanso operator -(Phanso &)
//Phanso operator*(Phanso &)
//Void operator=(const Phanso &ps)
//Void rutgon();
//Bool operator==(Phanso &);
//Bool operator!=(Phanso &);
//Bool operator>(Phanso &);
//Bool operator<(Phanso &);
//Bool operator>=(Phanso &);
//Bool operator<=(Phanso &);

class PhanSo{
	private:
		int Tu;
		int Mau;
	public:
		PhanSo(){
			Tu=0;
			Mau=1;
		}
		PhanSo(int a, int b){
			Tu=a;
			Mau=b;
		}
		friend istream &operator >> (istream &nhap, PhanSo &Ps){
			cout<<"Nhap tu: ";
			nhap>>Ps.Tu;
			cout<<"Nhap mau: ";
			nhap>>Ps.Mau;
		}		
		friend ostream &operator << (ostream &xuat, PhanSo &Ps){
			xuat<<Ps.Tu<<"/"<<Ps.Mau;
		}
		PhanSo Cong(PhanSo b){
			PhanSo c;
			c.Tu=this->Tu*b.Mau+b.Tu*this->Mau;
			c.Mau=this->Mau*b.Mau;
			return c;
		}
    	friend	PhanSo operator + (PhanSo a, PhanSo b){
		PhanSo c;
			c.Tu=a.Tu*b.Mau+b.Tu*a.Mau;
			c.Mau=a.Mau*b.Mau;
			return c;
		}
		
		friend PhanSo operator - (PhanSo a, PhanSo b){
			PhanSo c;
			c.Tu=a.Tu*b.Mau-b.Tu*a.Mau;
			c.Mau=a.Mau*b.Mau;
			return c;
		}
		friend PhanSo operator * (PhanSo a, PhanSo b){
			PhanSo c;
			c.Tu=a.Tu*b.Mau*b.Tu*a.Mau;
			c.Mau=a.Mau*b.Mau;
			return c;
		}
		void operator=(const PhanSo &ps){
			this->Tu=ps.Tu;
			this->Mau=ps.Mau;
		}
		bool operator==(PhanSo &ps){
			if(this->Tu*ps.Mau==this->Mau*ps.Tu) return 1;
			else return 0;
		}
//		int UCLN(int a,int b){
//			while(a!=b)
//			if(a>b) a=a-b;
//			else b=b-a;
//			return a;
//		}
	PhanSo rutgon(){
		PhanSo c;
		int a,b;
		c=*this;
		a=this->Tu;
		b=this->Mau;
		//int a=UCLN(c.Tu,c.Mau);
			while(a!=b)
			if(a>b) a=a-b;
			else b=b-a;
		c.Tu/=a;
		c.Mau/=a;
		return c;	
		
		}
};
int main(){
	PhanSo a,b;//(1,2), b(2,4);
//	b=a;
	cin>>a;
	cin>>b;
    b=b.rutgon();
    cout<<b;
	if(a==b)	
		cout<<"Bang nhau\n";
	else 	
		cout<<"Khac nhau\n";
	PhanSo c;
//	c=a.Cong(b);

	//cin >> c;
   c=a + b;
//	cout << c;
//	c = a - b;
//	c= a * b;
	c=c.rutgon();
	cout<<c;
}
