#include<iostream>

using namespace std;

class ThongTin
{
	private:
		string Ten;
		string NXB;
		int Nam;
		int SoTrang;
		int GiaBan;
	public:
		ThongTin(){
		}
		ThongTin(string t,string Nhaxb,int Namxb,int tr,int gb){
			Ten=t;
			NXB=Nhaxb;
			Nam=Namxb;
			SoTrang=tr;
			GiaBan=gb;
		}
		void Nhap(){
			cout<<"Nhap vao Ten: ";
			getline(cin,Ten);
			
			cout<<"\nNhap vao NXB: ";
			getline(cin,NXB);
			
			cout<<"\nNhap vao nam xuat ban: ";
			cin>>Nam;
			
			cout<<"\nNhap vao so trang cua sach: ";
			cin>>SoTrang;
			
			cout<<"\nNhap vao gia ban cua sach: ";
			cin>>GiaBan;
		}
		void Xuat(){
			cout<<"\nTen sach la: "<<Ten;
			cout<<"\nNha xuat ban la: "<<NXB;
			cout<<"\nNam xuat ban la: "<<Nam;
			cout<<"\nSo trang cua sach la: "<<SoTrang;
			cout<<"\nGia ban cua sach la: "<<GiaBan;
		}
};
