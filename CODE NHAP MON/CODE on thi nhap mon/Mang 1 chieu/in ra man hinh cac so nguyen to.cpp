#include<stdio.h>
#include<math.h>

int KT(int n)
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
void InNgto(int n)
{
	int i;
	printf("Cac so nguyen to:");
	for(i=0;i<n;i++)
	{
		if(KT(i)==1)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int n;
	int i;
	printf("Nhap n:");
	scanf("%d",&n);
	KT(n);
	InNgto(n);
}
