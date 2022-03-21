#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// Hàm tìm min
int min(int a, int b, int c){
    if(a<=b && a<=c)
        return a;
    else if(b < a && b<=c)
        return b;
    else
        return c;
}
// Hàm d?m s? bu?c chuy?n d?i xâu
void changeString(string a, string b){
    int step;  // Bi?n luu s? bu?c
    int n = a.size();  // Ð? dài xâu a
    int m = b.size();  // Ð? dài xâu b
    int L[n+1][m+1];   // M?ng k?t qu? 
// thêm 1 b?i vì có 1 hàng và 1 c?t cho L[0][j], L[i][0]
    
    // j =0, L[i][0] = i;
    for(int i=0; i<=n; i++)
        L[i][0] = i;
    // i = 0; L[0][j] = j;
    for(int j=0; j<=m; j++){
        L[0][j] = j;
    }
    
// Duy?t m?ng k?t qu?: hàng tru?c, c?t sau. Hàng xâu A, c?t xâu B
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i-1] == b[j-1]) // n?u b?ng nhau
                L[i][j] = L[i-1][j-1];
            else{ // n?u khác nhau
                 // min c?a 3 tru?ng h?p
                L[i][j] = min(L[i-1][j], L[i-1][j-1], L[i][j-1] ) + 1;
            }
        }
    }    
    
    step = L[n][m];  // gán k?t qu?
    cout<<"\nSo buoc: "<<step<<"\n";  // in ra màn hình
// Truy v?t
    int i = n;
    int j = m;
    while(i >=0 && j >=0){  // N?u còn chua qua v? trí cu?i cùng
        if(a[i-1] == b[j-1]){  // B?ng nhau t?c k có phép bi?n d?i
            i--;
            j--;
        }
        else{
            // Tru?ng h?p xóa kí t?
            if( L[i-1][j] <= L[i-1][j-1] &&  L[i-1][j] <= L[i][j-1]){
                cout<<"Xoa "<<a[i-1]<<"\n";
                i--;
            }
            // Tru?ng h?p s?a kí t?
            else if( L[i-1][j-1] < L[i-1][j] && L[i-1][j-1] <= L[i][j-1]){
                cout<<"Thay "<<a[i-1]<<" => "<<b[j-1]<<"\n";
                i--;
                j--;
            }
            // Tru?ng h?p chèn kí t?
            else{
                cout<<"Chen "<<b[j-1]<<" sau "<<a[i-1]<<"\n";
                j--;
            }
            
        }
    }
}
int main(){
    string a, b;
        // Nh?p hai xâu t? bàn phím
    a = "HocSinhICTU";
    b = "SinhVienICTU";
    cout<<"Xau a: "<<a<<endl;
    cout<<"Xau b: "<<b;
        // G?i hàm x? lý 
    changeString(a,b);
    return 0;
}
