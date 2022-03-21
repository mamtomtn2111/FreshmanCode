/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>

using namespace std;

class DaGiac{
	protected:
		int n;
		float *d;
	public:
		DaGiac(int n1 = 1){
			n = n1;
			d = new float[n];
		};
		DaGiac(float *d1,int n1){
			n = n1;
			for(int i = 0; i < n;i++)
				d[i] = d1[i];
		};
		void Nhap(){
			for(int i = 0; i < n; i++)
			cin>>d[i];
		}
		void Xuat(){
			for(int i = 0; i < n;i++)
			cout<<d[i];
		}
};

class TamGiac: public DaGiac{
	private:
		int d1,d2,d3;
		DaGiac *dg;
	public:
		TamGiac(){};
		TamGiac(int _d1, int _d2, int _d3,DaGiac *dg1){
			d1 = _d1;
			d2 = _d2;
			d3 = _d3;
			for(int i = 0; i < n;i++){
				dg[i]=dg1[i];
			}
		}
		
		void NhapTg(){
			dg = new DaGiac[3];
			for(int i = 0; i < 3;i++){
				cout<<"Nhap vao canh thu "<<i+1<<" :";
				dg[i].Nhap();
			}
		}
		
		void XuatTg(){
			for(int i = 0; i < 3; i++){
				cout<<"\nCanh thu "<<i+1<<": ";
				dg[i].Xuat();
			}
		}
		
		float ChuVi(){
			d[1] = d1;
			d[2] = d2;
			d[3] = d3;
			return d1 + d2 +d3;
		}
};

class QuanLyTamGiac{
	private:
		int n;
		TamGiac *tg;
	public:
		DanhSachTamGiac(int n1){
			n = n1;
			tg = new TamGiac[n];
		}
		DanhSachTamGiac(TamGiac *tg1, int n1){
			n =n1;
			for(int i = 0; i < n;i++){
				tg[i] = tg1[i];
			}
		}
		
		void Nhap(){
			for(int i = 0; i < n; i ++){
				cout<<"Nhap vao tam giac thu "<<i+1<<endl;
				tg[i].NhapTg();
			}
		}
		
		void Xuat(){
			for(int i = 0; i < n;i++){
				cout<<"\nTam giac thu "<<i +1;
				tg[i].XuatTg();
			}
		}
		
		void SapXepChuViGiam(){
			TamGiac temp;
			for(int i = 0 ; i < n - 1; i++){
				for(int j = i+1; j < n; j++){
					if(tg[i].ChuVi() < tg[j].ChuVi())
						temp = tg[i];
						tg[i] = tg[j];
						tg[j] = temp;
				}
			}
		}
};

int main(){
	int n;
	cout<<"Nhap vao so tam giac: ";
	cin>>n;
	QuanLyTamGiac a;
	a.DanhSachTamGiac(n);
	a.Nhap();
	cout<<"\n===XUAT DANH SACH TAM GIAC===";
	a.Xuat();
	cout<<"\n===SAP XEP THEO CHU VI GIAM CAC TAM GIAC===";
	a.SapXepChuViGiam();
	a.Xuat();
}
