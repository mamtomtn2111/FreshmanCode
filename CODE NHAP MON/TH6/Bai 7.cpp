#include<stdio.h>
void NhapMang(int a[],int n)
{
	int i;
	for(i=0; i < n; i++)
	{
		printf("NHap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[], int n)
{
	printf("Cac phan tu chan nho hon 20 co trong mang la: \n");
	int i;
	for(i=0; i < n; i++) printf("a[%d]=%d\n",i,a[i]);
}
int main()
{
	int n;
	int a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
}
