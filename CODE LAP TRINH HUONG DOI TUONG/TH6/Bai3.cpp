/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>

using namespace std;

class Khach{
	protected:
		string HoTen;
		string DiaChi;
		string DienThoai;
		string mail;
	public:
		void NhapTT(){
			fflush(stdin);
			cout<<"Nhap vao ho ten: ";
			getline(cin,HoTen);
			
			cout<<"Nhap vao dia chi: ";
			getline(cin,DiaChi);
			
			cout<<"Nhap vao dien thoai: ";
			getline(cin,DienThoai);
			
			cout<<"Nhap vao mail: ";
			getline(cin,mail);
		}
		
		void XuatTT(){
			cout<<"Ho ten: "<<HoTen;
			cout<<"\nDia chi: "<<DiaChi;
			cout<<"\nDien thoai: "<<DienThoai;
			cout<<"\nMail :"<<mail;
		}
		
		string getName(){
			return HoTen;
		}
		
		string getAdress(){
			return DiaChi;
		}
};

class QLKhach: protected Khach{
	private:
		int n;
		Khach *k;
	public:
		QLKhach(){};
		QLKhach(int _n,Khach *k1){
			n=_n;
			for(int i = 0; i < n; i++)
				k[i]=k1[i];
		}
		
		void NHAP(){
			cout<<"Nhap vao so khach hang: ";
			cin>>n;
			k = new Khach[n];
			cout<<"\t===NHAP THONG TIN KHACH HANG===";
			for(int i = 0; i < n; i++){
				cout<<"\nKhach "<<i+1<<endl;;
				k[i].NhapTT();
			}
		}
		
		void XUAT(){
			cout<<"\t===XUAT THONG TIN KHACH HANG===";
			for(int i = 0; i < n; i++){
				cout<<"\nKhach "<<i+1<<endl;
				k[i].XuatTT();
			}
		}
		
		void Finding(){
			int choice;
			do{
				cout<<"\n\n\t===TIM KHACH HANG===";
				cout<<"\nNhap 1 de tim theo ten !";
				cout<<"\nNhap 2 de tim theo dia chi !";
				cout<<"\nChon 3 de huy !";
				cout<<"\nBan chon :";
				cin>>choice;
				string ten;
				string DChi;
				switch(choice){
					case 1:
						fflush(stdin);
						cout<<"Nhap vao ten ban muon tim: ";
						getline(cin,ten);
						cout<<"\n\t===XUAT THONG TEN KHACH CO TEN "<<ten<<" ==="<<endl;
						for(int i = 0; i < n; i++)
							if(ten == k[i].getName()){
								cout<<"Nguoi "<<i+1<<endl;
								k[i].XuatTT();
							}
						break;
					case 2:
						fflush(stdin);
						cout<<"Nhap vao dia chi ban muon tim: ";
						getline(cin,DChi);
						cout<<"\n\t===XUAT THONG TEN KHACH CO DIA CHI "<<DChi<<" ==="<<endl;
						for(int i = 0; i < n; i++)
							if(DChi == k[i].getAdress()){
								cout<<"Nguoi "<<i+1<<endl;
								k[i].XuatTT();
							}
						break;
					case 3:
						return;
					default:
						cout<<"Ban chon sai yeu cau !!";
						break;
			}
		}while(choice != 3);
	}
};

int main(){
	QLKhach Ql;
	Ql.NHAP();
	Ql.XUAT();
	Ql.Finding();
	return 0;
}
