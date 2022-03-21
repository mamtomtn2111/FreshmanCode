#include <stdio.h>
#include <stdlib.h>

void Nhap(int n, int *p){
	for(int i = 0; i < n; i ++){
		printf("A[%d] = ", i);
		scanf("%d", p+i);
	}
}

void Ghi(int n, int *p){
	FILE *f = fopen("Sochan1.txt", "w");
	if(f == NULL){
		printf("Error");
		return;
	}
	for(int i = 0; i < n; i++){
		if(*(p+i) % 2 == 0){
			fprintf(f, "\t%d", *(p+i));
			printf("\n%d", *(p+i));
		}		
	}
	fclose(f);
}

int SapXepTang(int *p,int n){	
	int temp;
	FILE *f=fopen("SoChan1.txt","rt");
    if(f!=NULL){
		for(int i=0;i<n-1;i++){
			
			for(int j=i+1;j<n;j++){
				
				if(*(p+i)<*(p+j)){
					
					temp=*(p+i);
					*(p+i)=*(p+j);
					*(p+j)=temp;
				}
			}
		}
    printf("\n\nSap xep giam cho mang tren la:");
	
	for(int i=0;i<n;i++){
		printf(" %d",*(p+i));
	}
	}
	fclose(f);
}

void Doc(int n, int *p){
	FILE *f = fopen("Sochan1.txt", "rt");
	if(f == NULL){
		printf("Error");
		return;
	}
	int i = 0;
	while(!feof(f)){
		fscanf(f, "%d\t", p + i);
		i++;
		n = i;
	}	
	SapXepTang(p, n);
	
}
int main(){
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int *p = (int*) malloc(1000 * sizeof(int));
	Nhap(n, p);
	printf("\n=====Cac so duoc ghi vao file txt la:=====\n ");
	Ghi(n, p);
	printf("\nSap xep tu file theo thu tu la: ");
	Doc(n, p);
}
