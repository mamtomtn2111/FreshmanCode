#include<stdio.h>
int main()
{
	int a,b,c,d,max;
	printf("nhap so a vao:");
	scanf("%d",&a);
	printf("nhap so b vao:");
	scanf("%d",&b);
	printf("nhap so c vao:");
	scanf("%d",&c);
	printf("nhap so d vao:");
	scanf("%d",&d);	
	if((a==b)&&(b==c)&&(c==d)&&(d==a)) printf("khong co so nao lon nhat");
	else 
	if(a>=b && a>=c && a >=d)
		max=a ;
	else
		if (b>=c && b>=d)
			max= b;
		else 
			if (c>=d)
				max=c;
			else 
				max=d;
	printf("So lon nhat la %d",max);
	return 0;
}

