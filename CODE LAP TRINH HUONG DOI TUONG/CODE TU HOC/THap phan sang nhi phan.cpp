// C++ program to convert a decimal 
// number to binary number 
 
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
 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
 
int main() 
{ 
    int n = 10; 
    decToBinary(n); 
    return 0; 
} 
