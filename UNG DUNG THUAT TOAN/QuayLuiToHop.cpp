#include<iostream>

using namespace std;

int a[100],n,k;

void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			for(int i = 1; i <= k;i++)
				cout<<a[i];
			cout<<endl;
		}else Try(i+1);
			
	}
}

int main(){
	while(true){
		cout<<"Nhap vao so n";
		cin>>n;
		if(n>1 && n <11)
			break;
	}
	cout<<"Nhap vao so k";
	cin>>k;
	cout<<"To hop chap k cua n: "<<endl;
	Try(1);
}
