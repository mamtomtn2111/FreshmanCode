#include<stdio.h>
#include<math.h>
void NhapMang(int a[],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void SapXepTang(int a[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
			if(a[i]>a[j])
			{
				int tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
}
void In(int a[],int n)
{
	int i;
	printf("Mang sau khi da sap xep la: \n");
	for(i=0; i<n; i++)
	{
		SapXepTang(a, n);
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d] = %d \n",i,a[i]);
	}
}
int main()
{
	int n;
	int a[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	NhapMang(a, n);
	In(a, n);
}
