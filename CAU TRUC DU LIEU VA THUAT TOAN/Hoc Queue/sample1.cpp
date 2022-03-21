#include<iostream>

using namespace std;

#define MAX 100

struct SinhVien{
    string HoTen;
    string GioiTinh;
    int NamSinh;
    string Lop;
    string SBD;
    float DTK;
};

struct Queue{
    SinhVien sv[MAX];
    int n;
    SinhVien front, rear;
};

//Khoi tao
void init_Q(Queue *Q){
    Q -> n = 0; 
    Q -> front = 0;
    Q -> rear = -1; //Nen khoi tao = -1, de khi them 1 phan tu vao hang khi hang null thi front = rear = 0
}

//Kiem tra hang rong
int isEmpty_Q(Queue Q){
    if (Q.n == 0)
        return 1;
    else return 0;
}

//Kiem tra hang day
int isFull_Q(Queue Q){
    if(Q.n == MAX)
        return 1;
    else return 0;
}

//Lay mot phan tu ra khoi queue
//Luu lai gia tri dau hang vao bien sv, sau do tang chi so front len 1 don vi, giam size xuong 1 don vi
void DeQueue(Queue *Q, SinhVien *sv){
    if(!isEmpty_Q(*Q)){
        *sv = Q -> sv[Q->front];
        Q -> n--;
        Q -> front = (Q->front+1) % N;
    }
}

//Them 1 phan tu vao queue
//Tang chi so rear len 1 don vi, do du lieu can them vao vi tri cuoi hang roi tang size len 1 don vi
void EnQueue(Queue *Q,SinhVien *sv){
    if(!isFull_Q(*Q)){
        Q -> n++;
        Q -> rear = (Q -> rear + 1) % MAX;//MAX hang doi quay vong
        Q -> sv [Q ->rear] = sv;
    }
}
