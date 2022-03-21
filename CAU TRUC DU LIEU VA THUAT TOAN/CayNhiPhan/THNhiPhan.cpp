#include<iostream>
using namespace std;

typedef int item;

struct Node{
	item key;
	Node *Left, *Right;
};


typedef struct Node *Tree;
Node* makeNode(Node *p, item x){
	p=new Node;
	p->key=x;
	p->Left=p->Right = NULL;
	return p;
}


Node* Input(Node *p, item x){
	cout<<"\nNode: ";
	cin>>x;
	if(x==0) 
		return NULL;
	p=makeNode(p,x);
	cout<<"Nhap con trai cua Node "<<x<<": ";
	p->Left=Input(p->Left,x);
		cout<<"Nhap con phai cua Node "<<x<<": ";
	p->Right=Input(p->Right,x);
	return p;
} 


void NLR(Tree T){//Root->Left->Right thu tu truoc
	if(T!=NULL){
		cout<<T->key<<" ";
		NLR(T->Left);
		NLR(T->Right);
	}
}


void LNR(Tree T){//Root->Left->Right thu tu truoc
	if(T!=NULL){
		LNR(T->Left);
		cout<<T->key<<" ";
		LNR(T->Right);
	}
}


void LRN(Tree T){//Root->Left->Right thu tu truoc
	if(T!=NULL){
		LRN(T->Left);
		LRN(T->Right);
		cout<<T->key<<" ";
	}
}

Node *TimX(Tree T, item x){
	if(T != NULL){
		if(T->key == x){
			Node *P = T;
			return P;
		}
		if(T->Left != NULL)
			return TimX(T->Left,x);
		if(T->Right != NULL)
			return TimX(T->Right,x);
	}
	else return 0;
}

int XuatChan(Tree T){
	if(T == NULL)
		return 0;
	else{
		if(T->key % 2 == 0)
			return T->key + XuatChan(T->Left) + XuatChan(T->Right);
		else return XuatChan(T->Left) + XuatChan(T->Right);
	}
}

int main(){
	Tree T;
	T=NULL;//khoi tao cay
	Node *p = NULL;
	item x;
	T = Input(p,x);
	cout<<"\nDuyet truoc\n";
	NLR(T);
	cout<<"\nDuyet sau\n";
	LRN(T);
	cout<<"\nDuyet giua\n";
	LNR(T);
	cout<<"\nNhap data can tim: ";
	cin>>x;
	p = TimX(T,x);
	if(p != NULL)
		cout<<"X ="<<p->key<<" co o trong cay";
	else cout<<"Khong tim thay x trong cay";
	
	cout<<"\nTong chan cac Node trong cay la: "<<XuatChan(T);
}
