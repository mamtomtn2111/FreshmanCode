#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Sach{
	private:
		string tensach, tacgia;
		int namxb;
	public: 
	void Nhap(){
		cout<<"---NHAP THONG TIN---"<<endl;
		fflush(stdin);
		cout<<"Nhap ten sach: "<<endl;
		getline(cin, tensach);
		
		cout<<"Nhap ten tac gia: "<<endl;
		getline(cin, tacgia);
		
		cout<<"Nhap nam xuat ban: ";
		cin>>namxb;
	
	}
	void Xuat(){
		cout<<"----------THONG TIN SACH---------"<<endl;
		cout<<"Ten sach: "<<tensach<<endl;
		cout<<"Ten tac gia: "<<tacgia<<endl;
		cout<<"Nam xuat ban: "<<namxb<<endl;
	
	}
	bool isOld(){
		if((2020-namxb)>=5)return true;
		else return false;
		}
	string getten(){
		return tensach;
		}
	int  getnxb(){
		return namxb;
		}
};
class dsSach{
	private:
		Sach ds[100];
		int n;
	public:
		void nhapsl(){
			cout<<"Nhap so luong sach: ";
			cin>>n;
		}
		void nhapds(){
			for(int i=0;i<n;i++)
	           ds[i].Nhap();
		}
		void xuatds(){
			for(int i=0;i<n;i++)
        	ds[i].Xuat();
		}
		void sapxep(){
			Sach tg;
			for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
			if(ds[i].getten()>ds[j].getten()){
				tg=ds[i];
				ds[i]=ds[j];
				ds[j]=tg;
			}
		}
		void dsnamxb(int nam){
			for(int i=0;i<n;i++)
        	if(ds[i].getnxb()==nam)
        	ds[i].Xuat();
		}
};
int main(){
	dsSach DS;
	DS.nhapsl();
	DS.nhapds();
	DS.xuatds();
	DS.sapxep();
	DS.xuatds();
//	cout<<"Nhap nam can hien thi: ";
//	int nam;
//	cin>>nam;
//	DS.dsnamxb(nam);
	DS.dsnamxb(2020);
		
}
