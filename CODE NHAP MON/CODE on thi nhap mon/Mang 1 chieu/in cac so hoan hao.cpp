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
/* chay tu 1 den < x v� kh�ng the chia cho 0 v� v� x%x =0 
nhung x kh�ng the l� uoc cua x */
	if (n%i == 0)
		s += i;
	if (s == n)
		printf("%d la so hoan hao", n);
	else
		printf("%d khong phai la so hoan hao", n);
	getch();
}
