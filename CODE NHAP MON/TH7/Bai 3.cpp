#include<stdio.h>
void  NhapMang(float a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]:",i);
		scanf("%f",&a[i]);
	}
}
void XuatMang(float a[],int n)
{
	printf("Cac phan tu da nhap vao la:\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%2.3f\n",i,a[i]);
	}
}
int main()
{
	int n;
	float a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
}
