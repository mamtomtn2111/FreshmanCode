#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void XuatMang(int a[],int n)
{
	printf("Cac phan tu da nhap vao la:\n");
	int i;
	srand(time(NULL));
	for(i=0; i<n; i++) 
		printf("a[%d]= %d\n",i,0-rand()%100);
}
int main()
{
	int n;
	int a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	XuatMang(a,n);
}
