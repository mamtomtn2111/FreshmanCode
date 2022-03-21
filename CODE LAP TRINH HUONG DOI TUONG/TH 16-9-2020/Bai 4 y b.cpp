#include<iostream>
#include<cmath>

using namespace std;


int ktNT(int n)
{
	int i = 2;
	if(n < 2)
		return 0;

	while(i <= sqrt(n))
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}
void inNT(int n)
{
	int i = 0;
	cout<<"\nCac so nguyen to nho hon N la: \n";
	while(i < n)
	{
		if(ktNT(i) == 1)
		{
			cout<<"\t"<<i;
		i++;
		}
	}
	
}

int main()
{
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	inNT(n);
	//InNgToDOWHILE(n);
}
