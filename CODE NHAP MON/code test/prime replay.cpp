#include<stdio.h>
#include<math.h>

void In(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap so a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int CheckPrime(int n)
{
	if(n<2)
		return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0)
				return 0;
			return 1;
	}
}
float AveragePrime(int a[],int n)
{
	float tb,s=0,plus=0;
		for(int i=0;i<n;i++)
			{
				if(CheckPrime(a[i])==1)
				{
					s+=a[i];
					plus++;
				}
			}
	tb=s/plus;
	if(plus==0)
		return 0;
	return tb;		
}
int CountPrime(int a[],int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(CheckPrime(a[i])==1)
		{
			count++;
		}
	}
	return count;
}
void Out(int a[],int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(CheckPrime(a[i])==1)
		{
			printf("%d ",a[i]);
		}
	}
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
		if(n<=0)
			printf("NHAP SAI !!!!\n Nhap lai n:");
	}while(n<=0);
	
	In(a,n);
	printf("Cac so nguyen to co trong mang la:");
	Out(a,n);
	
	printf("\nSo luong so nguyen to co trong mang la: %d",CountPrime(a,n));
	printf("\nAverage of prime number : %10.2f",AveragePrime(a,n));
}
