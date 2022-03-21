/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>
#include <unistd.h>
using namespace std;

typedef int item;
struct Node{
	item data;
	Node *next;
};

typedef struct Node *List;

//Tao node
Node *make_Node(Node *P, item x){
	P = new Node;
	P -> next = NULL;
	P -> data = x;
	return P;
}

int len(List L){
	Node *p = L;
	int d = 0;
	while (p != NULL){
		d++;
		p = p -> next;
	}
	return d;
}

//Chen mot node vao dau danh sach
void insert_first(List &L, item x){
	Node *P;
	P = make_Node(P,x);// tao 1 node P
	P -> next = L;// Cho P tro den L
	L = P;//L tro ve P
}
//them o vi tri k
void insert_K(List &L, item x){
	Node *P, *Q = L;
	int i = 1;
	int k;
	cout<<"\nNhap vao vi tri muon them: ";
	cin>>k;
	if(k<1 || k>len(L) + 1)
		cout<<"Vi tri chen khong hop le";
	else{
		P = make_Node(P,x);
		if(k == 1)
			insert_first(L,x);//chen vao vi tri dau tien
		else{
			while(Q != NULL && i != k - 1){
				i++;
				Q = Q -> next;
			}
			P->next = Q->next;
			Q->next = P;
		}
	}
}

//Kiem tra ds rong
bool isEmpty(List L){
	if(L == NULL)
		return true;
	else return false;
}

void del_first(List &L, item &x){
	x = L->data; //Lay gia tri data neu can dung
	L = L->next;//Cho L tro den Node thu 2 trong danh sach
}

void del_K(List &L, item &x, int k){
	Node *P = L;
	int i = 1;
	if(isEmpty(L))
		cout<<"\nDanh sach rong khong can xoa !";
	else{
		if (k < 1 || k > len(L))
			cout<<"\nVi tri xoa khong hop le ! ";
		else{
			if(k == 1)
				del_first(L,x);//Xoa vi tri dau tien
			else{
				while(P != NULL && i != k -1){
					P = P->next;
					i++;
				}
//				x = P->data;
				P->next = P->next->next;
			}
		}
	}
}


//Xoa phan tu x
int search(List &L, item x){
	Node *P = L;
	int i = 1;
	while (P != NULL && P->data != x){
		P = P->next;
		i++;
	}
	if(P != NULL)
		return i;
	else 
		return 0;
}

void XoaX(List &L, item x){
	Node *P = L;
	int k = search(L,x);
	if(k == 0)
		cout<<"Khong co phan tu de xoa !";
	else 
	do{
			del_K(L,x,k);
			k = search(L,x);
	}while(k != 0);
}

void Chan(List &L){
    Node *P = L;
    cout << "\nCac phan tu chan la: ";
    while(P){
        if(P->data % 2 == 0){
            cout << P->data << " ";
        }
        P = P->next;
    }
}

//Khoi tao ds rong
void init(List &L){
	L = NULL;
}

void input(List &L){
	Node *p;
	int i = 0;
	item x;
	do{
		i++;
		cout<<"Nhap vao phan tu thu "<<i<<": ";
		cin>>x;
		if(x != 0){
			make_Node(p,x);
			p->next=L;
			L=p;
		}
	}while(x != 0);
}

void output(List L){
	Node *p = L;
	cout<<"Danh sach la: \n";
	if(isEmpty(p))
		cout<<"\nDanh sach rong";
	else
	while(p != NULL){
		cout<<p -> data<<"  ";
		p= p->next;
	}
}


void Tach(List &L){
	List M;
	init(M);
	Node *p=L, *q = M;
	while( p != NULL){
		if(p -> data % 2 == 0){
			q = new Node;
			q->next = NULL;
			q ->data = p ->data;
			q -> next = M;
			M = q;
		}
		p = p ->next;
	}
	output(M);
}


int main(){
	List L;
	item x;
	init(L);
	input(L);
	output(L);
	int k;
	//Them phan tu vao danh sach
	cout<<"\nNhap vao phan tu x: ";
	cin>>x;
	make_Node(L,x);
	insert_K(L,x);
	output(L);
	cout<<"\nSo luong phan tu la : "<<len(L);
	sleep(3);

	cout<<"\nNhap vao vi tri muon xoa: ";
	cin>>k;
	//So luong phan tu trong danh sach
	del_K(L,x,k);
	output(L);
	cout<<"\nSo luong phan tu la : "<<len(L);
	sleep(3);
	//Phan tu chan trong danh sach
	Tach(L);
	sleep(3);
	//Function dang hong khong the thuc hien
	cout<<"\nNhap vao phan tu ma ban muon xoa:";
	cin>>x;
	XoaX(L,x);
	output(L);
}
