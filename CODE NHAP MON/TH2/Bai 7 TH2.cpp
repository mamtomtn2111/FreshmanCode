#include<stdio.h>
int main()
{
	int a,b,c,trung_gian;
	printf("nhap 3 so a b c:");
	scanf("%d%d%d",&a,&b,&c);
	 if(a>b)

     {
      trung_gian=a;
      a=b;
      b=trung_gian;
     }
    if(b>c)
     {
     trung_gian=b;
     b=c;
     c=trung_gian;
     }
    if(a>b)
     {
     trung_gian=a;
     a=b;
     b=trung_gian;
     }
    printf("Day so duoc sap xep theo thu tu tang dan la: %d %d %d", a, b, c);
}
	
