#include<stdio.h>
#include<conio.h>
#define MAX 100

void NhapMang(int a[], int &n)
{
	printf("Nhap so phan tu:");
		scanf("%d",&n);
	int i;
	for(i=0;i<n;i++);
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n)
{
	printf("\n Noi dung mang:");
	int i;
	for(i=0;i<n;i++);
		printf("%d\t",a[i]);
}
int main()
{
	int a[MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
}
