#include<iostream>
using namespace std;

class KhachHang
{
	private:
	char tenchu[30];
	int sonha, msct;
	
	public:
		void NhapTT()
		{
			fflush(stdin);
			cout<< "\nNhap ho ten chu ho: ";
			cin.getline(tenchu, 30);
			fflush(stdin);
			cout<< "\nNhap so nha: ";
			cin>> sonha;
			cout<< "\nNhap ma so cong to: ";
			cin>> msct;
		}
		void XuatTT()
		{
			
			fflush(stdin);
			cout<< "\nHo ten chu ho: " << tenchu;
			cout<< "\nSo nha: " << sonha;
			cout<< "\nMa so cong to: " << msct;
			cout<< "\n___________________()__________________";
		}

};

class BienLai
{
	private:
		char tenho[30];
		int socu, somoi, tien;
		KhachHang kh1;
		
	public:
		void NhapBL()
		{
			do{
			cout<< "\nNhap ten ho su dung: ";
			fflush(stdin);
			cin.getline(tenho, 30);
			fflush(stdin);
			cout<< "\nNhap chi so cu: ";
			cin>> socu;
			cout<< "\nNhap chi so moi: ";
			cin>> somoi; 
			}while(socu > somoi);
	    	tien=(somoi - socu)*85000;
	    	kh1.NhapTT();
		}
		
		void XuatBL()
		{
			cout<< "\t\tTT sau khi nhap la: ";
			fflush(stdin);
			cout<< "\nTen ho su dung: " << tenho;
			fflush(stdin);
			cout<< "\nChi so cu: " << socu;
			cout<< "\nChi so moi: " << somoi;
			cout<< "\nSo tien: " << tien;
			kh1.XuatTT();
	    
		} 
};

int main()
{
	int i, n;
	cout<< "\nTong so cac ho dung dien la: ";
	cin>> n;
	cin.get();
	BienLai in[15];
	for(int i=1; i<=n; i++)
	{
		cout<< "\nNhap TT khach hang thu: " << i << endl;
		in[i].NhapBL();
	}
	for(int i=1; i<=n; i++)
	{
		cout<< "\n\t\tTT bien lai khach hang vua nhap: " << i << endl;
		in[i].XuatBL();
	}
}
