//De 1
//y a
typedef int item;

struct Node{
	item data;
	Node *next;
};

Node *MakeNode(Node *P,item x){
	P = new node;
	P->data = x;
	P->next = NULL;
	return P;
}

//y b
void insert_first(Node &P){
	int x;
	cout<<"Nhap vao x";
	cin>>x;
	Node *P;
	P = MakeNode(P,x);
	P->next = L;
	L = P;
}


//Y C
int DemChan(Node &P){
	int i = 0;
	while(P){
		if(P->data % 2 < 0){
			i++;
		}
	}
	return i;
}
