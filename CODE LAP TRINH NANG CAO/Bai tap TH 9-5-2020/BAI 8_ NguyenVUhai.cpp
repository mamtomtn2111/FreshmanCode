#include<stdio.h>

struct HANG
{
	char MaHang[50];
	char TenMatHang[50];
	char SoLuong[30];
	char DonGia[30];
	int SoLuongTon;
	char ThoiGian[20];
};

void Nhap(HANG a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\t\tNHAP MAT HANG\n");
		printf("\tHang thu %d",i+1);
		fflush(stdin);
		printf("\nNhap vao ma hang: ");
		gets(a[i].MaHang);
		printf("\nNhap vao ten mat hang: ");
		gets(a[i].TenMatHang);
		printf("\nNhap vao so luong mat hang: ");
		gets(a[i].SoLuong);
		printf("\nNhap vao don gia: ");
		gets(a[i].DonGia);
		fflush(stdin);
		printf("\nNhap vao so luong ton kho: ");
		scanf("%d",&a[i].SoLuongTon);
		fflush(stdin);
		printf("\nTHoi gian bao hanh (tinh theo don vi thang): ");
		gets(a[i].ThoiGian);
	}
}

int MAX(HANG a[],int n)
{
	int i, max;
	max = 0;
	for(int i =1; i < n; i++)
	{
		if(max < a[i].SoLuongTon)
			max = a[i].SoLuongTon;
			return max;
	}
}

void SoSanh(HANG a[], int n)
{
	int max;
	max = MAX(a,n);
	FILE *p=fopen("NGAYTONKHOMAX.txt","w+");
	printf("\t\tHang ton kho nhieu nhat la: \n");
	fputs("\t\tHang ton kho nhieu nhat la: \n",p);
	for(int i = 0; i < n; i++)
	{
		if(a[i].SoLuongTon == max)
		{
			printf("\tHang thu %d",i+1);
			printf("\nMa hang: %s\n",a[i].MaHang);
			printf("\nTen mat hang: %s\n",a[i].TenMatHang);
			printf("\nSo luong mat hang: %s\n",a[i].SoLuong);
			printf("\nNhap vao don gia: %s\n",a[i].DonGia);
			printf("\nNhap vao so luong ton kho: %d\n",a[i].SoLuongTon);
			printf("\nTHoi gian bao hanh (tinh theo don vi thang): %s\n",a[i].ThoiGian);
			
			fprintf(p,"\tHang thu %d",i+1);
			fprintf(p,"\nMa hang: %s\n",a[i].MaHang);
			fprintf(p,"\nTen mat hang: %s\n",a[i].TenMatHang);
			fprintf(p,"\nSo luong mat hang: %s\n",a[i].SoLuong);
			fprintf(p,"\nNhap vao don gia: %s\n",a[i].DonGia);
			fprintf(p,"\nNhap vao so luong ton kho: %d\n",a[i].SoLuongTon);
			fprintf(p,"\nTHoi gian bao hanh (tinh theo don vi thang): %s\n",a[i].ThoiGian);
		}
	}
}



int main()
{
	HANG a[1000];
	int n;
	printf("So Luong loai hang:");
	scanf("%d",&n);
	Nhap(a,n);
	SoSanh(a,n);
}
