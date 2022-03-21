//Nhóm 6
//Tran Nguyen Dung
//Nguyen Vu Hai
//Le Tien Thanh

#include<iostream>
#include<cmath>

using namespace std;

int arr[100];


//x1, y1 la vi tri quan hau dat vao

//Ham check xem dat quan hau co hop ly khong
//arr[i] == y1 la dieu kien kiem tra co cung hang khong
//abs(i-x1) == abs(arr[i] - y1) là dieu kien kiem tra duong cheo
//xet dieu kien, bat buoc phai la 1 TH TRUE moi duoc phep dat hau, nen return 1 ngoai vong for
bool CheckQueen(int x1, int y1){
	for(int i = 1; i < x1; i++){
		if(arr[i] == y1 || abs(i-x1) == abs(arr[i] - y1) )
			return 0;
	}return 1;
}

void Output(int n){
	for(int i = 1; i <= n; i++)
		cout<<" "<<arr[i];
	cout<<"\n";
}

//ap dung thuat toan backtracking
void Try(int i, int n){
	for(int j = 1; j <= n; j ++){
		if(CheckQueen(i,j)){
			arr[i] = j;
			if(i == n)
				Output(n);
			Try(i+1, n);
		}
	}
}

int main(){
	int n = 4;
	cout<<"Input: cho ban co N n*n va co n quan hau "<<endl;
	cout<<"Output: in ra so cach xep va vi tri quan hau cua tung cach xep"<<endl;
	cout<<"Nhap n: ";
	cin>>n;
	if(n<4){
		cout<<"Ban co 3 x 3 hoac nho hon khong the xep n hau !";
		return 0;
	}	
	else{
		Try(1,n);
		return 0;
	}	
}
