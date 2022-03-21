#include<iostream>

using namespace std;


int a[100];
int n = 1;
void TRY(int i){
	for(int v = 0; v <=1; v++){
		a[i] = v;
		if(i == n - 1){
			for(int j = 0; j < n;j++)
				cout<<a[j];
			cout<<endl;
		}else{
			TRY(i+1);
		}
	}
}

int main(){
	do{
		cout<<"Nhap vao do dai bit ma ban muon in (2 -> 1024)";
		cin>>n;
		if(n < 2 || n > 1024)
			cout<<"Ban nhap sai moi nhap lai !\n ";
	}while(n < 2 || n > 1024);
		
	TRY(0);
}
