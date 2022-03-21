#include<stdio.h>
#include<math.h>
#define MAX_NUM 100

void in(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap so a[%d]:",i);
		do
		{
			scanf("%d",&a[i]);
			if(a[i]<=0) printf("Sai r, nhap lai a[%d]:",i);
		}while(a[i]<=0);
	}
}
int CheckPrime(int n)
{
	int i;
	if(n<2)
		return 0;
	else
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return 0;
			return 1;	
	}
}
float AveragePrime(int a[],int n)
{
	float tb,sum=0,plus=0;
	for(int i=0;i<n;i++)
	{
		if(CheckPrime(a[i])==1)
		{
			sum+=a[i];
			plus++;
		}
	}
	tb=sum/plus;
	if(plus==0)
		return 0;
	return tb;
}
int PrimeCount(int a[],int n)
{
	int count=0;
	for(int i=0;i<=n;i++)
	{
		if(CheckPrime(a[i])==1)
		{
			count++;
		}
	}
	return count;
}
void out(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void ConvertPrimeTo0(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(CheckPrime(a[i])==1)
			a[i]=0;
	}
}
int main()
{
	int i;
	int n;
	int a[MAX_NUM];
	printf("nhap n:");
	do
	{
		scanf("%d",&n);
		if(n<=0) printf("\nSAI ROI !, Nhap lai n:");
	}while(n<=0);
	
	//Nhap cac so nguyen to va xuat cac so nguyen to
	in(a,n);
	printf("\nAll number:");
	CheckPrime(n);
	out(a,n);
	
	//so luong cac so nguyen to
	printf("\n\nNumber of prime number:%d",PrimeCount(a,n));
	
	//Tb cac so nguyen to
	printf("\n\nAverage of prime number:%.2f",AveragePrime(a,n));
	
	//Chuyen tat ca cac so nguyen to sang 0
	ConvertPrimeTo0(a,n);
	printf("\n\nAfter convert to 0:");
	out(a,n);
}
