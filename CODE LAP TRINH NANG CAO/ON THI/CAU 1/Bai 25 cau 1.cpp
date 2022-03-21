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

void NhapMang(SINHVIEN a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNhap vao thong tin sinh vien thu %d",i+1);
		fflush(stdin);
		printf("\nNhap vao ma sinh vien: ");
		gets(a[i].MaSV);
		printf("Nhap vao ho ten sinh vien: ");
		gets(a[i].HoTen);
		fflush(stdin);
		printf("Nhap vao ngay thang nam sinh (dd/mm/yyyy):");
		gets(a[i].Sinh);
		printf("Nhap vao que quan sinh vien: ");
		gets(a[i].QueQuan);
	}
}

void XuatMang(SINHVIEN a[],int n)
{
	FILE *p=fopen("Dulieuluutru.txt","w+");
	printf("|%-30s|%15s|%15s|%15s|","Ma sinh vien","Ho ten","Nam sinh","Que quan");
	fprintf(p,"|%-30s|%15s|%15s|%15s|","Ma sinh vien","Ho ten","Nam sinh","Que quan");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15s|%15s|%15s|",a[i].MaSV,a[i].HoTen,a[i].Sinh,a[i].QueQuan);
		fprintf(p,"\n|%-30s|%15s|%15s|%15s|",a[i].MaSV,a[i].HoTen,a[i].Sinh,a[i].QueQuan);
	}
	fclose(p);
}

void ThemSV(SINHVIEN a[],int n)
{
	char s[10];
	char str[]="co";
	char strl[]="khong";
	printf("Ban muon nhap them sinh vien khong");
	gets(s);
	if(strcmp(s,str)==0)
	{
		int k;
		SINHVIEN Them;
		printf("Nhap vi tri can them: ");
		scanf("%d",&k);
		fflush(stdin);
		printf("\n\n\t\tNhap thong tin sinh vien can them: ");
		printf("\nNhap vao ma sinh vien: ");
		gets(Them.MaSV);
		printf("Nhap vao ho ten sinh vien: ");
		gets(Them.HoTen);
		printf("Nhap vao ngay thang nam sinh (dd/mm/yyyy):");
		gets(Them.Sinh);
		printf("Nhap vao que quan sinh vien: ");
		gets(Them.QueQuan);
		for(int i=n-1;i>=k-1;i--)
		{
			a[i+1]=a[i];
		}
		a[k-1]=Them;
		n++;
		{
			XuatMang(a,n);
		}
	}	
	else if(strcmp(s,strl)==0)
	{
		XuatMang(a,n);
	}
}

int main()
{
	SINHVIEN a[1000];
	int n;
	printf("Nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	NhapMang(a,n);
	ThemSV(a,n);
}
