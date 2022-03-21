#include<stdio.h>
#include<math.h>
int GiaiThua(int n)
{
	int s=1;
	if(n == 0) return 1;
	int i;
	for(i=1;i<=n;i++)
		s=s*i;
	return s;
}
float S(int n)
{
	float t=0;
	int i;
	for(i=0;i<=n;i++)
		t+=pow(-2,i)/GiaiThua(i);
	return t;
}
int main()
{
	int n;
	printf("Nhap N=");
	scanf("%d",&n);
	printf("S=%d",S(n));
}
