#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Nhap N:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		s+=i;
		i++;
		printf("\n tong s=%d",s)
	}
}
