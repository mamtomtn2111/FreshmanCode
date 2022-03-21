#include<stdio.h>
#include<math.h>

int main()

{
	int n;
	int a[100];
	printf("nhap N;");
	scanf("%d",&n);
	//nhap các phân tu tu mang
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
}
