//Built by Nguyen Vu Hai - CNTTK18CLC

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void In(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",p+i);
	}
}

void Out(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,*(p+i));
	}
}

int CheckPrime(int n)
{
	if(n<2)
		return 	0;
	for(int i=2;i<=(float)sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
		return 1;	
	}
}

void OutPrime(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		if(CheckPrime(*(p+i))==0)
			printf("\na[%d]=%d",i,*(p+i));
	}
}

int MaxAm(int *p,int n)
{
	int max=0,i;
	for(i=0;i<n;i++)
	{
		if(*(p+i)<0)
		{
			max=*(p+i);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)<0 && *(p+i)>max)
			max=*(p+i);
	}
	printf("\n\n Gia tri am lon nhat la: %d",max);
}

int main()
{
	int *p,n;
	p=(int*) malloc(n*sizeof(int));
	printf("Nhap n:");
	do
	{
		scanf("%d",&n);
		if(n<=0) printf("n ko hop le, nhap lai:");
	}while(n<=0);
	In(p,n);
	printf("----Cac phan tu co trong mang---");
	Out(p,n);
	
	printf("\n\n----Ham sau khi xoa so nguyen to la:----");
	OutPrime(p,n);
	
	MaxAm(p,n);
}
