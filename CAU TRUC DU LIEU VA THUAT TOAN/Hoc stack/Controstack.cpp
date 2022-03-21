#include<iostream>
#include<stdlib.h>

using namespace std;

typedef int item;

struct Node{
	Node *Next;
	item Data;
};

struct Stack{
	Node *top;
};

void khoitao(Stack &S){
	S.top = 0;
}

int isNULL(Stack S){
	return (S.top == NULL);
}


Node *make_Node(item x){
	Node *P = (Node*) malloc (sizeof(Node));
	P->Data = x;
	P->Next = NULL;
	return P;
}

int Lenstack(Stack S){
	Node *P = S.top;
	int i = 0;
	while (P != NULL){
		i++;
		P = P->Next;
	}
	return i;
}

void push(Stack &S, item x){
	Node *P = make_Node(x);
	P->Next = S.top;
	S.top = P;
}

item pop(Stack &S){
	if(!isNULL(S)){
		item x = S.top->Data;
		S.top = S.top->Next;
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
	cout<<" "<<pop(S);
}

void themK(Stack &S, int k, item &x){
	if(k < 1 || k > Lenstack(S))
		cout<<"\nVi tri chen ko hop le.";
		
	else{
		Stack T;
		khoitao(T);
		while( Lenstack(S) > k)
		{
			push(T, pop(S));
		}
		push(S, x);
		while(T.top != 0){
			push(S, pop(T));
		}
	}
}

void xoaK(Stack &S, int k, item x){
	//k = k + 1;
	if(k < 1 || k > Lenstack(S))
		cout<<"\nVi tri xoa ko hop le.";
		
	else{
		Stack T;
		khoitao(T);
		while( Lenstack(S) != k)
		{
			push(T, pop(S));
		}
		x=pop(S);
		while(Lenstack(T) != 0){
			push(S, pop(T));
		}
	}
}

void Increase(Stack &S){
	int mang[50];
	int z = 0;
	while(Lenstack(S) != 0){
		mang[z] = pop(S);
		z++;
	}
	int temp = 0;
	for(int i = 0; i < z + 1; i++){
		for(int j = i + 1; j < z;j++){
			if(mang[i] < mang[j]){
				temp = mang[i];
				mang[i] = mang[j];
				mang[j] = temp;
			}
		}
	}
	for(int i = 0; i < z; i++){
		push(S,mang[i]);
	}
	cout<<"\nXuat stack tang dan: ";
	Xuat(S);
}

int main(){
	int x;
	int k;
	Stack S;
	khoitao(S);
	Nhap(S);
	Xuat(S);
//	cout<<"\nPhan tu o dinh cua ngan xep la: "<<S.data[S.top];
	
	//Push phan tu vao dau danh sach
//	cout<<"\nNhap phan tu thay the vao dau stack: ";
//	cin>>x;
//	pop(S);
//	push(S,x);
//	Xuat(S);
	
	//Push vao vi tri k
//	cout<<"\nNhap vi tri can them:";
//	cin>>k;
//	cout<<"\nNhap phan tu can them: ";
//	cin>>x;
//	themK(S,k,x);
//	Xuat(S);
	
	//Pop vi tri k
//	cout<<"\nNhap vi tri can xoa:";
//	cin>>k;
//	xoaK(S,k,x);
//	Xuat(S);
	
	//Stack tang dan
	Increase(S);
}
