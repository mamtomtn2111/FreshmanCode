#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void Nhap(int *a, int n){
	for(int i = 0; i < n; i++){
		printf("a[%d]",i);
		scanf("%d",a+i);
	}
}

void Xuat(int *a, int n){
	printf("\n===Xuat mang cac so la:");
	for(int i = 0; i < n; i++){
		if(*(a+i) % 2 ==0)
		printf("\na[%d] = %d",i,*(a+i));
	}
}

void Tang(int *a,int n){
	int temp = 0;
	for(int i = 0; i < n -1;i++)
		for(int j = i + 1; j < n;j++){
			if(*(a+i) > *(a+j)){
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
}


int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int *a = (int*) malloc(sizeof(int)*n);
	Nhap(a,n);
	Tang(a,n);
	Xuat(a,n);
}
