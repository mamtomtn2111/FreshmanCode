#include<stdio.h>
#include<stdlib.h>

void Nhap(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao phan tu a[%d]:",i);
		scanf("%d",a+i);
	}
}

void Xuat(int *a,int n)
{
	FILE *p=fopen("Mang.txt","w");
	printf("\nMang vua nhap la: ");
	fputs("Mang vua nhap la: ",p);
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]:%d",i,*(a+i));
		fprintf(p,"\na[%d]:%d",i,*(a+i));
	}
}

void TimGhi(int *a,int n)
{
	FILE *p=fopen("Mang.txt","a");
	int Tim;
	printf("\nNhap vao phan tu ban can tim: ");
	scanf("%d",&Tim);
	printf("\nPhan tu %d nam o cac vi tri sau: ",Tim);
	fprintf(p,"\nPhan tu %d nam o cac vi tri sau: ",Tim);
	for(int i=0;i<n;i++)
	{
		if(Tim==*(a+i))
		{
			printf("\na[%d]",i);
			fprintf(p,"\na[%d]",i);
		}
	}
}

int main()
{
	int n;
	int *a=(int*) malloc (sizeof(int)*1000);
	printf("Nhap vao n phan tu: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	TimGhi(a,n);
}
