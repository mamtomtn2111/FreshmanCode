#include<stdio.h>  
#include<math.h>
int main()
{
	int n,i,j,z;
	printf("\nn=");
	scanf("%d",&n);
	for(i=1;i<=n;i++) //Not 1<=n;
	{
		for(j=1;j<=n;j++)
		{
			float z=sqrt(i*i+j*j);
			if((int)z==z)
			if((z<=n)) //Not nessary if j = i + 1;
			printf("%d %d %f\n",i,j,z);
		}
	}
}
