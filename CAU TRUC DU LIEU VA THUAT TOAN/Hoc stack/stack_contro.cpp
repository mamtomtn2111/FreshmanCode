#include <iostream>
using namespace std;
//khai bao
typedef int item;
struct Node{
	Node *next;
	item Data;
};
struct Stack{
	Node *top;
};
//khoi tao ds rong
void khoitao(Stack &S){
	S.top = NULL;
}
//kiemtra ngan xep rong
int ktrong(Stack S){
	return(S.top == NULL);
}
//tao node moi
Node *MakeNode (item x)
{
	Node *P = new Node;
	P->next = NULL;
	P->Data = x;
	return P;	
}
int len(Stack S){
	Node *P = S.top;
	int i = 0;
	while(P != NULL){
		i++;
		P = P->next;
	}
	return i;
}
void push(Stack &S, item x){
	Node *P = MakeNode(x);
	P->next = S.top;
	S.top = P;
}
item pop(Stack &S)
{
	if(!ktrong(S)){
		item x = S.top->Data;
		S.top = S.top->next;
		return x;
	}
}
void nhap(Stack &S){
	item x;
	cout<<"Nhap gia tri cho ngan xep:\n ";
	do{
		cin>>x;
		if(x != 0)
			push(S,x);
	}while(x != 0);
}
void xuat(Stack S){
	item x;
	while(S.top != 0)
		cout<<pop(S)<<"		";
	
}
void themK(Stack &S, int k, item x){
	if(k < 1 || k > len(S))
		cout<<"\nVi tri chen ko hop le.";
		
	else{
		Stack T;
		khoitao(T);
		int t = len(S) - k;
		while( t >= 0)
		{
			push(T, pop(S));
			t--;
		}
		push(S, x);
		while(T.top != NULL){
			push(S, pop(T));
		}
	}
}
void xoaK(Stack &S, int k){
	if(k < 1 || k > len(S))
		cout<<"\nVi tri chen ko hop le.";
		
	else{
		Stack T;
		khoitao(T);
		int t = len(S) - k;
		while( t >= 1)
		{
			push(T, pop(S));
			t--;
		}
		pop(S);
		while(T.top != NULL){
			push(S, pop(T));
		}
	}
}
void chan(Stack &S){
	Stack T;
	khoitao(T);
	int t = len(S);
	while(t > 0){
		if(S.top->Data % 2 == 0){
			push(T, pop(S));
			pop(S);
		}
	while(T.top != 0)
		cout<<pop(T)<<"		";
	}
}

int main(){
	Stack S;
	khoitao(S);
	nhap(S);
	xuat(S);
//	int k;
//	cout<<"\nNhap vi tri can them: ";
//	cin>>k;
//	int x;
//	cout<<"\nNhap x can them: ";
//	cin>>x;
//	themK(S, k, x);
//	xuat(S);
//	cout<<"\nNhap vi tri can xoa: ";
//	cin>>k;
//	xoaK(S, k);
//	xuat(S);
	cout<<"\n\n";
	chan(S);
}
