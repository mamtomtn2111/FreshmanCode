#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct MATHANG
{
	char MaHang[50];
	char TenHang[50];
	int Ngay;
	int Thang;
	int Nam;
	int SL;
};

void NhapMang(MATHANG &n)
{
	printf("\n\n\t\tNhap vao thon tin mat hang:");
	fflush(stdin);
	printf("\nNhap vao ma hang: ");
	gets(n.MaHang);
	printf("Nhap vao ten hang: ");
	gets(n.TenHang);
	fflush(stdin);
	printf("Nhap vao ngay/thang/nam nhan hang: ");
	scanf("%d%d%d",&n.Ngay,&n.Thang,&n.Nam);
	fflush(stdin);
	printf("Nhap vao so luong mat hang: ");
	scanf("%d",&n.SL);
}

void XuatMang(MATHANG a[],int n)
{
	FILE *p=fopen("Mathang.txt","w");
	printf("|%-30s|%15s|%15s|%15s|","Ma hang","Ten hang","Thoi gian nhan hang","so luong");
	fprintf(p,"|%-30s|%15s|%15s|%15s|","Ma hang","Ten hang","Thoi gian nhan hang","so luong");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15s|%6d/%6d/%5d|%15d|",a[i].MaHang,a[i].TenHang,a[i].Ngay,a[i].Thang,a[i].Nam,a[i].SL);
		fprintf(p,"\n|%-30s|%15s|%6d/%6d/%5d|%15d|",a[i].MaHang,a[i].TenHang,a[i].Ngay,a[i].Thang,a[i].Nam,a[i].SL);
	}
	fclose(p);
}

void NhapDS(MATHANG a[],int &n)
{
	int i=0;
	NhapMang(a[i]);
	i++;
	int luachon;
	do
	{
		printf("\nChon lua chon de nhap tiep MAT HANG !");
		printf("\nNhap 1 = co");
		printf("\nNhap 2 = khong");
		printf("\nNhap su lua chon cua ban:");
		scanf("%d",&luachon);
		
		if(luachon==1)
		{
			NhapMang(a[i]);
			i++;
		}
	}while(luachon==1);
	n=i;
}

int main()
{
	int n;
	MATHANG a[n];
	NhapDS(a,n);
	XuatMang(a,n);
	return 0;
}
