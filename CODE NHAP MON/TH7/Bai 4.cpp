#include<stdio.h>
void XuatMang(int a[],int n)
{
	printf("Cac phan tu da nhap vao la:\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=0\n",i);
	}
}
int main()
{
	int n;
	int a[n];
	printf("Nhap n;");
	scanf("%d",&n);
	XuatMang(a,n);
}
