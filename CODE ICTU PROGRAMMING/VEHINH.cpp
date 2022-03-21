/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include <iostream>
using namespace std;
 
int main()
{
    int soDong;
    cin >> soDong;
    for(int i = 1; i <= soDong; i++) { 
        // in ky tu khoang trang
        for(int j = i; j < soDong; j++) {
            cout << " ";
        }
 
        // in ky tu ngoi sao
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "*";
        }
 
        // xuong dong ke tiep
        cout << "\n";
    }
    return 0;
}
