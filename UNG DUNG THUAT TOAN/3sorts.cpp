//Nguyen Vu Hai - CNTT K18 CLC
#include<iostream>

using namespace std;

void bubbleSort(int a[],int n){
	for(int i = 0;i < n - 1;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
	cout<<"\nBubble sort(a): \t";
	for(int i = 0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}

void selectionSort(int a[],int n){
	for(int k = 0;k < n;k++){
		int min = k;
		for(int i = k; i < n;i++)
			if(a[min] > a[i])
				min = i;
			swap(a[k],a[min]);
	}
	cout<<"\nSelection sort(b): \t";
	for(int i = 0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}

void insertSort(int a[],int n){
	int k;
	for(k = 0; k <n; k++){
		int last = a[k];
		int j = k;
		while(j > 0 && a[j-1] > last){
			a[j] = a[j-1];
			j--;
		}
		a[j] = last;
	}
	cout<<"\nInsert sort(c): \t";
	for(int i = 0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}

int main(){
	int n =6;
	int a[n] = {-2,11,-4,13,-5,2};
	int b[n] = {-1,-10,-99,6,0,5};
	int c[n] = {10,9,2,0,-23,-13};
	cout<<"Array a: \t";
	for(int i = 0; i < n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nArray b: \t";
	for(int i = 0; i < n;i++){
		cout<<b[i]<<"\t";
	}
	cout<<"\nArray c: \t";
	for(int i = 0; i < n;i++){
		cout<<c[i]<<"\t";
	}
	bubbleSort(a,n);
	selectionSort(b,n);
	insertSort(c,n);
}
