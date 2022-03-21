#include<iostream>
#include<string>  
using namespace std;

void longest_Common(string a, string b){  // Ham tim xau con lon nhat in ra man hinh
    int n = a.size();  // n la chieu dai xau a, m la chieu dai xau b
    int m = b.size();
    int max_Size;     // Bien luu do dai con chung lon nhat
    string subsequence = "";  // Bien luu con chung dung khi truy vet 
    int L[n+1][m+1];   // Khai bao mang luu ket qua, n+1 hang, m+1 cot
    
    for(int i=0; i<=n; i++)   // Gan cot dau tien bang 0
        L[i][0] = 0;
    for(int j=0; j<=m; j++)   // Gan hang dau tien bang 0
        L[0][j] = 0;
        
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1] == b[j-1]){  // Neu co phan tu bang nhau
                L[i][j] = L[i-1][j-1] + 1;   // Ap dung cong thuc
            }
            else{   // Truogn hop a[i-1] khac b[j-1]
                if(L[i-1][j] >= L[i][j-1])     // Tim mã giua L[i-1][j] va L[i][j-1]
                    L[i][j] = L[i-1][j];
                else
                    L[i][j] = L[i][j-1];
            }
        }
    }
    
    max_Size = L[n][m];  // Tim duoc do dai con lon nhat
    int i = n; 
    int j = m;
    while(L[i][j] != 0){ // Dieu kien dung
        if(a[i-1] == b[j-1]){  // Neu bang nhau
            subsequence += a[i-1];   // Cong a[i-1] vao xau con
            i--;
            j--;
        }
        else{  // Neu khac nhau
            if(L[i-1][j] >= L[i][j-1]) // So sanh
                i--;
            elseo
                j--;
        }
    }
    
    cout<<"\nDo dai xau lon nhat: "<<max_Size;  // In ra do dai con lon nhat
    cout<<"\nXau con: ";
    for(int t = max_Size-1 ; t>=0; t--)  // In nguoc tu cuoi ve dau de xau con dung thu tu 
        cout<<subsequence[t];
}
int main(){
    string a, b;
    a = "HocSinhICTU";
    b = "ICTUThaiNguyen";
    cout<<"Xau a: "<<a<<endl;
    cout<<"Xau b: "<<b;
    longest_Common(a,b);
    return 0;    
}
