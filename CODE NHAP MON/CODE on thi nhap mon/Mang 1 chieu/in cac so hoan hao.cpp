#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("Nhap mot so nguyen duong \n");
	scanf("%d", &n);
	int s = 0;
	for (int i = 1; i < n; i++) 
/* chay tu 1 den < x vì không the chia cho 0 và vì x%x =0 
nhung x không the là uoc cua x */
	if (n%i == 0)
		s += i;
	if (s == n)
		printf("%d la so hoan hao", n);
	else
		printf("%d khong phai la so hoan hao", n);
	getch();
}
