#include<iostream>
using namespace std;

class SoPhuc
{
	private:
		double PhanThuc;
		double PhanAo;
	public:
		SoPhuc();
		SoPhuc(float pt,float pa);
		void NhapSoPhuc();
		void InSoPhuc();
		float CongSoPhuc(SoPhuc sp);
		float NhanSoPhuc(SoPhuc sp);
};

SoPhuc::SoPhuc(){
}

SoPhuc::SoPhuc(float pt,float pa)
{
	PhanThuc = pt;
	PhanAo = pa;
}

void SoPhuc::NhapSoPhuc()
{
	cout<<"Nhap vao phan thuc: ";
	cin>>PhanThuc;
	cout<<"Nhap vao phan ao: ";
	cin>>PhanAo; 
}

void SoPhuc::InSoPhuc()
{
	cout<<"\nPhan thuc la: "<<PhanThuc;
	cout<<"\nPhan ao la: "<<PhanAo<<endl;
	if(PhanAo == 0)
		cout<< "Ket qua: " << PhanThuc;
	else if(PhanAo > 0)
		cout<< "Ket qua: " << PhanThuc << "+" << PhanAo << "i";
	else if(PhanAo < 0) 
		cout<< "ket qua: " << PhanThuc << PhanAo << "i" ;
	
}

float SoPhuc::CongSoPhuc(SoPhuc sp)
{
	PhanThuc += sp.PhanThuc;
	PhanAo += sp.PhanAo;
}

float SoPhuc::NhanSoPhuc(SoPhuc sp)
{
	SoPhuc p;
	p.PhanThuc = PhanThuc*sp.PhanThuc - PhanAo*sp.PhanAo;
	p.PhanAo = PhanThuc*sp.PhanAo + PhanAo*sp.PhanThuc;
	*this = p;
}

int main()
{
	SoPhuc a1,a2,p;
	cout<<"Nhap vao so phuc thu 1: "<<endl;
	a1.NhapSoPhuc();
	cout<<endl;
	cout<<"Nhap vao so phuc thu 2: "<<endl;
	a2.NhapSoPhuc();
	//Cong so phuc
	cout<<"\nPhep cong so phuc: ";
	p = a1;
	p.CongSoPhuc(a2);
	p.InSoPhuc();
	//Nhan so phuc
	cout<<"\n\nPhep nhan so phuc: ";
	p = a1;
	p.NhanSoPhuc(a2);
	p.InSoPhuc();
}
