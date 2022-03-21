#Nguyen Vu Hai CNTT K18 CLC

#include<iostream>

using namespace std;

int getNextGap(int gap) 
{ 
    // Shrink gap by Shrink factor 
    gap = (gap*10)/13; 
  
    if (gap < 1) 
        return 1; 
    return gap; 
} 

void combSort(int a[], int n) 
{ 
    int gap = n; 
  
    bool swapped = true; 

    while (gap != 1 || swapped == true) 
    { 
        gap = getNextGap(gap); 
  
        swapped = false; 
  
        for (int i=0; i<n-gap; i++) 
        { 
            if (a[i] > a[i+gap]) 
            { 
                swap(a[i], a[i+gap]); 
                swapped = true; 
            }
        } 
    } 
}

void Output(int arr[], int n){
	for(int i = 0;i < n;i++)
		cout<< arr[i] << "\t";
}

int main(){
	int n = 7;
	int arr[n] = {4,1,7,10,2,3,-4};
	printf("Initial array:\t\t");
	Output(arr,n);
	combSort(arr,n);
	printf("\nAfter using comb sort:\t");
	Output(arr,n);
}
