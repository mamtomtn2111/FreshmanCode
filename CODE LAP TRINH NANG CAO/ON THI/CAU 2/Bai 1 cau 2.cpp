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
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]:%d",i,*(a+i));
	}
}

bool KtTang(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		if(*(a+i)<*(a+i+1))
			return 1;
		return 0;
	}
}

void XuatGhi(int *a,int n)
{
	FILE *p=fopen("DayTang.txt","w+");
	fputs("Mang a hop le nen duoc ghi vao file:",p);
	for(int i=0;i<n;i++)
	{
		fprintf(p,"\na[%d]:%d",i,*(a+i));
	}
}

int main(){
	int n;
	int *a=(int*) malloc (sizeof(int)*n);
	printf("Nhap vao phan tu n:");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	if(KtTang(a,n)==1)
	{
		printf("\nMang a tang, Hop le !!!");
		XuatGhi(a,n);
	}
	else printf("\nMang a ko tang, Ko hop le !!!\nKhong duoc ghi vao file");
}
