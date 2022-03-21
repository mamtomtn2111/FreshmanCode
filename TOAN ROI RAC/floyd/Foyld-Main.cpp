/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/
#include<iostream>
#define oo 10000

using namespace std;

int A[50][50]; //ma tran trong so cua do thi.
int B[50][50]; //mang chua gia tri khoang cach ngan nhat tu i -> j.
int C[50][50]; //mang chua gia tri phan tu ngay sau i tren duong di ngan nhat i->j.
int n; //So dinh cua do thi.
int s; //Dinh dau cua do thi.
int e; //Dinh cuoi cua do thi.

void Nhap()
{
	cout<<"Nhap vao so dinh cua do thi: ";
	cin>>n;
	//Nhap ma tran trong so:
	for(int i = 1; i <= n; i++ )
	{
		for(int j = 1; j <= n; j++)
		{
			cout<<"\nNhap A["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];
			if(i != j && A[i][j] == 0)
				A[i][j] = oo;
		}
	}
}

void XuatFloydMaTran()
{
	int i,j,k;
	for (i=1;i<=n;i++)
	{
	
		for (j=1;j<=n;j++)
			{
				B[i][j]= A[i][j];
				C[i][j]= 0;
			}
	}
	for (k=1;k<=n;k++){
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
		       	if( B[i][k] + B[k][j] < B[i][j])
	 			{
					B[i][j]= B[i][k] + B[k][j];
					C[i][j]= k;
				}
			}
		}
		printf("\n\tBuoc k=%d\n",k);
		printf("Ma tran A\n");
	for(i = 1; i <= n; i++)
		{
			for(j = 1; j<= n; j++)
			{
				cout<<B[i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<"Ma tran P: "<<endl;
		for(i = 1; i <= n; i++)
		{
			for(j = 1; j<= n; j++)
			{
				cout<<C[i][j]<<"\t";
			}
			cout<<endl;
		}
	}	
}

void Floyd()
{
	//B[i][j] la mang chua duong di ngan nhat tu i -> j
	//C[i][j] la mang chua gia tri phan tu ngay sau cua i tren duong di ngan nhat tu i->j
	int i,j,k;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n ; j++)
		{
			B[i][j] = A[i][j];
			if(B[i][j] == oo)
				C[i][j] = 0;
			else C[i][j] = j;
		}
	}
	
	for(k = 1; k <= n; k++)
	{
		for(i = 1; i <= n; i++)
		{
			for(j = 1; j <= n; j++)
			{
				if(B[i][k] != oo && B[i][j] > (B[i][k] + B[k][j]))
				{
					B[i][j] = B[i][k] + B[k][j];
					C[i][j] = C[i][k];
				}	
			}
		}	
	}	
}

void XuatFloyd()
{
	if(B[s][e] >= oo)
	{
		cout<<"Khong tim duoc duong di !!";
	}
	else{
		cout<<"Duong di ngan nhat tu "<<s<<" -> "<<e<<" co do dai la: "<<B[s][e]<<endl;
		cout<<"Vet duong di: "<<s;
		while(s != e)
		{
			cout<<" -> "<<C[s][e];
			s = C[s][e];
		}
	}
}

int main()
{
	int n;
	Nhap();
	XuatFloydMaTran();
	do{
	cout<<"\nStart: ";
	cin>>s;
	cout<<"\nEnd: ";
	cin>>e;
	Floyd();
	XuatFloyd();
	cout<<"\n\nNhap 1 de tiep tuc\nNhap 2 de huy\nLua chon cua ban:";
	cin>>n;
	}while(n!=2);
}
