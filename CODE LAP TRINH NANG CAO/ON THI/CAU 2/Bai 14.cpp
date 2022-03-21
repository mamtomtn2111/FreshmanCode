#include<stdio.h>
#include<stdlib.h>

void Nhap(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao phan tu a[%d]:",i);
		scanf("%d",p+i);
	}
}

void Xuat(int *p;int n)
{
	FILE *p=fopen("Mang.txt",w);
	fputs("Mang vua nhap la: ",p);
	printf("Mang vua nhap la: ")
	for(int i=0;i<n;i++)
	{
		fprintf(p,"\na[%d]=%d",i,*(p+i));
		printf("\na[%d]=%d",i,*(p+i));
	}
}


