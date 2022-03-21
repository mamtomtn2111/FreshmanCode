/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>
#include<cstring>
using namespace std;

int  arraysize(int array){
	return (sizeof(array)/sizeof(int));
}

int main(){
	int n,a[n],b[n],c[n],z=0;
	int length[n];
	int i;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>a[i];
		cin>>b[i];
	}
	for(i=0;i<n;i++){
		c[i]=a[i]+b[i];
		length[i]=arraysize(c[i]);
	}
	for(int i =0 ;i <n;i++){
		cout<<"\n"<<length[i];
	}
}
