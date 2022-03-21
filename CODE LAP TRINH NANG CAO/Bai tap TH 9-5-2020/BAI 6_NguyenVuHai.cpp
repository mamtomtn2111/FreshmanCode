#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct MAYTINH
{
	int MaMay;
	char TenMay[50];
	float CPU;
	char RAM[30];
	char DonGia[30];
};

void Nhap(MAYTINH a[],int &n)
{
	bool temp=true;
	int i=0;
	do
	{
		printf("Nhap Ma May: \n");
		scanf("%d",&a[i].MaMay);
		if(a[i].MaMay==0)
		{
			temp = false;
		}
		else
		{
			fflush(stdin);
			printf("Nhap ten may: \n");
			gets(a[i].TenMay);
			fflush(stdin);
			printf("Nhap toc do CPU");
			scanf("%f",&a[i].CPU);
			fflush(stdin);
			printf("Nhap Dung luong RAM: \n");
			gets(a[i].RAM);
			printf("Nhap don gia : \n");
			gets(a[i].DonGia);
			i++;
		}
	}while(temp);
	n=i;
}

void SapXep(MAYTINH a[], int n)
{
	MAYTINH temp;
	for(int i = 0 ; i < n-1 ; i ++)
	{
		for(int j = i +1 ; j < n ; j++)
		{
			if(a[i].CPU < a[j].CPU)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void In(MAYTINH a[],int n)
{
	FILE *p = fopen("MAXCPUSPEED.txt","w");
	fputs("=====Du lieu ban vua nhap la: =======",p);
	fprintf(p,"\n|%-30s|%15s|%15s|%15s|%15s|\n",  "Ten May", "Ten Ma May", "Toc do CPU","Dung luong RAM","Don gia");
	for (int i = 0; i < n; i++)
	{
		fprintf(p,"|%-30s|%15d|%15.2f|%15s|%15s|\n",a[i].TenMay,a[i].MaMay,a[i].CPU,a[i].RAM,a[i].DonGia);
	}
	fclose(p);
}

void DocFile(MAYTINH a[],int n)
{
	FILE *p= fopen("MAXCPUSPEED.txt","r");
	char DOC[500];
	for(int i=0;i<n+2;i++)
	{
		fgets(DOC,1000,p);
		printf("%s",DOC);
	}
	fclose(p);
}

int main()
{
	int n;
	MAYTINH a[1000],temp;
	Nhap(a,n);	
	printf("Du lieu ban vua nhap la:\n");
	In(a,n);
	DocFile(a,n);
	printf("Du lieu sap xep lai toc do CPU la :\n");
	SapXep(a,n);
	In(a,n);
	DocFile(a,n);
}
