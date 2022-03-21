#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct SINHVIEN
{
	char MaSV[50];
	char HoTen[50];
	char Sinh[50];
	char QueQuan[50];
};

void NhapMang(SINHVIEN a[])
{
		printf("\n\n\t\tNhap vao thong tin sinh vien thu 1");
		fflush(stdin);
		printf("\nNhap vao ma sinh vien: ");
		gets(a[0].MaSV);
		printf("Nhap vao ho ten sinh vien: ");
		gets(a[0].HoTen);
		fflush(stdin);
		printf("Nhap vao ngay thang nam sinh (dd/mm/yyyy):");
		gets(a[0].Sinh);
		printf("Nhap vao que quan sinh vien: ");
		gets(a[0].QueQuan);
}

void XuatMang(SINHVIEN a[],int n)
{
	FILE *p=fopen("Dulieuluutru.txt","w+");
	printf("|%-30s|%15s|%15s|%15s|","Ma sinh vien","Ho ten","Nam sinh","Que quan");
	fprintf(p,"|%-30s|%15s|%15s|%15s|","Ma sinh vien","Ho ten","Nam sinh","Que quan");
	for(int i=0;i<2;i++)
	{
		printf("\n|%-30s|%15s|%15s|%15s|",a[i].MaSV,a[i].HoTen,a[i].Sinh,a[i].QueQuan);
		fprintf(p,"\n|%-30s|%15s|%15s|%15s|",a[i].MaSV,a[i].HoTen,a[i].Sinh,a[i].QueQuan);
	}
	fclose(p);
}

void ThemSV(SINHVIEN a[],int n)
{
	int i=0,b;
	printf("\nNhap su lua chon de them sinh vien: ");
	printf("\nNhap 1 = co !");
	printf("\nNhap 2 = khong !");
	printf("\nBan nhap :");
	scanf("%d",&b);
	if(b==1)
	{
		i++;
		fflush(stdin);
		printf("\n\n\t\tNhap thong tin sinh vien can them: ");
		printf("\nNhap vao ma sinh vien: ");
		gets(a[i].MaSV);
		printf("Nhap vao ho ten sinh vien: ");
		gets(a[i].HoTen);
		printf("Nhap vao ngay thang nam sinh (dd/mm/yyyy):");
		gets(a[i].Sinh);
		printf("Nhap vao que quan sinh vien: ");
		gets(a[i].QueQuan);
	}	
	else if(b==2)
	{
		XuatMang(a,n);
	}
}

int main()
{
	SINHVIEN a[1000];
	int n;
	NhapMang(a);
	ThemSV(a,n);
	XuatMang(a,n);
}
