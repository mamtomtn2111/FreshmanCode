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

void Xuat(int *p,int n)
{
	printf("\n\n======Mang vua nhap la: ======\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}	
}

void XuatSoAm(int *p,int n)
{
	FILE *f=fopen("soam.txt","w");
	int *q=(int*) malloc(1000*sizeof(int));
	printf("\n\n======Mang co cac so am la: ======\n");
	fputs("======Mang co cac so am la: ======\n",f);
	for(int i=0;i<n;i++)
	{
		if(*(p+i)<0)
		{
		*(q+i)=*(p+i);
		printf("%d ",*(q+i));
		fprintf(f,"%d ",*(q+i));
		}
	}
	fclose(f); 	
}

int main()
{
	int *p=(int*) malloc(1000*sizeof(int));
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	Nhap(p,n);
	Xuat(p,n);
	XuatSoAm(p,n);
}
