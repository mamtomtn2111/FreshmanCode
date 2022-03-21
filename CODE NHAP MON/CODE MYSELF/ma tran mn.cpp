#include <stdio.h>
#include <conio.h>

main()
{
	int m,n,i,j;
	printf("Nhap so cot m:");
	scanf("%d",&m);
	printf("Nhap so hang n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{
			for (j=1;j<=m;j++)
				printf("*");
			printf("\n");
		}
	getch();
}
