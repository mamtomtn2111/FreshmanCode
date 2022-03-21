#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[10];
	char str[]="co";
	char strl[]="khong";
	do
	{
		printf("\nNhap co hoac khong de tiep tuc chuong trinh: ");
		gets(s);
		if(strcmp(str,s)==0)
		{
			float a,b,c;
			printf("Nhap vao so a: ");
			scanf("%f",&a);
			printf("Nhap vao so b: ");
			scanf("%f",&b);
			printf("Nhap vao so c: ");
			scanf("%f",&c);
			
			printf("\nSo A la: %g ",a);
			printf("\nSo B la: %g ",b);
			printf("\nSo C la: %g ",c);
		
			if(a>b && a>c && b!=c)
			{
				if(b>c)
					printf("\nVay X la: %g",b);
				else printf("\nVay X la: %g",c);
			}
			else if(b>a && b>c && a!=c)
			{
				if(a>c)
					printf("\nVay X la: %g",a);
				else printf("\nVay X la: %g",c);
	  		}
			else if(c>a && c>b && a!=b)
			{
				if(a>b)
					printf("\nVay X la: %g",a);
				else printf("\nVay X la: %g",b);
			}
			else printf("\nKhong co so X can tim !!");
		}
	}while(strcmp(s,strl)!=0);
}
