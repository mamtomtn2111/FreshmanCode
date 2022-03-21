#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Nhap a,b:");
		scanf("%d%d",&a,&b);
	int x=abs(a) , y=abs(b),r;
	while(y!=0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	//x la uoc so chung lon nhat cua a va b.
	printf("Boi so chung nho nhat = %d",a*b/x);
}
