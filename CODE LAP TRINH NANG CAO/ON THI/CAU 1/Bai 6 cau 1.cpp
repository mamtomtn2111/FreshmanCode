#include<stdio.h>

struct KhachHang
{
	char HoTen[50];
	float SoTienGui;
	char SoTK[50];
};

void Nhap(KhachHang *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNhap vao thong tin khach hang thu %d\n",i+1);
		fflush(stdin);
		printf("Nhap vao ho ten:");
		gets(a[i].HoTen);
		printf("Nhap vao so tai khoan");
		gets(a[i].SoTK);
		fflush(stdin);
		printf("Nhap vao so tien gui");
		scanf("%f",&a[i].SoTienGui);
	}
}

void Xuat(KhachHang *a,int n)
{
	FILE *p=fopen("Tongtien.txt","w+");
	printf("|%-30s|%15s|%15s|","Ho ten khach hang","So tai khoan","So tien gui");
	fprintf(p,"|%-30s|%15s|%15s|","Ho ten khach hang","So tai khoan","So tien gui");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15s|%15.2f|",a[i].HoTen,a[i].SoTK,a[i].SoTienGui);
		fprintf(p,"\n|%-30s|%15s|%15.2f|",a[i].HoTen,a[i].SoTK,a[i].SoTienGui);
	}
	fclose(p);
}

void TinhTong(KhachHang *a,int n)
{
	FILE *p=fopen("Tongtien.txt","a");
	float sum;
	for(int i=0;i<n;i++)
	{
		sum+=a[i].SoTienGui;
	}
	printf("\nTong so tien khach gui la: %15.2f",sum);
	fprintf(p,"\nTong so tien khach gui la: %15.2f",sum);
	fclose(p);  
}

int main()
{
	KhachHang *a;
	int n;
	printf("Nhap so luong khach hang: ");
	scanf("%d", &n);
	a= new KhachHang[n];
	Nhap(a,n);
	Xuat(a,n);
	TinhTong(a,n);
}
