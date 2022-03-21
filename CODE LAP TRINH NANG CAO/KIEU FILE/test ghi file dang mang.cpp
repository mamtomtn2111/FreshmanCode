//Built by NguyenVuHai-CNTTK18CLC

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void NhapMang(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap so a[%d]:",i);
		scanf("%d",p+i);
	}
}

char XuatMang(int *p,int n)
{
	FILE *fo1=fopen("Xuatmang.txt","w+");
	printf("====Cac phan tu co trong mang vua nhap=====");
	fputs("====Cac phan tu duoc ghi vao mang la====",fo1);
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,*(p+i));
			fprintf(fo1,"\na[%d]=%d",i,*(p+i));
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
	FILE *fo2=fopen("nguyento.txt","w+");
	printf("\n====Cac phan tu so nguyen to co trong bai la====");
	fputs("====Cac phan tu nguyen to co trong mang la====",fo2);
	for(int i=0;i<n;i++)
	{
		if(CheckPrime(*(p+i)))
			printf("\nA[%d]=%d",i,*(p+i));
	}
	for(int i=0;i<n;i++)
	{
		if(CheckPrime(*(p+i)))
			fprintf(fo2,"\na[%d]=%d",i,*(p+i));
	}
}

void SoChinhPhuong(int *p,int n)
{
	FILE *fo3=fopen("Chinhphuong.txt","w+");
	printf("\n====Cac so chinh phuong co trong mang la:====");
	fputs("====Cac so chinh phuong vua nhap la====",fo3);
	for(int i=0;i<n;i++)
	{
		if(*(p+i)>0)
		{
			if(sqrt(*(p+i))*sqrt(*(p+i))==*(p+i))
				printf("\nA[%d]=%d",i,*(p+i));
		}
	}
	for(int i=0;i<n;i++)
	{
		if(*(p+i)>0)
		{
			if(sqrt(*(p+i))*sqrt(*(p+i))==*(p+i))
				fprintf(fo3,"\nA[%d]=%d",i,*(p+i));
		}
	}
}

int SapXepTang(int *p,int n)
{	
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
}

void OutSapXepTang(int *p,int n)
{
	FILE *fo4=fopen("sxtang.txt","w+");
	printf("\n====Cac so duoc sap tang la====");
	fputs("====Cac so sap xep tang duoc luu vao file la====",fo4);
	for(int i=0;i<n;i++)
	{
		if(SapXepTang(p,n))
			printf("\nA[%d]=%d",i,*(p+i));
	}
	for(int i=0;i<n;i++)
	{
		if(SapXepTang(p,n))
			fprintf(fo4,"\nA[%d]=%d",i,*(p+i));
	}
}

int main()
{
	int *p,n;
	p=(int*) malloc(sizeof(int)*100);
	printf("Nhap n:");
	scanf("%d",&n);
	NhapMang(p,n);
	XuatMang(p,n);
	OutPrime(p,n);
	SoChinhPhuong(p,n);
	OutSapXepTang(p,n);
}
