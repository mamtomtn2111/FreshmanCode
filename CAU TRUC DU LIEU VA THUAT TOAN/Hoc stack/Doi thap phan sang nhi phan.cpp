#include<iostream>
#define N 100

using namespace std;

typedef int item;

struct Stack{
    item elements[N];
    int top;
};

void init_S(Stack *S){
    S -> top =-1;
}

int isEmpty_S(Stack S){
    if(S.top == -1)
        return 1;
    else 
		return 0;
}

int isFull_S(Stack S){
    if(S.top == N - 1)
        return 1;
    else 
		return 0;
}


//Day 1 phan tu x vao ngan xep
int push(item x, Stack *S){
    if(!isFull_S(*S)){
        S -> top++;
        S -> elements [S -> top] = x;
    }
    else cout<<"\nNgan xep day";
}

//Nhac 1 phan tu ra khoi ngan xep
int pop(Stack *S, item *x){
    if(!isEmpty_S(*S)){
        *x = S->elements[S->top];
        S->top--;
    }
}

int Convert(Stack S, int n){
	while (n != 0){
        int r;
        r = n % 2;
        push(r, &S);
        n = n /2;
    }
    cout<<"\nDang nhi phan cua so vua nhap la: ";
    while (!isEmpty_S(S)){
        int x;
        pop(&S, &x);
        cout<< x;
    }
}


int main(){
    int n;
    Stack S;
    init_S(&S);
    cout<<"Nhap vao mot so thap phan: ";
    cin>>n;
    Convert(S,n);
    return 0;
}
