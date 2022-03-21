#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 10000 
#define TRUE 1 
#define FALSE  0 
int A[50][50];// ma tr?n tr?ng s? c?a d? th?.
int D[50][50];//la mang chua cac gia tri khoan cach ngan nhat tu i den j
int S[50][50];//S la mang chua gia tri phan tu ngay sau cua i tren duong di ngan nhat tu i->j */
int n;//s? d?nh c?a d? th?
int u;//d?nh d?u c?a du?ng di
int v;//d?nh cu?i c?a du?ng di
void Init(){
	 freopen("FLOYD.IN", "r", stdin);
	 cin>>n>>u>>v;
	 cout<<"So dinh cua do thi: "<< n <<endl;
	 //nh?p ma tr?n tr?ng s?
	 for (int i = 1; i <= n; i++){
	  for (int j = 1; j <= n; j++){
	   cin>>A[i][j];
	   if (i != j && A[i][j] == 0)
	    A[i][j] = MAX;
	  }
	 }
}
void Result(){
	 if (D[u][v] >= MAX) {
	  cout<<"Khong co duong di";
	 }
	 else {
	  cout<<"Duong di ngan nhat tu "<<u<<" den "<<v<< " co do dai la "<<D[u][v]<<endl;
	  cout<<"Duong di: "<<u;//in d?nh d?u du?i d?ng char.
	  while (u != v) {
	   cout<<"->"<<S[u][v];//in ra du?ng di du?i d?ng char.
	   u = S[u][v];
	  }
	 }
}
void Floy(){
	 int i, j, k;
	 for (i = 1; i <= n; i++){
	  for (j = 1; j <= n; j++){
	   D[i][j] = A[i][j];
	   if (D[i][j] == MAX) S[i][j] = 0;
	   else S[i][j] = j;
	  }
	 }
	 /* Mang D[i,j] la mang chua cac gia tri khoan cach ngan nhat tu i den j
	 Mang S la mang chua gia tri phan tu ngay sau cua i tren duong di
	 ngan nhat tu i->j */
	 for (k = 1; k <= n; k++){
	  for (i = 1; i <= n; i++){
	   for (j = 1; j <= n; j++){
	    if (D[i][k] != MAX && D[i][j] > (D[i][k] + D[k][j])){
	     // Tim D[i,j] nho nhat co the co 
	     D[i][j] = D[i][k] + D[k][j];
	     S[i][j] = S[i][k];
	     //ung voi no la gia tri cua phan tu ngay sau i 
	    }
	   }
	  }
	 }
}
int main(){
 Init();
 Floy();
 Result();
 getch();
}
