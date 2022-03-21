#include<iostream>

using namespace std;

class MaTran
{
	private:
		int n;
		int m;
		float **a;
	public:
		MaTran(int n1 = 1, int m1 = 1)
		{
			n = n1;
			m = m1;
			a = new float*[n];
			for(int i =0 ; i < n; i++ )
				a[i] = new float[m];
		}
		void Nhap()
		{
			for(int i =0 ; i < n ; i++)
				for(int j = 0; j < m ; j++)
				{
					cout<< "a[" << i << "]["<<j<<"]=";
					cin>>a[i][j];
				}
		}
		void Xuat()
		{
			for(int i=0; i < n; i++)
			{
				for( int j=0 ; j < m; j++)
				{
					cout<<a[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
};

int main()
{
	MaTran mt(2,2);
	mt.Nhap();
	mt.Xuat();
}

