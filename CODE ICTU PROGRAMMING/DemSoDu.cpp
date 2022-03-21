/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/
#include<iostream>
using namespace std;

int main(){
	int n,x,a[100];
	int SoDu[100];
	int dem = 0;
	cin>>n>>x;
	int i,j,k;
	for(i = 0; i < n; i ++){
		cin>>a[i];

	}
	for(i = 0;i < n;i ++){
		SoDu[i] = a[i] % x ;
	}
	
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (SoDu[i] == SoDu[j])
			{
				for (k = i; k < n; k++) 
				{
					SoDu[k] = SoDu[k + 1];
					n--;
					i--;
				}
			}
		}
	}
	for(int i = 0; i < n;i++){
		if(SoDu[i])
			dem++;
	}
	cout<<dem;
}
