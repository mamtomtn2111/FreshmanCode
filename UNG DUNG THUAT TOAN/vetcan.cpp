#include<iostream>
using namespace std;

long algo1(int a[],int n){
	long max = a[0];
	long b[n];
	int start = 0,end = 0;
	int sum = 0;
	for(int i = 0;i<n;i++){
		for(int j = i; j < n; j++){
			int s = 0;
			for(int k = i;k<=j;k++)
				s = s + a[k];
				
				if(max<s){
					max = s;
					end = j;
					start = i;
				}
		}
	}
	cout<<"\nPhan tu day con lon nhat co: ";
	for(int i = start; i <=end;i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nTong day con lon nhat la: "<<max;
}

int main(){
	int n =6;
	int a[n] = {-2,11,-4,13,-5,2};
	cout<<"Cac phan tu trong day la: ";
	for(int i = 0;i < n;i++){
		cout<<a[i]<<"\t";
	}
	algo1(a,n);
}
