//Built by Nguyen Vu Hai - CNTTK18CLC

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int CheckPrime(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=(float)sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
		return 1;	
	}
}

void In(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",arr+i);
	}
}

void Out(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n %d",*(arr+i));
	}
}

void FindPrime(int *arr,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(CheckPrime(*(arr+i)))
		{
			dem++;
			printf("\n %d",*(arr+i));
		}
	}
	if(dem!=0)
		printf("\n So Nguyen to trong mang la:%d",dem);
	else printf("\n....Khong co so nguyen to nao trong mang...!");
}

void SapXepTang(int *arr,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				int temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
}

void SapXepGiam(int *arr,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(arr+i)<*(arr+j))
			{
				int temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
}

int main()
{
	int n,*arr;
	arr=(int *)malloc(n*sizeof(int));
	printf("Nhap n vao:");
	do
	{
		scanf("%d",&n);
		if(n<=0)
			printf("Nhap sai so luong n, nhap lai:");
	}while(n<=0);
	
	//Nhap Xuat's Working
	In(arr,n);
	printf("....Mang hien co....");
	Out(arr,n);
	
	//Sap Xep Tang's working
	printf("\n....Cac so duoc sap xep tang:....");
	SapXepTang(arr,n);
	Out(arr,n);
	
	//Sap Xep Giam's Working
	printf("\n....Cac so duoc sap xep giam....");
	SapXepGiam(arr,n);
	Out(arr,n);
	
	//Cac so nguyen to's Working
	printf("\n....So NT hien co trong mang.....");
	FindPrime(arr,n);
}
