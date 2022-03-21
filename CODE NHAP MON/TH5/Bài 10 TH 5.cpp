#include<stdio.h>
#include<math.h>
int KTNT(int n)
{
	if(n<=1)
		return 0;
	int i;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			return 0;
		return 1;
}
int main()
{
	int n;
	printf("Nhap N=");
	scanf("%d",&n);
	
	int i;
	for(i=2;i<=n;i++)
	{
		if(KTNT(i))
			printf("\n%d",i);
	}
}
