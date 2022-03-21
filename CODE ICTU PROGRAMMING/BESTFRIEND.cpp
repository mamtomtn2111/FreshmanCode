/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>

using namespace std;

int main(){
	int a, b,i,j;
	int _a=0,_b=0;
	cin>>a>>b;
		for(i = 1; i < a; i ++){
			if(a % i == 0)
				_a+=i;
		}
		for(j = 1; j < b; j++){
			if(b % j ==0)
				_b+=j;
		}	
	if(_a == b && _b ==a)
		cout<<"YES";
	else
	cout<<"NO";
}
