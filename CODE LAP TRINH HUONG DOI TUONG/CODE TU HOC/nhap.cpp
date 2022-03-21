#include<iostream>
using namespace std;

int main()
{
	int dem=0;
	int x=100;
	for(x;x<1000;x++)
	{
		if(x%4==0 && x%3==0)
		dem++;
	}
	cout<<dem;
}
