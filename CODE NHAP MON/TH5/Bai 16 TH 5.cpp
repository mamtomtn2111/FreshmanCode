#include <stdio.h>
int main() {
	int n, d=1;
	printf("Nhap so n = ");
	scanf("%d", &n);
	unsigned long f=1, f0=1, f1=1;
	while(d<n) {
		f=f1+f0;
		f0=f1;
		f1=f;
		d++;
	}
	printf("\nSo fibonaci (%d) = %d", n, f);
}
