#include<stdio.h>
#include<stdlib.h>

void DocFile(int *a,int &n)
{
	printf("Cac phan tu doc tu file la: \n");
	FILE *p=fopen("MangA.txt","r");
	int i=0;
	while(!feof(p))
	{
		fscanf(p,"%d",a+i);
		i++;
		n=i;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	fclose(p);
}

void XuatGhi(int *a,int n)
{
	FILE *b=fopen("Soduong.txt","wt");
	fputs("So duong co trong mang a la: \n",b);
	for(int i=0;i<n;i++)
	{
		if(*(a+i)>0)
			fprintf(b,"%d ",*(a+i));
	}
	fclose(b);
	FILE *c=fopen("Soam.txt","wt");
	fputs("So duong co trong mang a la: \n",c);
	for(int i=0;i<n;i++)
	{
		if(*(a+i)<0)
			fprintf(c,"%d ",*(a+i));
	}
	fclose(c);
}

int main()
{
	int *a=(int*) malloc(sizeof(int)*100);
	int n;
	DocFile(a,n);
	XuatGhi(a,n);
}
