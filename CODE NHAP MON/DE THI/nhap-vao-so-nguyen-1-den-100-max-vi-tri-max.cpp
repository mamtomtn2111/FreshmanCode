#include<stdio.h>
#define MAXSIZE 100

void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap so a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
int Max(int a[],int n)
{
	int i,max;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int ViTriMax(int a[],int n)
{
	int i;
	int vt;
	int max;
	for(i=0;i<n;i++)
	{
		vt=i;
		max=a[i];
		break;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			vt=i;
			max=a[i];
		}
	}
	return vt;
}
int main()
{
	int a[MAXSIZE];
	int n;
	printf("Nhap vao so n:");
	do
	{
		scanf("%d",&n);
		if(n<1 || n>=99) printf("Nhap sai, nhap lai so n:");
	}while(n<1 || n>=99);
	NhapMang(a,n);
	printf("Cac phan tu da nhap:");
	XuatMang(a,n);
	printf("\nMAX: %d",Max(a,n));
	printf("\nVi tri cua Max la a[%d]",ViTriMax(a,n));
}
