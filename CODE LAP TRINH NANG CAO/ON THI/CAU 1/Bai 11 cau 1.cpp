#include<stdio.h>
#include<string.h>

struct SACH
{
	char Ma[50];
	char Ten[50];
	char TacGia[50];
	char SL[50];
};

void Nhap(SACH *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNhap vao thong tin sach thu %d\n",i+1);
		fflush(stdin);
		printf("Nhap vao ma sach: ");
		gets(a[i].Ma);
		printf("Nhap vao ten sach: ");
		gets(a[i].Ten);
		fflush(stdin);
		printf("Nhap vao ten tac gia: ");
		gets(a[i].TacGia);
		printf("Nhap vao so luong sach: ");
		gets(a[i].SL);
	}
}

void Xuat(SACH *a,int n)
{
	printf("|%-30s|%15s|%15s|%15s|","Ma sach","Ten sach","Ten tac gia","So luong sach");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15s|%15s|%15s|",a[i].Ma,a[i].Ten,a[i].TacGia,a[i].SL);
	}
}

void Tim(SACH *a,int n)
{
	int dem=0;
	char k[50];
	printf("\nNhap vao ten sach ma ban muon tim: ");
	gets(k);
	printf("\n|%-30s|%15s|%15s|%15s|","Ma sach","Ten sach","Ten tac gia","So luong sach");
	for(int i=0;i<n;i++)
	{
		if(strcmp((a[i].Ten),k)==0)
		{
			printf("\n|%-30s|%15s|%15s|%15s|",a[i].Ma,a[i].Ten,a[i].TacGia,a[i].SL);
			dem++;
		}
	}
	if(dem==0) 
		printf("\nKhong tim thay bat cu sach nao ban muon !!!");
}

int main()
{
	SACH *a;
	int n;
	a= new SACH[n];
	printf("Nhap vao so luong sach: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	Tim(a,n);
}
