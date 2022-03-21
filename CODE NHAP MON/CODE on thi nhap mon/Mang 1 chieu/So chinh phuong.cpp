#include<stdio.h>
#include<math.h>
void In(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int KtChinhPhuong(int n)
{
	if(sqrt(n)*sqrt(n) == n)
		return 1;
	return 0;
}
int OutChinhPhuong(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(KtChinhPhuong(a[i])==1)
			printf("%d ",a[i]);
	}
}

int main()
{
	int a[100];
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	In(a,n);
	OutChinhPhuong(a,n);
}

