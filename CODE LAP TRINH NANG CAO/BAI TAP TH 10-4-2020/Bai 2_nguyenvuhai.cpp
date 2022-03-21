//Built by NguyenVuHai-CNTTK18CLC

#include<stdio.h>
#include<string.h>

struct BenhNhan
{
	char HoTen[50];
	char DiaChi[100];
	char KhoaDieuTri[50];
	int Ngay;
};

void NhapDanhSach(BenhNhan bn[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("=====NHAP DU LIEU BENH NHAN=====\n");
		printf("\n+)Danh sach benh nhan thu %d\n",i+1);
		fflush(stdin);
		printf("\nNhap ho ten benh nhan:");
		gets(bn[i].HoTen);
		printf("\nNhap dia chi benh nhan:");
		gets(bn[i].DiaChi);
		printf("\nNhap khoa dieu tri:");
		gets(bn[i].KhoaDieuTri);
		fflush(stdin);
		printf("\nNhap so ngay nam vien:");
		scanf("%d",&bn[i].Ngay);
	}
}

void XuatKhoaNgoai(BenhNhan bn[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(bn[i].KhoaDieuTri,"ngoai") == 0)
		{
			printf("\n\n=====DANH SACH SINH VIEN DIEU TRI TAI KHOA NGOAI=====\n");
			printf("\n+)Danh sach benh nhan thu %d\n",i+1);
			fflush(stdin);
			printf("\nHo ten benh nhan: %s\n",bn[i].HoTen);
			printf("\nDia chi benh nhan: %s\n",bn[i].DiaChi);
			printf("\nKhoa dieu tri: %s\n",bn[i].KhoaDieuTri);
			printf("\nSo ngay nam vien: %d\n",bn[i].Ngay);
		}
	}
}

int Max(BenhNhan *bn, int n)
{
	int i, max;
	max = 0;
	for(int i =1; i < n; i++)
	{
		if(max < bn[i].Ngay)
			max = bn[i].Ngay;
			return max;
	}
	
}
void SoSanh(BenhNhan *bn, int n){
	int max;
	max = Max(bn,n);
	for(int i = 0; i < n; i++)
	{
		if(bn[i].Ngay == max)
		{
			printf("\n\n\t\tThong tin benh nhan nam vien max la : %d\n", i+1);
			printf("\nHo ten benh nhan: %s\n",bn[i].HoTen);
			printf("Dia chi: %s\n",bn[i].DiaChi);
			printf("Khoa dieu tri: %s\n ", bn[i].KhoaDieuTri);
			printf("Ngay nam vien: %d", bn[i].Ngay);
		}
	}
}

int main()
{
	BenhNhan bn[1000];
	int n;
	printf("Nhap so luong benh nhan:");
	scanf("%d",&n);
	NhapDanhSach(bn,n);
	XuatKhoaNgoai(bn,n);
	SoSanh(bn,n);
}
