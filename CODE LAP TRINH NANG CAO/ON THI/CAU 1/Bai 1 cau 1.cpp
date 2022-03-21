#include<stdio.h>

struct BangXepHang
{
	char Ten[50];
	int Thang;
	int Hoa;
	int Thua;
	int Diem;
};

void Nhap(BangXepHang a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n\n\t\tNhap thong tin doi bong thu %d",i+1);
		printf("\nNhap ten doi bong: ");
		gets(a[i].Ten);
		fflush(stdin);
		printf("So tran thang: ");
		scanf("%d",&a[i].Thang);
		printf("So tran hoa: ");
		scanf("%d",&a[i].Hoa);
		fflush(stdin);
		printf("So tran thua: ");
		scanf("%d",&a[i].Thua);
		a[i].Diem=a[i].Thang*3+a[i].Hoa;
	}	
}

void Xuat(BangXepHang a[],int n)
{
	printf("|%-30s|%15s|%15s|%15s|%15s|","Ten doi bong","So tran thang","So tran hoa","So tran thua","Tong so diem");
	for(int i=0;i<n;i++)
	{
		printf("\n|%-30s|%15d|%15d|%15d|%15d|",a[i].Ten,a[i].Thang,a[i].Hoa,a[i].Thua,a[i].Diem);
	}
}

void SapXepGiam(BangXepHang a[],int n)
{
    BangXepHang tg;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i].Diem<a[j].Diem)
			{
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
			}
		}
	}
}

void SapXepGhiFile(BangXepHang a[],int n)
{
	FILE *p=fopen("danhsach.txt","w+");
	fprintf(p,"|%-30s|%15s|%15s|%15s|%15s|","Ten doi bong","So tran thang","So tran hoa","So tran thua","Tong so diem");
	for(int i=0;i<n;i++)
	{
		fprintf(p,"\n|%-30s|%15d|%15d|%15d|%15d|",a[i].Ten,a[i].Thang,a[i].Hoa,a[i].Thua,a[i].Diem);
	}
	fclose(p);
}

int main()
{
	BangXepHang a[500];
	int n;
	printf("Nhap vao so doi bong: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	SapXepGiam(a,n);
	SapXepGhiFile(a,n);
}
