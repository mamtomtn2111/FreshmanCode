#include<stdio.h>

int main()
{
	int n, tram, chuc, dv, trungGian;
	printf("Nhap vao so co ba chu so : ");
	scanf("%d", &n);
	//123%100=23   23%10=3
	//123/100=1.23
	tram=(n/100);
	chuc=((n%100)/10);
	dv=(n%10);
	
	if(tram>chuc){
		trungGian=tram;
		tram=chuc;
		chuc=trungGian;
	}
	if(tram>dv){
		trungGian=tram;
		tram=dv;
		dv=trungGian;
	}
	if(chuc>dv){
		trungGian=chuc;
		chuc=dv;
		dv=trungGian;
	}
	
	printf("/nSau khi da sap xep la %d%d%d", tram, chuc, dv);
	return 0;
}
