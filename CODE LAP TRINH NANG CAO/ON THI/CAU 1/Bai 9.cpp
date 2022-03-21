#include<stdio.h>

struct HOCSINH
{
	char MaHS[50];
	char HoTen[50];
	char NgaySinh[50];
	char DiaChi[50];
	char GioiTinh[10];
	float DiemTB;	
};

void Nhap(HOCSINH a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNHAP VAO DANH SACH HOC SINH THU %d",i+1);
		fflush(stdin);
		printf("\nNhap vao ma hoc sinh: ");
		gets(a[i].MaHS);
		printf("Nhap vao ho ten: ");
		gets(a[i].HoTen);
		fflush(stdin);
		printf("Nhap vao ngay sinh: ");
		gets(a[i].NgaySinh);
		printf("Nhap vao Dia chi: ");
		gets(a[i].DiaChi);
		printf("Nhap vao Gioi tinh: ");
		gets(a[i].GioiTinh);
		fflush(stdin);
		printf("Nhap vao diem trung binh: ");
		scanf("%f",&a[i].DiemTB);
	}
}

void Xuat(HOCSINH a[], int n)
{
	printf("|%-30s|%15s|%15s|%15s|%15s|%15s|","Ma HS","Ho ten","Ngay sinh","Dia chi","Gioi Tinh","Diem TB");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15s|%15s|%15s|%15s|%15.2f|",a[i].MaHS,a[i].HoTen,a[i].NgaySinh,a[i].DiaChi,a[i].GioiTinh,a[i].DiemTB);
	}
}

float Max(HOCSINH a[],int n)
{
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i].DiemTB)
			max=a[i].DiemTB;
	}
	return max;
}

void XuatGhi(HOCSINH a[], int n)
{
	FILE *p=fopen("Diemcao.txt","w+");
	fprintf(p,"|%-30s|%15s|%15s|%15s|%15s|%15s|","Ma HS","Ho ten","Ngay sinh","Dia chi","Gioi Tinh","Diem TB");
	for(int i=0;i<n;i++)
	{
		if(a[i].DiemTB==Max(a,n))
		fprintf(p,"\n|%-30s|%15s|%15s|%15s|%15s|%15.2f|",a[i].MaHS,a[i].HoTen,a[i].NgaySinh,a[i].DiaChi,a[i].GioiTinh,a[i].DiemTB);
	}
	fclose(p);
}

int main()
{
	int n;
	HOCSINH a[n];
	printf("Nhap vao so luong hoc sinh: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	XuatGhi(a,n);
	printf("\nDiem hoc sinh cao nhat duoc ghi vao file Diemcao.txt");
}
