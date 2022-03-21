#include<stdio.h>

void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int max(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
		if(max<a[i])
			max=a[i];
		return max;
}
int min(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
		if(min>a[i])
			min=a[i];
		return min;
}
int main()
{
	int i;
	int n;
	int a[n];
	printf("nhap n:");
	scanf("%d",&n);
	NhapMang(a,n);
	max(a,n);
	min(a,n);
	printf("MAX=%d",max(a,n));
	printf("\nMIN=%d",min(a,n));
}
