#include<stdio.h>
void NhapMang(int a[],int n)
 {
	int i;
	for(i=0; i<n; i++)
	 {
		printf("Nhapp a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void NT(int n) {
	int i;
	int ngt=1;
	if(n==1)
		ngt=0;
	else
		for(i=2; i<n ; i++) {
			if(n%i==0) 
				ngt=0;
		}
	if(ngt==1) 
		printf("%d\n",n);
}
void XuatMang(int a[],int n) {
	printf("Cac phan tu la so nguyen to co trong mang la:\n");
	int i;
	for(i=0; i<n ; i++ ) 
	{
		NT(a[i]);
	}
}
int main() {
	int n;
	int a[n];
	printf("nhap n:");
	scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
}

