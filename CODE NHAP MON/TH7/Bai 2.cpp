#include<stdio.h>
#include<math.h>
int NT(int n)
{
	if(n==1) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
			else
		return 1;
}
void InNT(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		if(NT(a[i]))
			printf("a[%d]=%d",i,a[i]);
}
