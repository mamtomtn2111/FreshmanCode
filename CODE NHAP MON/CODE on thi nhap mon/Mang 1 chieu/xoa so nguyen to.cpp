#include<stdio.h>
#include<math.h>
#define MAX_NUM 100

void In(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap vao so a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int CancelPrime(int n)
{
	int i;
	if(n<2)
		return 1;
	else
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return 1;
			return 0;
	}
}
void Out(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(CancelPrime(a[i])==1)
			printf("%d ",a[i]);
	}
}
int main()
{
	int n;
	int a[MAX_NUM];
	printf("Nhap vao so n:");
	scanf("%d",&n);
	In(a,n);
	printf("Sau khi loai bo cac so nguyen to:");
	Out(a,n);
}
