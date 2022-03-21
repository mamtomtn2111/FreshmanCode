//Built by NguyenVuHai-CNTTK18CLC

#include<stdio.h>
#include<stdlib.h>

void Nhap(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao a[%d]: ",i);
		scanf("%d",p+i);
	}
}

void XuatSoChan(int *p,int n)
{
	FILE *f=fopen("Sochan.txt","w");
	printf("\n\n======Mang co cac so chan la: ======\n");
//	fputs("======Mang co cac so chan la: ======\n",f);
	for(int i=0;i<n;i++)
	{
		if(*(p+i)%2==0)
		{
		printf("%d ",*(p+i));
		fprintf(f,"%d ",*(p+i));
		}
	}
	fclose(f);
}

void GiamDan(int *p,int n)
{
	int i,j,tg;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				tg=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=tg;
			}
		}
	}
}

void Docfile(int *p, int &n)
{
	printf("\nCac phan tu doc tu file va duoc sap xep giam dan la:\n");
	FILE *f;
	f = fopen("Sochan.txt","rt");
	if(f == NULL)
		{
			printf("Error");
			return;
		}
	int i = 0;
	while(!feof(f))
		{
			fscanf(f, "%d\t", p+i);
			i++;
			n=i;
		
		}GiamDan(p,n);
	for(int i=0; i<n; i++)
		
		{
	    	printf("%d ", *(p+i));
	    }
	fclose(f);
}

int main()
{
	int *p=(int*) malloc(1000*sizeof(int));
	int n;
	printf("Nhap n: ");
	do
	{
		scanf("%d",&n);
		if(n<5 || n>50) printf("Nhap n ngoai khoang xet, nhap lai: ");
	}while(n<5 || n>50);
	Nhap(p,n);
	XuatSoChan(p,n);
	GiamDan(p,n);
	Docfile(p,n);
}
