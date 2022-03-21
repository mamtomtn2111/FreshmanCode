#include<stdio.h>
int   i,j,k,n=4;
int P[4][4],A[4][4];
//int 	A[4][4] = {{0, 5, 1000, 1000},
//			{50,0,15,5},
//			{30,1000,0,50},
//			{15,1000,5,0}};

void nhap(){

	printf("Nhap ma tran trong so\n");
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++){
		printf("C[%d][%d]=",i,j);
   		 scanf("%d",&A[i][j]);	
    	P[i][j]= 0;
	}
}
void xuat(int A[4][4]){
	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <=n; j++)
		
			printf("%5d", A[i][j]);
		    printf("\n"); 
	}	
}
void floyd(){
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
		xuat(A);
	printf("Ma tran P\n");
		xuat(P);
}
}
void vet(int u,int v){
	printf("Gia cua duong di tu %d den %d la: %d",u,v,A[u][v]);
	int ve[4],i=0;
	printf("\nVet duong di la: ");
	if(P[u][v]==0){
	printf("%d -> %d",u,v);}
	else 
	{int x=v;
	printf("%d",u);
	while(P[u][v]!=0){
		v=P[u][v];
		printf("->%d",v);
		if(v==0)break;
		}
	printf("->%d",x);	  
		}
}
int main()
{
nhap();
floyd();
int ok=1,u,v;
while(ok==1){
   printf("\nMoi nhap tiep");
   scanf("%d",&ok);
   if(ok==1){
   	printf("Nhap u,v: ");  scanf("%d%d",&u,&v);
   	vet(u,v);
   }
   else break;
   
}
//vet duong di
		
}



