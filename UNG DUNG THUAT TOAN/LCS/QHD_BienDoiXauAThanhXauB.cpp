#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Ham tim min
int min(int a, int b, int c){
    if(a<=b && a<=c)
        return a;
    else if(b < a && b<=c)
        return b;
    else
        return c;
}

// Ham dem so buoc chuyen doi xau 
void changeString(string a, string b){
    int step;  // Bien luu so buoc
    int n = a.size();  // Do dai xau a
    int m = b.size();  // Do dai xau b
    int L[n+1][m+1];   // Mang ket qua
	// them 1 boi vi co 1 hang và 1 cot cho L[0][j], L[i][0]
    
    // j =0, L[i][0] = i;
    for(int i=0; i<=n; i++)
        L[i][0] = i;
    // i = 0; L[0][j] = j;
    for(int j=0; j<=m; j++){
        L[0][j] = j;
    }
    
// Duyet mang ket qua: hàng truoc, cot sau. Hang xau A, cot xau B
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i-1] == b[j-1]) // neu bang nhau
                L[i][j] = L[i-1][j-1];
            else{ // neu khác nhau
                 // min cua 3 truong hop
                L[i][j] = min(L[i-1][j], L[i-1][j-1], L[i][j-1] ) + 1;
            }
        }
    }    
    
    step = L[n][m];  // gan ket qua
    cout<<"\nSo buoc: "<<step<<"\n";  // in ra man hinh
// Truy vet
    int i = n;
    int j = m;
    while(i >=0 && j >=0){  // Neu con chua qua vi tri cuoi cung
        if(a[i-1] == b[j-1]){  // Bang nhau tuc k co phep bien doi
            i--;
            j--;
        }
        else{
            // Truong hop xoa ki tu
            if( L[i-1][j] <= L[i-1][j-1] &&  L[i-1][j] <= L[i][j-1]){
                cout<<"Xoa "<<a[i-1]<<"\n";
                i--;
            }
            // Truong hop sua ki tu
            else if( L[i-1][j-1] < L[i-1][j] && L[i-1][j-1] <= L[i][j-1]){
                cout<<"Thay "<<a[i-1]<<" => "<<b[j-1]<<"\n";
                i--;
                j--;
            }
            // Truong hop chen ki tu
            else{
                cout<<"Chen "<<b[j-1]<<" sau "<<a[i-1]<<"\n";
                j--;
            }
            
        }
    }
}

int main(){
    string a, b;
    a = "HocSinhICTU";
    b = "ICTUThaiNguyen";
    cout<<"Xau a: "<<a<<endl;
    cout<<"Xau b: "<<b;
    changeString(a,b);
    return 0;
}
