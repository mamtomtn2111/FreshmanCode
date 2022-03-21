#include<stdio.h>
#define MAX 1000

struct HOCSINH
{
	char Ma[30];
	char HoTen[30];
	char NgaySinh[30];
	char DiaChi[30];
	char GioiTinh[30];
	int Diemtb;
};

void Nhap(HOCSINH a[],int n)
{
	for(int i=0;i<n;i++)
	{
	fflush(stdin);
	printf("\n\n\t\tNhap Thong tin hoc sinh\n");
	printf("Nhap vao ma so hoc sinh: ");
	gets(a[i].Ma);
	printf("Nhap Ho ten hoc sinh: ");
	gets(a[i].HoTen);
	printf("Nhap ngay sinh hoc sinh: (Dinh dang ngay/thang/nam):");
	gets(a[i].NgaySinh);
	printf("Nhap Dia chi hoc sinh:");
	gets(a[i].DiaChi);
	printf("Nhap gioi tinh hoc sinh");
	gets(a[i].GioiTinh);
	printf("Nhap diem trung binh:");
	scanf("%d",&a[i].Diemtb);
	}
}

void XuatGhi(HOCSINH a[],int n)
{
	FILE *p=fopen("HOCSINH.txt","w+");
	fputs("\t\t======DANH SACH HOC SINH VUA NHAP LA======",p);
	printf("\n\n======DANH SACH HOC SINH VUA NHAP LA======\n");
	for(int i=0;i<n;i++)
	{
			printf("\n/t/tDanh sach hoc sinh thu %d=======\n",i+1);
			fflush(stdin);
			printf("\nMa Hoc sinh: %s\n",a[i].Ma);
			printf("\nHo ten hoc sinh %s\n",a[i].HoTen);
			printf("\nNgay sinh hoc sinh: %s\n",a[i].NgaySinh);
			printf("\nDia chi hoc sinh: %s\n",a[i].DiaChi);
			printf("\nGioi tinh hoc sinh: %s\n",a[i].GioiTinh);
			printf("\nDiem TB cua hoc sinh: %d\n",a[i].Diemtb);
			
			fprintf(p,"\n/t/tDanh sach hoc sinh thu %d======\n",i+1);
			fflush(stdin);
			fprintf(p,"\nMa Hoc sinh: %s\n",a[i].Ma);
			fprintf(p,"\nHo ten hoc sinh %s\n",a[i].HoTen);
			fprintf(p,"\nNgay sinh hoc sinh: %s\n",a[i].NgaySinh);
			fprintf(p,"\nDia chi hoc sinh: %s\n",a[i].DiaChi);
			fprintf(p,"\nGioi tinh hoc sinh: %s\n",a[i].GioiTinh);
			fprintf(p,"\nDiem TB cua hoc sinh: %d\n",a[i].Diemtb);
	}
}

int Max(HOCSINH a[], int n)
{
	int i, max;
	max = 0;
	for(int i =1; i < n; i++)
	{
		if(max < a[i].Diemtb)
			max = a[i].Diemtb;
			return max;
	}
}

void SoSanh(HOCSINH a[], int n)
{
	int max;
	max = Max(a,n);
	for(int i = 0; i < n; i++)
	{
		if(a[i].Diemtb == max)
		{
			printf("\n\n======DANH SACH HOC SINH VUA NHAP CO DIEM SO CAO NHAT======\n");
			printf("\n+)Danh sach hoc sinh thu %d\n",i+1);
			fflush(stdin);
			printf("\nMa Hoc sinh: %s\n",a[i].Ma);
			printf("\nHo ten hoc sinh %s\n",a[i].HoTen);
			printf("\nNgay sinh hoc sinh: %s\n",a[i].NgaySinh);
			printf("\nDia chi hoc sinh: %s\n",a[i].DiaChi);
			printf("\nGioi tinh hoc sinh: %s\n",a[i].GioiTinh);
			printf("\nDiem TB cua hoc sinh: %d\n",a[i].Diemtb);
		}
	}
}

int main()
{
	HOCSINH a[1000];
	int n;
	printf("Nhap so luong hoc sinh:");
	scanf("%d",&n);
	Nhap(a,n);
	XuatGhi(a,n);
	SoSanh(a,n);
}
