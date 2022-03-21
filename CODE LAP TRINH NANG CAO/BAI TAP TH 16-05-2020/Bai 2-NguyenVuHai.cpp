//Built by NguyenVuHai-CNTTK18CLC

#include<stdio.h>
#include<math.h>
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
	FILE *f=fopen("mang.txt","w");
	printf("\n\n======Mang vua nhap la: ======\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
		fprintf(f,"%d ",*(p+i));
	}
	fclose(f); 	
}

int CheckPrime(int n)
{
	int i;
	if(n<2)
		return 0;
	else 
	{
		for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
		return 1;
	}
}

void DocFile(int *p,int n)
{
	printf("\nCac phan tu doc tu file la:\n");
	FILE *f;
	f = fopen("mang.txt","rt");
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
		}
		
	for(int i=0; i<n; i++)
		
		{
			if(CheckPrime(*(p+i))==1)
	    	printf("%5d ", *(p+i));
	    }
	fclose(f);
}

int main()
{
	int n;
	int *p=(int*) malloc(1000*sizeof(int));
	printf("Nhap n: ");
	do
	{
		scanf("%d",&n);
		if(n<5 || n>20) printf("Nhap n ngoai khoang xet, nhap lai: ");
	}while(n<5 || n>20);
	
	
	Nhap(p,n);
	Xuat(p,n);
	DocFile(p,n);
}
