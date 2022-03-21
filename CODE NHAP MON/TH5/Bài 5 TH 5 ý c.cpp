#include<stdio.h>
#include<math.h>
float s(int x, int n)
{
	float temp=0;
	int i;
	for(i=1;i<=n;i++)
		temp=sqrt(x+temp);
		return temp;
}
int main()
{
	int n;
	float x;
	printf("Nhap X=");
	scanf("%f",&x);
	printf("Nhap N=");
	scanf("%d",&n);
	printf("S=%f", s(x, n));
}
