#include<iostream>
#define MAX 100

using namespace std;

typedef int item;

struct Stack{
	int top;
	item data[MAX];
};

//Stack S;

void khoitao(Stack &S){
	S.top = 0;
}

int isNull(Stack S){
	return (S.top == 0);
}

int isFull(Stack S){
	return (S.top == MAX);
}

void push(Stack &S, item x){
	if(isFull(S))
		cout<<"\nNgan xep day !!";
	else{
		S.top ++;
		S.data[S.top] = x;
	}
}

item pop(Stack &S){
	item x;
	if(isNull(S))
		cout<<"\nDanh sach rong !!";
	else{
		x = S.data[S.top];
		S.top--;
	return x;
	}
}

void Nhap(Stack &S){
	item x;
	cout<<"Nhap gia tri ngan xep: ";
	do{
		cin>>x;
		if(x != 0) 
			push(S,x);
	}while(x != 0);
}

void Xuat(Stack S){
	while(S.top != 0)
	cout<<" "<< pop(S);
}

void themK(Stack &S, int k, item x){
	if(k < 1 || k > S.top)
		cout<<"\nVi tri chen ko hop le.";
		
	else{
		Stack T;
		khoitao(T);
		while( S.top > k)
		{
			push(T, pop(S));
		}
		push(S, x);
		while(T.top != 0){
			push(S, pop(T));
		}
	}
}

void xoaK(Stack &S, int k, item &x){
	//k = k + 1;
	if(k < 1 || k > S.top)
		cout<<"\nVi tri xoa ko hop le.";
		
	else{
		Stack T;
		khoitao(T);
		while( S.top != k)
		{
			push(T, pop(S));
		}
		x=pop(S);
		while(T.top != 0){
			push(S, pop(T));
		}
	}
}


int main(){
	int x;
	int k;
	Stack S;
	khoitao(S);
	Nhap(S);
	Xuat(S);
	cout<<"\nPhan tu o dinh cua ngan xep la: "<<S.data[S.top];
	
	//Push phan tu vao dau danh sach
	cout<<"\nNhap phan tu thay the vao dau stack: ";
	cin>>x;
	pop(S);
	push(S,x);
	Xuat(S);
	
	//Push vao vi tri k
	cout<<"\nNhap vi tri can them:";
	cin>>k;
	cout<<"\nNhap phan tu can them: ";
	cin>>x;
	themK(S,k,x);
	Xuat(S);
	
	//Pop vi tri k
	cout<<"\nNhap vi tri can xoa:";
	cin>>k;
	xoaK(S,k,x);
	Xuat(S);
}
