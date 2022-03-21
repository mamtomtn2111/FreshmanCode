/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>

using namespace std;

int main(){
	int *a;
	int test,x, y, z = 0, dem = 0;
	cin >> test;
	a = new int[test];
	for(int i = 0; i < test; i++){
		cin >> x>> y;
		z = x+y;
		if( z == 0){
			dem = 1;
		}
		while(z > 0){
		z /= 10;
		dem++;
		}
		a[i] = dem;
		dem = 0;
	}
	for(int i = 0; i < test; i++){
		cout << a[i] << "\n";
	}
}
