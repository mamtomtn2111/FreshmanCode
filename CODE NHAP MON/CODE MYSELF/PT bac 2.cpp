#include<stdio.h>
#include<math.h>
int main()
{
	int y;
	do
	{
		printf("\n1 la tinh PT bac 2\n2 la khong\n+)Tinh tiep khong:");
		scanf("%d",&y);
	switch(y)
	{
		case 1:
		float a,b,c,delta,x1,x2,nghiemkep,nghiemduynhat;
		printf("\nnhap so a cua PT bac 2:");
		scanf("%f",&a);
		printf("nhap so b cua PT bac 2:");
		scanf("%f",&b);
		printf("nhap so c cua PT bac 2:");
		scanf("%f",&c);
	if (a==0)
	{
		if (b==0)
		{
			if(c==0) printf("PT vo so nghiem");
			else printf("PT vo nghiem");
		}
		else
		{
			nghiemduynhat=-c/b;
			printf("PT co 1 nghiem duy nhat:%.2f",nghiemduynhat);
		}
	}
	else
	{
		delta=b*b-4*a*c;
		
		if(delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("PT co hai nghiem phan biet %.2f & %.2f",x1,x2);
		}
		
		if(delta==0)
		{
			nghiemkep=(-b)/(2*a);
			printf("PT co nghiem kep la %.2f",nghiemkep);
		}
		
		if(delta<0) printf("PT vo nghiem");
	}
	break;
		case 2:
			printf("XIN CHAO TAM BIET !!!");
			break;
		default:
			printf("Ban Nhap sai yeu cau r");
			break;
		}
		}while(y!=2);
	
}
