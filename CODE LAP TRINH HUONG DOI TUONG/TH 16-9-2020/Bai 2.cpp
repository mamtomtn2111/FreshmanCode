#include <iostream> 
using namespace std; 
 
void decToBinary(int n) 
{ 
    int binaryNum[1000]; 
 
    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
 	cout<<"\nSau khi chuyen sang he 2: ";
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
 
int main() 
{ 
    int n;
	cout<<"Nhap vao so nguyen: ";
	cin>>n; 
    decToBinary(n);
    return 0;
} 
