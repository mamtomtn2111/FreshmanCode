#include<iostream>

using namespace std;

void QuickSort(int a[], int l, int r){
	int  p = a[(l + r) / 2];
	int i = l; int j = r;
	while(i < j){
		while(a[i] < p){
			i++;
		}
		while(a[j] > p){
			j--;
		}
		if(i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if(i < r){
		QuickSort(a , i ,r);
	}
	if(l < j){
		QuickSort(a, l, j);
	}
}

int main(){
	int n;
	cout<<"Nhap vao so cay: ";
	cin>>n;
	int a[n];
	cout<<"Nhap vao so ngay truong thanh cua tung cay: \n";
	for(int i = 0;i < n;i++){
		cout<<"Cay "<<i+1<<": ";
		cin>>a[i];
	}
	QuickSort(a, 0, n-1);
	int k = 1;
	int max = 0;
	for(int i = n - 1; i >= 0; i--){
		if(a[i] + k > max){
			max = a[i] + k;
		}
		k += 1;
	}
	cout<<"Ngay ma cay truong thanh het: "<<max;
	cout<<"\nNgay ma nong dan john co the to chuc tiec: "<<max+1;
	return 0;
}
