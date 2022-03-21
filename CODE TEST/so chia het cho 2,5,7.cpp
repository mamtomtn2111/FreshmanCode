/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/
#include<iostream>

using namespace std;

int main(){
	int a=0;
	for(int i = 1; i <= 5000;i++){
		if(i % 2 == 0 || i % 5 == 0 || i % 7 ==0)
			a++;
	}
	cout<<a;
}

