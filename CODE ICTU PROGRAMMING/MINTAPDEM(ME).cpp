/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n,a[n],b[n],c[n],z=0;
	char str[n];
	int i;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>a[i];
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}
	for(int i =0;i<n;i++){
		do{
			z++;
		}while(c[i] /10 == 0);
		c[i]=z+1;
		}
	for(int i =0 ;i <n;i++){
		cout<<"\n"<<c[i];
	}
}
