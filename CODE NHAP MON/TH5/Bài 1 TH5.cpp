#include<stdio.h>
#include<math.h>
#define PI 3.14
double f(int x)
{
	if(x<=0)
		return 0;
	else if(x<=2)
		return x*(x-1);
	else
		return x*x-sin (PI*x*x);
}
int main()
{
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	printf("f(%d)=%10.2f\n",x,f(x));
}
