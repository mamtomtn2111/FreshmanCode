#include <iostream>
using namespace std;
int n = 0;
struct HS{
	string hoten;
	int ns;
	float toan, ly, hoa;
	float DTB;
};
struct NODE{
	HS data;
	NODE *next;
};

struct LIST{
	NODE *pHead;
	NODE *pTail;
};

// Nhap thong tin cua hoc sinh
void nhap(HS *z){
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, z->hoten);
	cout << "\nNhap nam sinh: ";
	cin >> z->ns;
	cout << "\nNhap diem mon toan: ";
	cin >> z->toan;
	cout << "\nNhap diem mon ly: ";
	cin >> z->ly;
	cout << "\nNhap diem mon hoa: ";
	cin >> z->hoa;
	z->DTB = (z->toan + z->ly + z->hoa) / 3;
	fflush(stdin);
}
//Xuat thong tin cua hoc sinh
void xuat(HS z){
	cout << "\nHo ten: " << z.hoten;
	cout << "\nNam sinh: " << z.ns;
	cout << "\nDiem toan: " << z.toan;
	cout << "\nDiem ly: " << z.ly;
	cout << "\nDiem hoa: " << z.hoa;
}
// Them hoc sinh vao danh sach
void KhoiTaoDS(LIST *l){
	l->pHead = l->pTail = NULL;
}
// Tao node hoc sinh
NODE *makeNode(HS z){
	NODE *p = new NODE();
	p->data = z;
	p->next = NULL;
	return p;
}
//THem hoc sinh vao cuoi
void ThemHocSinh(LIST *l, NODE *p){
	if(l->pHead == NULL){
		l->pHead = l->pTail = p;
	}else{
		l->pTail->next = p;
		l->pTail =p;
	}
	++n;
}
//Them hoc sinh vao dau
void ThemHocSinhVaoDau(LIST *l, NODE *p){
	if(l->pHead == NULL){
		l->pHead = l->pTail = p;
	}else{
		p->next = l->pHead;
		l->pHead =p;
	}
	++n;
}
//Them hoc sinh vao vi tri p
void ThemHocSinhVaoViTri(LIST *l, NODE *p, int vt){
	int dem = 0;
	if(l->pHead == NULL|| vt == 1){
		ThemHocSinhVaoDau(l,p);
	}else if(vt == n+1){
		ThemHocSinh(l,p);	
	}
	else
	{
		NODE *g = new NODE();
		for(NODE *k = l->pHead; k != NULL; k=k->next){
			++dem;
			if(dem == vt){
				p->next= k;
				g->next = p;
				break;	
			}
			g=k;
		}
	}
}
//Hien thi hoc sinh co diem trung binh >=8.0
void DTB_tren_8(LIST l){
	for(NODE *k = l.pHead; k != NULL; k=k->next){
		if(k->data.DTB >=8){
			cout << "============HS============" <<endl;
			xuat(k->data);
			cout << "\n========================" <<endl;
		}
	}
}
//Hien thi danh sach
void xuatDs(LIST l){
	int dem = 0;
	for(NODE *k = l.pHead; k!=NULL; k=k->next){
		++dem;
		cout << "============HS"<<dem<<"============" <<endl;
		xuat(k->data);
		cout << "\n============END============" <<endl;
	}
	cout << endl;
}
void Menu(LIST *l){
	int luachon;
	while(true){
		system("cls");
		cout << "\n\n\t\t\t================Menu================";
		cout << "\n\t\t1. Them hoc sinh vao danh sach";
		cout << "\n\t\t2. Hien thi danh sach";
		cout << "\n\t\t3. Them 1 hoc sinh vao vi tri p";
		cout << "\n\t\t4. Hien thi danh sach hoc sinh co DTB 3 mon toan, ly, hoa =>8.0";
		cout << "\n\t\t0. Thoat";
		cout << "\n\n\t\t\t================End================";
		
		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if(luachon < 0 || luachon > 4){
			cout << "\nLua chon cua ban khong hop le!" << endl;
			system("pause");
		}
		if(luachon == 1){
			HS z;
			cout << "\nNhap thong tin hoc sinh can them: "<< endl; 
			nhap(&z);
			NODE *p = makeNode(z);
			ThemHocSinh(l,p);
		}
		else if(luachon == 2){
			xuatDs(*l);
			system("pause");
		}else if(luachon == 3){
			int x; 
			do{
				cout << "\nNhap vi tri can them: ";
				cin >> x;
				if(x < 1 || x > n+1){
					cout << "\nVi tri them nam trong khoang [1;"<<n+1<<"]"<< endl;
					system("pause");
				}
			}while(x<1||x>n+1);
			HS z;
			nhap(&z);
			NODE *p = makeNode(z);
			ThemHocSinhVaoViTri(l,p,x);
		}else if(luachon == 4){
			DTB_tren_8(*l);
			system("pause");
		}else{
			break;
		}
	}
}
int main(){
	LIST l;
	KhoiTaoDS(&l);
	Menu(&l);
	
	return 0;
}
