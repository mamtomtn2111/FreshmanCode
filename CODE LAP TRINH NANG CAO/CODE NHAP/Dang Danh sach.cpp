#include<stdio.h>
#include<stdlib.h>
typedef int item; 
struct Node  //Dinh nghia 1 nut
{
    item Data; 
    Node *next; 
};
typedef Node *List; // Dinh nghia danh sach
  
// Ham khoi tao danh sach ban dau rong
void Init (List &L) 
{
    L=NULL; 
}
 // Ham kiem tra danh sach rong
int Isempty (List L)
{
    return (L==NULL);
}
 
 // Ham tinh do dai danh sach
int len (List L) 
{
    Node *P=L; 
    int i=0; 
    while (P!=NULL) 
    {
        i++; 
        P=P->next; 
    }
    return i; 
}
 // Ham tao nut
Node *Make_Node (Node *P, item x)
{
    P = (Node *) malloc (sizeof (Node));
    P->next = NULL; 
    P->Data = x; 
    return P; 
}
 // Ham chen 1 phan tu vao dau danh sach
void Insert_first (List &L, item x) 
{
    Node *P; 
    P = Make_Node(P,x); 
    P->next = L; 
    L = P;
}
 // Ham chen phan tu vao vi tri k bat ki
void Insert_k (List &L, item x, int k)
{
    Node *P, *Q = L; 
    int i=1;
    if (k<1 || k> len(L)+1) printf("Vi tri chen khong hop le !"); 
    else
    {
        P = Make_Node(P,x);
        if (k == 1) Insert_first(L,x); 
        else 
        {
            while (Q != NULL && i != k-1) 
            {
                i++;
                Q = Q->next;
            }
            P->next = Q->next; 
            Q->next = P;
        }
    }
}
 // Ham tim kiem
int Search (List L, item x) 
{
    Node *P=L; 
    int i=1;
    while (P != NULL && P->Data != x) 
    {
        P = P->next;
        i++;
    }
    if (P != NULL) return i; 
    else return 0; 
}
  // Ham xoa phan tu ra khoi dau danh sach
void Del_frist (List &L, item &x) 
{
    x = L->Data; 
    L = L->next; 
}
  // Ham xoa phan tu ra khoi vi tri k bat ky trong danh sach- xoa khi biet vi tri
void Del_k (List &L, item &x, int k) 
{
    Node *P=L;
    int i=1;
    if (k<1 || k>len(L)) printf("Vi tri xoa khong hop le !"); 
    else
    {
        if (k==1) Del_frist(L,x); 
        else 
        {
            while (P != NULL && i != k-1) 
            {
                P=P->next;
                i++;
            }
            P->next = P->next->next; 
        }
    }
}
 // Ham xoa mot phan tu x ra khoi danh sach- xoa khi biet gia tri
void Del_x (List &L, item x) 
{
    while (Search(L,x)) Del_k (L,x,Search(L,x)); 
}
 // Ham nhap
void Input (List &L) 
{
    int i=0; 
    item x;
    do
    {
        i++;
        printf ("Nhap phan tu thu %d : ",i);
        scanf("%d",&x);
        if (x != 0) Insert_k(L,x,len(L)+1);
    } while(x != 0); 
}
 // Ham xuat
void Output (List L) 
{
    Node *P=L;
    while (P != NULL)
    {
        printf("%5d",P->Data);
        P = P->next;
    }
    printf("\n");
}
 
int main()
{
    List L;
    Init(L);
    Input(L);
    Output(L);
 
    int lua_chon;
    printf("Moi ban chon phep toan voi DS LKD:");
    printf("\n1: Kiem tra DS rong");
    printf("\n2: Do dai DS");
    printf("\n3: Chen phan tu x vao vi tri k trong DS");
    printf("\n4: Tim mot phan tu trong DS");
    printf("\n5: Xoa phan tu tai vi tri k");
    printf("\n6: XOa phan tu x trong DS");
    printf("\n7: Thoat");
    do
    {
        printf("\nBan chon: ");
        scanf("%d",&lua_chon);
    switch (lua_chon)
    {
        case 1:
        {
            if (Isempty(L)) printf("DS rong !");
            else printf ("DS khong rong !");
            break;
        }
        case 2: printf ("Do dai DS la: %d.",len(L));break;
        case 3:
        {
            item x;
            int k;
            printf ("Nhap phan tu can chen vao DS: ");
            scanf("%d",&x);
            printf ("Nhap vi tri can chen: ");
            scanf ("%d",&k);
            Insert_k (L,x,k);
            printf ("DS sau khi chen:\n");
            Output(L);
            break;
        }
        case 4:
        {
            item x;
            printf ("Moi ban nhap vao phan tu can tim: ");
            scanf("%d",&x);
            int k=Search(L,x);
            if (k) printf ("Tim thay %d trong DS tai vi tri thu: %d",x,k);
            else printf ("Khong tim thay %d trong danh sach !",x);
            break;
        }
        case 5:
        {
            int k;
            item x;
            printf ("Nhap vi tri can xoa: ");
            scanf ("%d",&k);
            Del_k (L,x,k);
            printf ("DS sau khi xoa:\n");
            Output(L);
            break;
        }
        case 6:
        {
            item x;
            printf ("Nhap phan tu can xoa: ");
            scanf ("%d",&x);
            Del_x (L,x);
            printf ("DS sau khi xoa:\n");
            Output(L);
            break;
        }
        case 7: break;
    }
    }while (lua_chon !=7);
    return 0;
}
