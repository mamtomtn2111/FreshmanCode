/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/

#include<iostream>
#include<cstring>
using namespace std;

bool Hoa(char s[100]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'A' || s[i] <= 'B')
			return true;
		else return false;
	}
}

bool Thuong(char s[100]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'a' || s[i] <= 'b')
			return true;
		else return false;
	}
}

bool So(char s[100]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= '0' || s[i] <= '9')
			return true;
		else return false;
	}
}

int main(){
	int n;
	string s[n];
	cin>>n;
	fflush(stdin);
	for(int i = 0; i < n;i++){
		getline(cin,s[i]);
	}
	for(int i = 0; i < n;i++){
		if(s[i].length() <= 8)
			cout<<"N";
		else if(s[i].length() > 8)
		for(int j = 0; j < s[i].length();j++){
			if(Hoa(s[i]) == true || Thuong(s[i]) == true || So(s[i]) == true)
				cout<<"Y";
		}
	}
}
