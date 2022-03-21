#include<iostream>

using namespace std;
class Nguoi
{
	private:
		char HoTen[50];
		char DiaChi[50];
		int NamSinh;
	public:
		Nguoi(char ht[50],char dc[50],int ns)
		{
			HoTen[50]=ht[50];
			DiaChi[50]=dc[50];
			NamSinh=ns;
		}
		void Nhap()
		{
			cout<<"Nhap vao ho ten :";
			cin>>HoTen;
			cin.ignore();
			cout<<"Nhap vao dia chi :";
			cin.getline(DiaChi,50);
			cout<<"Nhap vao nam sinh: ";
			cin>>NamSinh;
		}
		
		void Xuat()
		{
			cout<<"\n\t\t====Thong tin la:";
			cout<<"Ho ten:"<<HoTen;
			cout<<"Dia chi: "<<DiaChi;
			cout<<"Nam sinh: "<<NamSinh;
		}
};
