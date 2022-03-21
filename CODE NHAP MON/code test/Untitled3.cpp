#include<stdio.h>
#include<math.h>

int nT(int n)
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
void NhapMang(int a[],int n)
{
	int *arr;
	arr=&a[0];
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",arr+i);
	}
}
void XuatMang(int a[],int n)
{
	int *arr;
	arr=&a[0];
	for(int i=0;i<n;i++)
	{
		printf("\n %d",*arr+i);
	}
}
void FindNT(int a[1000],int n)
{
	int *arr,dem=0;
	arr=&a[0];
	for(int i=0;i<n;i++)
	{
		if(nT(*(arr+i)))
		{
			dem++;
			printf("\n %d",*(arr+i));
		}
	}
	printf("\n So Nguyen to trong mang:%d",dem);
}
void SapXepTang(int a[],int n)
{
	int *arr,*pj;
	arr=&a[0];
	pj=&a[0];
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;i++)
	{
		if(*(arr+i)<*(pj+j))
		{
			int temp=*(arr+i);
			*(arr+i)=*(pj+j);
			*(pj+j)=temp;
		}
	}
	printf("\n\n Mang sap xep giam:");
	for(int i=0;i<n;i++)
	{
		printf("\n %d",*(arr+i));
	}
}
int main()
{
	int a[1000],n;
	printf("Nhap n vao:");
	scanf("%d",&n);
	NhapMang(a,n);
	printf("....Mang a[i]....");
	XuatMang(a,n);
	printf("\n...so NT trong a[i]....");
	FindNT(a,n);
	SapXepTang(a,n);
}
