#include<iostream>
#include<cmath>

using namespace std;

int KT(int n)
{
	int i;
	if(n<2)
		return 0;
	else
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return 0;
			return 1;
	}
}

void InNgToFOR(int n)
{
	int i;
	cout<<"Cac so nguyen to bang for < n: "<<endl;
	for(i=2;i<n;i++)
	{
		if(KT(i)==1)
		{
			cout<<i ;
		}
	}
}


int main()
{
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	InNgToFOR(n);
}
