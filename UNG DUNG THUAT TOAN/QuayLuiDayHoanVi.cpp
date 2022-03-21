#include<iostream>

using namespace std;

 
int n = 1;
int Bool[100];
int a[100];
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        if (Bool[i] == false) {
            a[k] = i;
            Bool[i] = 1;
            if (k == n){
            	for (int i = 1; i <= n; i++)
        			cout << a[i] << " ";
    			cout << endl;
			}
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
    cout << "Mhap n: ";
    cin >> n;
    Try(1);
}
