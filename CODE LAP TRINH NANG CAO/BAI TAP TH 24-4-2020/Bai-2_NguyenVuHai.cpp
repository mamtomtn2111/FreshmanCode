//Built by NguyenVuHai-CNTTK18CLC
#include<stdio.h>
#include<stdlib.h>

struct MATHANG
{
	char MaHang[30];
	char TenHang[30];
	int SoLuong;
	char DonViTinh[30];
	char DonGia[30];
};

void Nhap(MATHANG items[],int n)
{
	printf("\n--------------------------");
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		printf("\n\t\tTen mat hang thu %d\n",i+1);
		printf("Nhap Ma Hang: \n");
		gets(items[i].MaHang);
		printf("Nhap Ten Mat Hang: \n");
		gets(items[i].TenHang);
		printf("Nhap so luong mat hang: \n");
		scanf("%d",&items[i].SoLuong);
		fflush(stdin);
		printf("Nhap don vi tinh: \n");
		gets(items[i].DonViTinh);
		fflush(stdin);
		printf("Nhap don gia:");
		gets(items[i].DonGia);
	}
}

void XuatGhi(MATHANG items[],int n)
{
//	printf("\n\t\tDu lieu ban vua nhap la:");
//		printf("\n-----------------------------");
	FILE *p=fopen("MATHANG.txt","w");
	fputs("=====Du lieu ban vua nhap lieu la:======",p);
	if(p!=NULL)
			{	
				 fprintf(p,"\n|%-30s|%15s|%15s|%15s|%15s|\n",  "Ten Ma Hang", "Ten Mat Hang", "So Luong Mat Hang","Don vi Tinh","Don gia");
				 //printf("\n|%-30s|%15s|%15s|%15s|%15s|\n", "Ten Ma Hang", "Ten Mat Hang", "So Luong Mat Hang","Don vi Tinh","Don gia");
				    for (int i = 0; i < n; i++)
				    {
				        fprintf(p,"|%-30s|%15s|%15d|%15s|%15s|\n",items[i].MaHang,items[i].TenHang,items[i].SoLuong,items[i].DonViTinh,items[i].DonGia);
				    }
    		}
    fclose(p);
}

void DocFile(MATHANG items[],int n)
{
	char temp[100];
	
	FILE *p=fopen("MATHANG.txt","r");
	
	for(int i = 0; i < n+2; i++){
		fscanf(p, "%s", temp);
		printf("%s", temp);
    	fgets(temp, 100, p);
    	printf( "%s", temp);
	}
	fclose(p);
}

int main()
{
	int n;
	MATHANG items[1000];
	printf("Nhap so luong Mat Hang: ");
	scanf("%d",&n);
	fflush(stdin);
	Nhap(items,n);
	XuatGhi(items,n);
	DocFile(items,n);
}
