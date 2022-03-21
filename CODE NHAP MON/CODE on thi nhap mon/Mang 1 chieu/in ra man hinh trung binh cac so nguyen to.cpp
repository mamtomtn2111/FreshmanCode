#include<stdio.h>
#include<math.h>
void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap so a[%d]",i);
		scanf("%d",&a[i]);
	}
}
int ngto(int n)
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
float TbNgto(int a[],int n)
{
	int i;
	float s=0,dem=0,tb;
	for(i=0;i<n;i++)
	{
		if(ngto(a[i]))
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
	ngto(n);
	TbNgto(a,n);
	printf("Gia tri trung binh cua so nguyen to la %10.2f",TbNgto(a,n));
}
