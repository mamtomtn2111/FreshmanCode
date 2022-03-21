#include<stdio.h>
int main()
{
	int n,tram,chuc,donvi;
	printf("nhap so co ba chu so");
	scanf("%d",&n);
	tram=n/100;
	chuc=(n-100*tram)/10;
	donvi=(n-100*tram-10*chuc);
	
	if((tram>=chuc)&&(tram>=donvi))
	printf("Chu so lon nhat nam o hang tram %d",tram);
	else if(chuc>=donvi) printf("so lon nhat nam o hang chuc %d",chuc);
	else printf("So lon nhat nam o hang don vi %d",donvi);
	return 0;
	
}
