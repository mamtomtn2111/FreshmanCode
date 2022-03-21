/*Nguyen Vu Hai - CNTT K18 CLC - ICTU*/
#include<iostream>
using namespace std;

int main(){
	int SoNguoi;
	int SoBuoi[SoNguoi];
	int MaBuoi[10][10];
	
	int DatGiai;
	int MaBuoiDatGiai[10];
	int i,j,e,g,h;
	cin>>SoNguoi;
	for(i = 1 ; i <= SoNguoi; i++){
		cin>>SoBuoi[i];
		if(i = 1){
			for(j = 1; j <= SoBuoi[i];j++){
				MaBuoi[i][j] = j;
				j=e;
			}
		}
		else if(i > 1){
			for(j = e;j <= h;j ++){
				MaBuoi[i][j] =j;
			}
		}
		h += SoBuoi[i];
	}
	
	cin>>DatGiai;
	for(g = 0; g < DatGiai; g++){
		cin>>MaBuoiDatGiai[g];
	}
	for(i = 1; i <= SoNguoi; i++){
		for(j = 1; j <= SoBuoi[i]; j++){
			if(MaBuoi[i][j] == MaBuoiDatGiai[g])
				cout<<i;
		}
	}
}
