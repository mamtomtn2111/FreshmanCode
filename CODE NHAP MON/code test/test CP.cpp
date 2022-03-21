#include<stdio.h>
#include<math.h>

void In(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap so a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void OutCp(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(sqrt(a[i])*sqrt(a[i])==a[i])
			printf("%d ",a[i]);
	}
}
int main()
{
	int a[100],n;
	printf("Nhap vao so n:");
	scanf("%d",&n);
	In(a,n);
	OutCp(a,n);
}
