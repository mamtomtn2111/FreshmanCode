#include<stdio.h>

int main()
{
	int n,a,b,c,tg;
	printf("Nhap vao so nguyen gom 3 chu so:");
	do
	{
		scanf("%d",&n);
		if(n<100 && n>=1000)
			printf("Nhap sai so roi, try again:");
	}while(n<100 && n>=1000);
	
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	if(a>b)
	{
		tg=a;
		a=b;
		b=tg;
	}
	if(b>c)
	{
		tg=b;
		b=c;
		c=tg;
	}
	if(a>b)
	{
		tg=a;
		a=b;
		b=tg;
	}
	printf("Cac so theo thu tu tang dan:%d%d%d",a,b,c);
}
