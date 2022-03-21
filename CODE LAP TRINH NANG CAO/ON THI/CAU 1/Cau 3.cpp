#include<stdio.h>
#include<string.h>

struct SinhVien
{
	char MaSV[50];
	char HoTen[50];
	char DiaChi[50];
	float diemTB;
};

void Nhap(SinhVien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNhap vao sinh vien thu %d: ",i+1);
		fflush(stdin);
		printf("\nNhap vao Ma sinh vien: ");
		gets(a[i].MaSV);
		printf("Nhap vao Ho ten sinh vien: ");
		gets(a[i].HoTen);
		fflush(stdin);
		printf("Nhap vao dia chi sinh vien: ");
		gets(a[i].DiaChi);
		fflush(stdin);
		printf("Nhap vao Diem TB sinh vien: ");
		scanf("%f",&a[i].diemTB);
	}
}

void Xuat(SinhVien a[],int n)
{
	printf("\n|%-30s|%15s|%15s|%15s|","Ma sinh vien","Ho ten","Dia chi","Diem TB");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15s|%15s|%15.2f|",a[i].MaSV,a[i].HoTen,a[i].DiaChi,a[i].diemTB);
	}
}

void XuatGhi(SinhVien a[],int n)
{
	FILE *p=fopen("Diachi.txt","w+");
	char str[]="Thai Nguyen";
	char strl[]="thai nguyen";
	fprintf(p,"\n|%-30s|%15s|%15s|%15s|","Ma sinh vien","Ho ten","Dia chi","Diem TB");
	for(int i=0;i<n;i++)
	{
		if(strcmp((a[i].DiaChi),str)==0 || strcmp((a[i].DiaChi),strl)==0)
		fprintf(p,"\n|%-30s|%15s|%15s|%15.2f|",a[i].MaSV,a[i].HoTen,a[i].DiaChi,a[i].diemTB);
	}
}

int main()
{
	SinhVien a[1000];
	int n;
	printf("Nhap vao so sinh vien: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	XuatGhi(a,n);
}
