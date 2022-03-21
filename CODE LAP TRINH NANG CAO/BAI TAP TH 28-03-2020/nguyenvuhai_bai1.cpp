//Built by Nguyen Vu Hai-CNTTK18CLC

#include<stdio.h>
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
	++n;
}

int SapXepLeTang(int *p,int n)
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
		for(int i=0;i<n;i++)
	{
		if(*(p+i)%2!=0)
			printf("\na[%d]=%d",i,*(p+i));
	}
}

int LeNhoNhat(int *p,int n)
{
	int i,max;
	for(i=0;i<n;i++) //tim so chan lam max
	{
		if(*(p+i)%2==0)
		{
			max=*(p+i);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0 && *(p+i)>max)
		{
			max=*(p+i);
		}
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max && *(p+i)%2!=0)
		{
			return *(p+i);
			break;
		}
	}
}

int main()
{
	int *p,n;
	p=(int*) malloc(n*sizeof(int));
	printf("Nhap n:");
	do
	{
		scanf("%d",&n);
		if(n<1) printf("Nhap n ko hop le, nhap lai:");
	}while(n<1);

	In(p,n);
	printf("Mang vua nhap la:\n");
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
	
	printf("\n\n=====Sau khi sap xep lai cac so le tang la(gom ca phan tu moi):=======");
	SapXepLeTang(p,n);
	if(LeNhoNhat(p,n)%2==0)
		printf("\n\n=====Khong co so le nho nhat lon hon moi so chan !!!");
	else
	printf("\n\n====So le nho nhat lon hon moi so chan: %d",LeNhoNhat(p,n));
}

