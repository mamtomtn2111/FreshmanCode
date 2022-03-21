#include<stdio.h>
void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
float XuatMang(int a[],int n)
{
	int i;
	float s=0,dem=0,tb;
	for(i=0;i<n;i++)
	{
		if(a[i]%5==0)
		{
			s+=a[i];
			dem++;
		}
	}
	tb=s/dem;
	if(dem==0)
		return 0;
	return tb;
}
int main()
{
	int i;
	int n;
	int a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
	printf("TB cac so chia het cho 5:%10.2f",XuatMang(a,n));
}
