#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int KT(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}	
	return 1;
}

void DocFile(int *a,int n)
{
	printf("Phan tu nguyen to doc duoc tu file la:\n");
	FILE *p=fopen("MangA.txt","r"); 
	int i=0;
	while(!feof(p))
	{
			fscanf(p,"%d ",a+i);
			i++;
			n=i;
	}
	for(int i=0;i<n;i++)
	{
		if(KT(*(a+i))==1)
		printf("%d",*(a+i));
	}
	fclose(p);
}

int main()
{
	int n;
	int *a=(int*) malloc(sizeof(int)*1000);
	DocFile(a,n);
	return 0;
}
