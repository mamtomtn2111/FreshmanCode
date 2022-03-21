#include<iostream>

using namespace std;

class MaTran
{
	private:
		int n;
		int m;
		float **a;
	public:
		MaTran(int n1 = 1, int m1 = 1){
			n = n1;
			m = m1;
			a = new float*[n];
			for(int i =0 ; i < n; i++ )
				a[i] = new float[m];
		}
		
		
		void Nhap(){
			for(int i =0 ; i < n ; i++)
				for(int j = 0; j < m ; j++)
				{
					cout<< "a[" << i << "]["<<j<<"]=";
					cin>>a[i][j];
				}
		}
		
		
//		double Tong(int i){
//			double s = 0;
//			for(int j = 0;j < n; j++)
//				s += a[i][j];
//			return s;
//		}
//		
//		int tonglonnhat()
//		{
//			int i,d;
//			double max=Tong(i);
//			for( i=1;i<m;i++)
//			{
//				double t=Tong(i);
//				if(max<t)
//				{
//					max=t;
//					d=i;
//				}
//			}
//			return d;
//		}

		void ChuyenVi(){
			int temp;
			for(int j = 0; i < n; i++){
				for(int i = 0; j < i; j++){
					temp = a[i][j];
			        a[i][j] = a[j][i];
			        a[j][i] = temp;
				}
			}
		}
		
		void Xuat(){
			for(int i=0; i < n; i++)
			{
				for( int j=0 ; j < m; j++)
				{
					cout<<a[i][j]<<"\t";
				}
				cout<<"\n";
			}
//			cout<<"Dong lon nhat la: "<<tonglonnhat();
		}
};

int main()
{
	MaTran mt(4,2); //n la hang, m la cot 
	mt.Nhap();
	mt.Xuat();
	mt.ChuyenVi();
	mt.Xuat();
}
