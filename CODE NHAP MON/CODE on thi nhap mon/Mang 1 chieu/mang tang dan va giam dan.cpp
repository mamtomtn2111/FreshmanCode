#include<stdio.h>

void in(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nNhap so a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void out(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void increase(int a[],int n)
{
	int i,j,tg;
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			}
		}
}
void decrease(int a[],int n)
{
	int i,j,tg;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
int Max(int a[],int n)
{
	int i,max;
	max=a[0];
	for(i=1;i<n;i++)
		if(max<a[i])
			max=a[i];
		return max;
}
int Min(int a[],int n)
{
	int i,min;
	min=a[0];
	for(i=1;i<n;i++)
		if(min>a[i])
			min=a[i];
		return min;
}
int main()
{
	int a[100];
	int n;
	printf("Nhap so n:");
	do
	{
		scanf("%d",&n);
		if(n<=0) printf("Nhap lai so n di:");
	}while(n<=0);
	// mang vua nhap la :
	in(a,n);
	printf("\n+)Roll Back:");
	out(a,n);
	//Mang tang dan:
	increase(a,n);
	printf("\n\n+)Increase:");
	out(a,n);
	//mang giam dan:
	decrease(a,n);
	printf("\n\n+)Decrease:");
	out(a,n);
	//Gia tri max:
	printf("\n\n+)MAX:%d",Max(a,n));
	//Gia tri min:
	printf("\n\n+)MIN:%d",Min(a,n));	
}
