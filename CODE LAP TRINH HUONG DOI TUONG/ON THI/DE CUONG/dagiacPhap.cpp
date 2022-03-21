#include <iostream>

using namespace std;

class dagiac {
	private:
		int n;
		int *k;
	public:
		dagiac(int _n = 1){
			n = _n;
			k = new int[n];
		}
		dagiac(int _n, int *_k){
			n = _n;
			k = new int[n];
			for(int i = 0; i < n; i++){
				k[i] = _k[i];
			}
		}
		void nhap(){
			for(int i = 0; i < n; i++){
				cin >> k[i];
			}
		}
		void xuat(){
			for(int i = 0; i < n; i++){
			
				cout << k[i];
			}
		}
};
class tamgiac {
	private:
		int d1, d2, d3;
		dagiac k[3];
	public:
		tamgiac(){
		}
		tamgiac(int _d1, int _d2, int _d3, dagiac *_k){
			d1 = _d1;
			d2 = _d2;
			d3 = _d3; 
			for(int i = 0; i < 3; i++){
				k[i] = _k[i];
			}
		}
		void nhap(){
			for(int i = 0; i < 3; i++){
				cout <<"Nhap do dai canh thu " << i+1 <<": ";
				k[i].nhap();
			}
			
		}
		void xuat(){
			for(int i = 0; i < 3; i++){
				cout <<"\nDo dai canh thu " << i+1 <<": ";
				k[i].xuat();
			}
			
		}
		int tong(){
			return d1+d2+d3;
		}
		
};

class qltg {
	private:
		int n;
		tamgiac *t;
	public:
		qltg(int _n = 1){
			n = _n;
			t = new tamgiac[n];
		}
		qltg(int _n, tamgiac *_t){
			n = _n;
			t = new tamgiac[n];
			for(int i = 0; i < n; i++){
				t[i] = _t[i];
			}
		}
		void nhap(){
			for(int i = 0; i < n; i++){
				cout <<"________Nhap tam giac thu "<< i+1 <<"_______\n";
				t[i].nhap();
			}
		}
		void xuat(){
			for(int i = 0; i < n; i++){
				cout <<"\n________Tam giac thu "<< i+1 <<"________";
				t[i].xuat();
			}
		}
		void sapxep(){
			tamgiac tg;
			for(int i = 0; i < n-1; i++)
			for(int j = i+1; j < n; j++){
				if(t[i].tong() > t[j].tong()){
					tg = t[i];
					t[i] = t[j];
					t[j] = tg;
				}
			}
		}
};
int main(){
	int n;
	cout << "Nhap so luong tam giac: ";
	cin >> n;
	qltg a(n);
	a.nhap();
	a.sapxep();
	a.xuat();
}


















