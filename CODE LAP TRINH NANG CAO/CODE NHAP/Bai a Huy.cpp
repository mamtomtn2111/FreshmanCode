#include <stdio.h>
#include <malloc.h>

void Nhap(int *p, int n){
	
	for(int i = 0; i < n; i++){
		printf("\nA[%d] = ", i);
		scanf("%d", p+i);
	}
}

void Xuat(int *p, int n){
	for(int i = 0; i < n; i++){
		printf("%d", *(p+i));
	}
}
int main(){
	int n;
	int *p = (int*)malloc(sizeof(int)*100);
	printf(" Nhap n vao: ");
	scanf("%d", &n);
	
	
	Nhap(p, n);
	Xuat(p, n);
	
}
