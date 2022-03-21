#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,chuvi,p,dientich;
	printf("nhap a,b,c vao man :");
	scanf("%f,%f,%f",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(c+b>a))
	{
		chuvi=(a+b+c);
		p=chuvi/2;
		dientich=sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("\nchu vi cua tam giac la :%10.2f",chuvi);
		printf("\ndien tich cua tam giac la :%10.2f",dientich);
		return 0;
	}
	else printf("day ko phai la tam giac");
	return 0;
}
