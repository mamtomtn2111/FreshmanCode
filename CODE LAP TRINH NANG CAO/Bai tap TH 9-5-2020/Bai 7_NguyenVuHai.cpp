#include<stdio.h>
#include<string.h>

struct SACH
{
	char MaSach[30];
	char TenSach[50];
	char TacGia[30];
	char SL[30];
};

void Nhap(SACH a[],int n)
{
	printf("\t\t=====Nhap du lieu sach=======\n");
	for(int i=0;i<n;i++)
	{	
		printf("Danh sach SACH thu %d\n",i+1);
		fflush(stdin);
		printf("\nNhap ma sach: "); 
		gets(a[i].MaSach);
		printf("Nhap vao ten sach: ");
		gets(a[i].TenSach);
		printf("Nhap vao tac gia: ");
		gets(a[i].TacGia);
		fflush(stdin);
		printf("Nhap vao so luong sach");
		gets(a[i].SL);
	}
}

void Xuat(SACH a[],int n)
{
	SACH *p=a;
	printf("\t=====XUAT DU LIEU SACH=======\n");
	for(int i=0;i<n;i++)
	{
		printf("\t\tPHIM THU %d\n",i+1);
		printf("\nMa Sach: %s\n",a[i].MaSach);
		printf("\nTen Sach: %s\n",a[i].TenSach);
		printf("\nTen tac gia: %s\n",a[i].TacGia);
		printf("\nSo luong sach: %s\n",a[i].SL);
	}
}

int XuatSach(SACH a[],int n)
{
	FILE *p=fopen("SACH.txt","w+");
	fputs("\t\tDU LIEU SACH BAN VUA TIM LA: ",p);
	int dem=0;
	char TEN[50];
	printf("Nhap ten sach can tim: ");
	gets(TEN);
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].TenSach,TEN)==0)
		{
			printf("\t\tPHIM THU %d\n",i+1);
			printf("\nMa Sach: %s\n",a[i].MaSach);
			printf("\nTen Sach: %s\n",a[i].TenSach);
			printf("\nTen tac gia: %s\n",a[i].TacGia);
			printf("\nSo luong sach: %s\n",a[i].SL);
			
	     	fprintf(p,"\n\t\tPHIM THU %d\n",i+1);
			fprintf(p,"\nMa Sach: %s\n",a[i].MaSach);
			fprintf(p,"\nTen Sach: %s\n",a[i].TenSach);
			fprintf(p,"\nTen tac gia: %s\n",a[i].TacGia);
			fprintf(p,"\nSo luong sach: %s\n",a[i].SL);
			dem++;
		}
	}
	fclose(p);
	if(dem==0)
		printf("KHONG TIM THAY SACH !");
	
}


int main()
{
	int n;
	SACH a[1000];
	printf("Nhap so luong sach: ");
	scanf("%d",&n);
	Nhap(a,n);
	Xuat(a,n);
	XuatSach(a,n);
}
