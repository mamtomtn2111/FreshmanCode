#include<stdio.h>

void In(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap so a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void Out(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d] = %d", i, a[i]);
	}
}
float Average(int a[],int n)
{
	float tb,s=0,dem=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0 && a[i]%2==0)
			{
				s+=a[i];
				dem++;
			}
	}
	tb=s/dem;
	if(dem==0)
		return 0;
	return tb;
}
int Max(int a[],int n)
{
	int Max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>Max)
			Max=a[i];
	}
	return Max;
}
int Increase(int a[],int n)
{
	int i,j,tg;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
}
int main()
{
	int n;
	int a[100];
	int i;
	printf("Nhap so n:");
	scanf("%d",&n);
	In(a,n);
	Out(a,n);
	printf("\nTB cac so chan chia het cho 3 la %10.2f",Average(a,n));
	printf("\n phan tu lon nhat trong mang la %d",Max(a,n));
	printf("\n sap xep tang la:");
	Increase(a,n);
	Out(a,n);
	if(a[i]<0)
		printf("\nso am lon nhat trong mang la %d",Max(a,n));
}
