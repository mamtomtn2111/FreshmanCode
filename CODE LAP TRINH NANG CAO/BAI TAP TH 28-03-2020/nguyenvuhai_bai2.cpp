//Built by NguyenVuHai - CNTTK18CLC

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void In(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao A[%d]:",i);
		scanf("%d",p+i);
	}
}

void Out(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nA[%d]=%d",i,*(p+i));
	}
}

int HopLe(int *p,int n)
{
	int match=1;
	for(int i=0;i<n-1;i++)
	{
		if(*(p+i)>*(p+i+1))
			match=0;
	}
	return match;
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
		if(CheckPrime(*(p+i)))
			printf("\nA[%d]=%d",i,*(p+i));
	}
}

void ThemPhanTu(int *p,int &n,int alpha,int beta)
{
	//phan bo lai bo nho da cap phat cho pointer
	// Ta can them 1 o nho cho pointer=> dung realloc thoi =))
	p=(int*)realloc(p,(n+1)*sizeof(int));
	//Neu beta<=0 them o dau
	if(beta<0)
	{
		beta=0;
	}
	//neu beta >=n them o cuoi
	if(beta>n)
	{
		beta=n;
	}
	for(int i=n;i>beta;i--)
	{
		*(p+i)=*(p+i-1);
	}
	*(p+beta)=alpha;
	//tang so luong phan tu khi chen them.
	n++;
}

void OutNum(int *p,int n)
{
	printf("\n\n====Cac phan tu duong hien co la:=====");
	for(int i=0;i<n;i++)
	{
		if(*(p+i)>0)
		printf("\nA[%d]=%d",i,*(p+i));
	}
	printf("\n\n====Cac phan tu am hien co la:=====");
	for(int i=0;i<n;i++)
	{
		if(*(p+i)<0)
			printf("\nA[%d]=%d",i,*(p+i));
	}
	printf("\n\n====Cac phan tu so chan hien co la:=====");
	for(int i=0;i<n;i++)
	{
		if(*(p+i)%2==0)
			printf("\nA[%d]=%d",i,*(p+i));
	}
	printf("\n\n=====Cac phan tu so le hien co la:=====");
	for(int i=0;i<n;i++)
	{
		if(*(p+i)%2!=0)
			printf("\nA[%d]=%d",i,*(p+i));
	}
	printf("\n\n=====Cac phan tu chia het cho 3 la:=====");
	for(int i=0;i<n;i++)
	{
		if(*(p+i)%3==0)
			printf("\nA[%d]=%d",i,*(p+i));
	}
}

int TichPhanTu(int *p,int n)
{
	int muti=1;
	for(int i=0;i<n;i++)
	{
		muti*=*(p+i);
	}
	return muti;
}

int main()
{
	int *p,n;
	p=(int *) malloc(1000*sizeof(int));
	
	printf("Nhap vao so n: ");
	do
	{
		scanf("%d",&n);
		if(n<=0) printf("So n nhap sai, nhap lai:");
	}while(n<=0);
	
	In(p,n);
	printf("=====Mang hien co=====");
	Out(p,n);
	
	if(HopLe(p,n))
		printf("\n\nDay la mang tang, HOP LE!!!");
	else printf("\nMang khong hop le !!!!");
	
	SapXepTang(p,n);
	printf("\n\n=====Sap xep tang cho mang tren la:======");
	Out(p,n);
	
	printf("\n\n======Them phan tu vao mang:======");
	int alpha,beta;
	printf("\nNhap so cua phan tu can them:");
	scanf("%d",&alpha);
	printf("\nNhap vi tri muon them:");
	scanf("%d",&beta);
	ThemPhanTu(p,n,alpha,beta);
	printf("\nMang sau khi them:\n");
	Out(p,n);
	
	SapXepTang(p,n);
	printf("\n\n====Sap xep tang lan 2 gom cac phan tu moi:");
	Out(p,n);
	
	printf("\n\n====Cac phan tu so nguyen to hien co=====");
	OutPrime(p,n);
	
	OutNum(p,n);
	
	printf("\n\n=====Tich cac phan tu la %d",TichPhanTu(p,n));
}
