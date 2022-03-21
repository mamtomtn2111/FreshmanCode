#include<iostream>
#define MAX 100

using namespace std;

struct SinhVien{
	string MaSV;
	string HoTen;
	float DiemTB;
};

struct Stack{
	SinhVien ds[MAX];
	int top;
};

//Khởi tạo danh sách rỗng
void intit_Stack(Stack *S){
    S -> top =-1;
}

//Kiểm tra danh sách rỗng
int isEmpty_S(Stack *S){
    if(s -> top == -1)
        return 1;
    else 
        return 0;
}

//Kiểm tra ngăn xếp đầy
int isFull_S(Stack *S){
    if(S -> top == N-1)
        return 1;
    else
        return 0;
}

//Chèn 1 phần tử vào ngăn xếp S
SinhVien push(SinhVien sv, Stack *S){
    if(isFull_S(*S)){
        s -> top++
    }
}

//Lấy 1 phần tử khỏi ngăn xếp
SinhVien pop(Stack *S, SinhVien sv){
    if(!isEmpty_S(*S)){
        *sv = S ->ds [S ->top]
        S -> top--;
    }
}

//thêm phần tử
void them_k(Stack &S, )

//Xoa Phần tử
void xoa_k(Stack &S, SinhVien *sv)

int main(){
    SinhVien sv;
    Stack s;
    init_S(&&S);
    cout<<"\nNhap n sinh vien: ";
    cin>>n;
    
}