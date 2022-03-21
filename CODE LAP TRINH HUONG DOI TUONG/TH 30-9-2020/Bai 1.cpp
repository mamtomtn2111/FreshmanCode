#include<iostream>

using namespace std;

class Nguoi
{
	private:
		string HoTen;
		string DiaChi;
		int NamSinh;
	public:
		void Nhap()
		{
			cout<<"Nhap vao ho ten: ";
			getline(cin,HoTen);
			fflush(stdin);
			cout<<"Nhap vao dia chi: ";
			getline(cin,DiaChi);
			fflush(stdin);
			cout<<"Nhap vao nam sinh: ";
			cin>>NamSinh;
		}
		void In()
		{
			cout<<"\t\tThong tin nguoi "<<endl;
			cout<<"Ho ten la: "<<HoTen<<endl;
			cout<<"Dia chi la: "<<DiaChi<<endl;
			cout<<"Nam sinh la "<<NamSinh<<endl;
		}
};

int main()
{
	Nguoi ng;
	ng.Nhap();
	ng.In();
}
