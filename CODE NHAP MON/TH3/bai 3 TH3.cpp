#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("Nhap N: ");
scanf("%d", &n);
int kt = 0;
/*Ki?m tra n có ph?i là s? nguyên t? hay không*/
if(n < 2)
kt = 1;
for(int i = 2; i <= sqrt(n); i++)
{
if(n % i == 0)
{
kt = 1;
break;
}
}
if(kt == 0)
printf("\nLa so nguyen to\n");
else
printf("\nKHONG La so nguyen to\n");
/*In ra các s? nguyên t?t <= n */
for(int i = 2; i <= n; i++)
{
kt = 0;
for(int j = 2; j <= sqrt(i); j++)
{
if(i%j==0)
{
kt = 1;
break;
}
}
if(kt == 0)
printf("%d ", i);
}
}
