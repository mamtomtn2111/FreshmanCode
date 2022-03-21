#include<stdio.h>
#include<math.h>

int CheckPrime(int n)
{
	if(n<2)
		return 0;
	else{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
		return 1;
	}
}
int PrimeCount(int a[],int n)
{
	int i;int count=0;
	for(i=0;i<=n;i++)
	{
		if(CheckPrime(i)==1)
			{
				count++;
			}
	}
	return count;
}
int main()
{
	int i;
	int n;
	int a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	CheckPrime(n);
	PrimeCount(a,n);
	printf("so luong cac so nguyen to co trong mang la: %d",PrimeCount(a,n));
}
