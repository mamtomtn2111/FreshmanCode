#include<iostream>

using namespace std;

void heapify(int arr[],int i, int n){
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;
	
	if(l < n && arr[l] > arr[largest])
		largest = l;
	
	if(r < n && arr[r] > arr[largest])
		largest = r;
	
	if( largest != i){
		swap(arr[i], arr[largest]);
		
		heapify(arr, n, largest);
	}
}

void buildHeap(int arr[],int n){
	for(int i = n / 2 - 1; i >= 0;i--){
		heapify(arr,i,n);
	}
}

void heapSort(int arr[], int n){
	buildHeap(arr,n);
	for(int i = n -1; i > 0; i--){
		swap(arr[0],arr[i]);
		heapify(arr,0,i);
	}
}

void Output(int arr[], int n){
	for(int i = 0;i < n;i++)
		cout<< arr[i] << "\t";
}

int main(){
	int n = 7;
	int arr[n] = {3,1,7,10,2,3,-4};
	printf("Initial array:\t\t");
	Output(arr,n);
	buildHeap(arr,n);
	heapSort(arr,n);
	printf("\nAfter using heap sort:\t");
	Output(arr,n);
}

