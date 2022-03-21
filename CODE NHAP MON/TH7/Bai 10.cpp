#include<stdio.h>
#include<math.h>
void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void Cp(int x)
{
	int i;
	for(i=1;i<=x;i++)
	{
		if(i*i==x)
			printf("%d\n",x);
	}
}
void In(int a[],int n)
{
	int i;
	printf("Cac phan tu le la so chinh phuong co trong mang la:\n");
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		Cp(a[i]);
	}
}
int main()
{
	int n;
	int a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	NhapMang(a,n);
	In(a,n);
}
