#include<iostream>
#include<stdlib.h>

using namespace std;


typedef struct Node{
	int key;
	//int data;
	Node *left, *right;
}Node;

typedef Node *SearchTree;

//Node *MakeNode(SearchTree *P, int x){
//	P = new Node;
// P->key = x
//	P->left = P->right = NULL;
//	return P;
//}


Node *find(SearchTree T, int x){
	if (T == NULL)
        return NULL;
    if (x > T->key)
        return find(T->right, x);
    if (x < T->key)
        return find(T->left, x);
    return T;
}

void InsertTree(SearchTree &T, int x){
	Node *V,*P,*N;
	int found = 0;
	N = new Node;
	if(N != NULL){
		N->left = NULL;
		N->right = NULL;
		N->key = x;
		if(T == NULL)
			T = N;// Neu cay rong nut moi them chinh la goc cua cay
		else{
			V = T;
			while((V != NULL) && (!found)){
				if(x < V->key){
					P = V;
					V = V->left;
				}
				else if(x > V->key){
					P = V;
					V = V->right;
				}
				else found = 1;
			}
			if(found == 0){
				if(x < P->key)
					P->left = N;
				if(x > P->key)
					P->right = N;
			}
		}
	}
	else cout<<"\nKhong cap phat duoc bo nho";
}

void NhapCay(SearchTree &T){
	int x;
	T = NULL;
	cout<<"\nNhap x =";
	cin>>x;
	while (x != 0){
		InsertTree(T,x);
		cout<<"\nNhap x =";
		cin>>x;
	}
}

void NLR(SearchTree &T){
	if(T != NULL){
		cout<<"\t"<<T->key;
		NLR(T->left);
		NLR(T->right);
	}
}


void LNR(SearchTree T){
	if(T != NULL){
		LNR(T->left);
		cout<<"\t"<<T->key;
		LNR(T->right);
	}
}

void LRN(SearchTree T){
	if(T != NULL){
		LRN(T->left);
		LRN(T->right);
		cout<<"\t"<<T->key;
	}
}

int main(){
	SearchTree T;
	NhapCay(T);
	cout<<"\nDuyet trai: ";
	NLR(T);
	cout<<"\nDuyet giua: ";
	LNR(T);
	cout<<"\nDuyet phai: ";
	LRN(T);
	cout<<"\nTim kiem: ";
	Node *P = NULL;
	int x;
	cout<<"\nNhap vao x tim kiem: ";
	cin>>x;
	P = find(T,x);
	if(P!=NULL)
		cout<<"X nam trong cay !";
	else cout<<"Khong tim thay x";
}
