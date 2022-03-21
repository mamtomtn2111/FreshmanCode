#include<stdio.h>
int GiaiThua(int n) {
	int s=1;
	if(n==0) return 1;
	int i;
	for(i=1; i<=n; i++)
		s*=i;
	return s;
}
int main() {
	int x;
	do {
		printf("Nhap X=");
		scanf("%d",&x);
	} while(x<0);
	printf("N!=%d",GiaiThua(x));
}
