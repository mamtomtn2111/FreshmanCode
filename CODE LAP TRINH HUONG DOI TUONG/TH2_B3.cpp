#include<iostream>
using namespace std;
class Khachhang{
	private:
		char ht[30];
		int sonha;
		char mact[10];
	public:
		void nhapkh();
		void xuatkh();
};
void Khachhang::nhapkh(){
	fflush(stdin);
	cout<<"Ho ten: ";
	cin.getline(ht,30);
	cout<<"So nha: ";
	cin>>sonha;
	fflush(stdin);
	cout<<"Ma cong to: ";
	cin.getline(mact,10);
}
void Khachhang::xuatkh(){
cout<<"\nHo ten: "<<ht<<"\nSo nha "<<sonha<<"\nMa cong to: "<<mact;
	}
class Bienlai{
	private:
		int socu,somoi;
		Khachhang kh;
		long tien;
	public:
		void nhap();
		void xuat();
};
void Bienlai::nhap(){
	kh.nhapkh();
	cout<<"Chi so cu: ";cin>>socu;
	cout<<"Chi so moi ";cin>>somoi;
}
void Bienlai::xuat(){
	kh.xuatkh();
	cout<<"\nChi so cu: "<<socu;
	cout<<"\nChi so moi "<<somoi;
	cout<<"\nSo tien phai tra: "<<(somoi-socu)*850000;
}
int main(){
	Bienlai ds[100];
	int n;
	cout<<"Nhap so ho: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		ds[i].nhap();
	for(int i=1;i<=n;i++)
		ds[i].xuat();
}
