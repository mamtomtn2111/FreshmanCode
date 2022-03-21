#include<stdio.h>

void ChinhPhuong(int n);

int main() {
	int n;
	do {
		printf("Nhap n: ");
		scanf("%d",&n);
	} while(n<=0);
	printf("Cac so chinh phuong la: ");
	ChinhPhuong(n);
}

void ChinhPhuong(int n) {
	int i = 1, j, dem = 0;
	int chinhphuong=0;
	while(dem<n) {
		chinhphuong=0;
		for(j=1; j<=i; j++) {
			if(j*j==i) {
				chinhphuong = 1;
			}
		}
		if(chinhphuong==1) {
			printf("\t %d",i);
			dem++;
		}
		i++;
	}
}
