#include<iostream>
#include<stdlib.h>
#define MAX 100

using namespace std;

typedef int item;

struct Queue{
	item elem[MAX];
	int size;
	int front,rear;
};


void init_Q(Queue &Q){
	Q.size = 0;
	Q.front = 0;
	Q.rear = -1;
}

int isEmpty_Q(Queue Q) {
	return (Q.size == 0);
}

int isFull_Q(Queue Q) {
	return (Q.size == MAX - 1);
}

bool Push(Queue &Q, item x){
	if(isFull_Q(Q)){
		cout<<"Hang doi day !";
		return false;
	}
	else{
		if(Q.rear != MAX - 1)
			Q.rear = Q.rear + 1;
		else
			Q.rear = 0;
			Q.elem[Q.rear] = x;
			Q.size ++;
	}
		return true;
}

item Pop(Queue &Q){
	item x;
	if(isEmpty_Q(Q)){
		cout<<"Hang doi rong!";
	}
	else{
		x = Q.elem[Q.front];
		if(Q.front != MAX - 1)
			Q.front = Q.front + 1;
		else Q.front = 0;
	}
	Q.size--;
	return x;
}

void Output(Queue Q){
	if(isEmpty_Q(Q))
		cout<<"Hang doi rong!";
	else{
		for(int i = Q.front; i <= Q.rear;i++){
			cout<<Q.elem[i]<<"\t";
			cout<<endl;
		}
	}
}

void Input(Queue &Q){
	int n;
	item x;
	do{
		cout<<"Nhap so phan tu Queue";
		cin>>n;
	}while(n>MAX || n < 1);
	for(int i = 0; i < n;i++){
		cout<<"Nhap phan tu thu"<<i<<": ";
		cin>>x;
		Push(Q,x);
	}
}

item DeleteQ(Queue &Q){
	if(isEmpty_Q(Q))
		cout<<"Hang doi rong !";
	else{
		item x = Q.elem[Q.front];
		if(Q.size == 1)
			init_Q(Q);
		else{
			if(Q.front != MAX - 1)
				Q.front = Q.front + 1;
				else Q.front = 0;
				Q.size--;
		}
		return x;
	}
}

item Delete_K(Queue &Q,int k){
	Queue q;
	item x;
	if(isEmpty_Q(Q))
		cout<<"Hang doi rong!";
	else{
		while(Q.front < k){
			Push(q,Q.elem[Q.front]);
			Q.front++;
		}
		x = Pop(Q);
		while(q.rear > 0){
			Push(Q,q.elem[q.rear]);
			q.rear--;
		}
		return x;
	}
}

int main() {
	Queue Q;
	init_Q(Q);
	Input(Q);
	cout<<"\nXuat mang hien co "<<endl;
	Output(Q);
	cout<<"\nXoa phan tu"<<endl;
	DeleteQ(Q);
	Output(Q);
	cout<<"\n";
	cout<<"Moi ban chon vi tri thu k de xoa";
	Delete_K(Q,1);
	Output(Q);
}
