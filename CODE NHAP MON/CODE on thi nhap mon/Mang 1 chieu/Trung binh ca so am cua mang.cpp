#include<stdio.h>

void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap so a[%d]:",i);
		do
		{
			scanf("%d",&a[i]);
			if(a[i]>=0) printf("DAY LA SO NGUYEN AM,Nhap lai a[%d]:",i);
		}while(a[i]>=0);
	}
}
float TB(int a[],int n)
{
	int i;
	float s=0,dem=0,tb;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			s+=a[i];
			dem++;
		}
	}
	tb=s/dem;
		if(dem ==0)
			return 0;
		return tb;
}
int main()
{
	int i;
	int n;
	int a[n];
	printf("Nhap n:");
	do
	{
		scanf("%d",&n);
		if(n<=0) printf("SAI ROI,nhap lai n:");
	}while(n<=0);
	NhapMang(a,n);
	TB(a,n);
	printf("Gia tri trung binh cua day so la %10.2f",TB(a,n));
}	
