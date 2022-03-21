#include<stdio.h>
int main()
{
	int max,x,tram,chuc,donvi;
	printf("nhap so nguyen gom 3 chu so:");
	
	do
	{
		scanf("%d",&x);
		if(x<100 || x>=1000) printf("nhap lai x:");
	}while(x<=0 || x>=1000);
	
	tram=x/100;
	chuc=((x%100)/10);
	donvi=(x%10);
	max=tram;
	if(chuc>tram && donvi>tram)
		{
			if(chuc>donvi)
				max=chuc;
			else max=donvi;
		}
	else
		{
			if(chuc>tram)
				max=chuc;
			if(donvi>tram)
				max=donvi;
		}
	if(max==tram)
		printf("MAX nam o hang tram: %d",max);
	else
	{
		if(max==chuc)
			printf("MAX nam o hang chuc:%d",max);
		else printf("MAX nam o hang don vi:%d",max);
	}
}
