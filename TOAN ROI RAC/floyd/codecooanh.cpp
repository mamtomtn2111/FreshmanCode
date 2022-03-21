#include<stdio.h>
int main()
{
	int   i,j,k,n=4;
	int A[10][10],P[10][10],C[10][10];
	printf("Nhap ma tran trong so\n");
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++){
			printf("C[%d][%d]=",i,j);
	 	   scanf("%d",&C[i][j]);	
		}
	 
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			{
				A[i][j]= C[i][j];
				P[i][j]= 0;
			}
	for (k=1;k<=n;k++){
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
		       	if( A[i][k] + A[k][j] < A[i][j])
	 			{
					A[i][j]= A[i][k] + A[k][j];
					P[i][j]= k;
				}
				printf("Buoc k=%d\n",k);
				printf("Ma tran A\n");
		for (i = 1; i <=n; i++)
			{
				for (j = 1; j <=n; j++)
					printf("%5d", A[i][j]);
				    printf("\n"); 
			}
			printf("Ma tran P\n");
			for (i = 1; i <=n; i++)
			{
				for (j = 1; j <=n; j++)
					printf("%5d", P[i][j]); 
				    printf("\n"); 
			}

}
//vet duong di
		
}



