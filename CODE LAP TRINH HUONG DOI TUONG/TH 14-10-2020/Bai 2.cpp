#include<iostream>
#include<cmath>
using namespace std;

class Diem
{
	private:
		double x;
		double y;
	public:
		Diem();
		Diem(double xl, double yl);
		void InTTDiem();
		double TinhKhoangCach(Diem d);
};

Diem::Diem(){
	x = 0;
	y = 0;
}

Diem::Diem(double xl,double yl)
{
	x = xl;
	y = yl;
}

void Diem::InTTDiem()
{
	cout << "\nDiem x la:" << x;
	cout << "\nDiem y la:" << y<< endl;
}

double Diem::TinhKhoangCach(Diem d)
{
	double kc;
	kc = sqrt (pow(x-d.x,2) + pow(y-d.y,2));
	return kc;
}

int main()
{
	Diem D1(3,7) , D2(9,3)                                                      ;
	cout<<"Diem D1 co toa do la:";
	D1.InTTDiem();
	cout<<"Diem D2 co toa do la:";
	D2.InTTDiem();
	cout<<"==Khoang cach giua diem D1 va D2 la:"<<D1.TinhKhoangCach(D2);
}
