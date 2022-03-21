#include<stdio.h>
int main()
{
	int ngay, thang, nam;
	printf("nhap vao ngay:");
	scanf("%d",&ngay);
	printf("nhap vao thang:");
	scanf("%d",&thang);
	printf("nhap vao nam:");
	scanf("%d",&nam);
	
	switch(thang)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if( ngay<32 && ngay>0)
				printf("ngay hop le man \n ngay %d thang %d nam %d ",ngay,thang,nam);
				else printf("ngay khong hop le \n lay dau ra ngay");
				break;
		case 4:case 6:case 9:case 11:
			if(ngay<31 && ngay>0 )
			printf("ngay hop le man \n ngay %d thang %d nam %d ",ngay,thang,nam);
			else printf("ngay khong hop le \n lay dau ra ngay");
			break;
		case 2:
			if(ngay>0 && ngay <30)
			{
				if(nam%4==0) printf("day la nam nhuan\n ngay %d thang %d nam %d",ngay,thang,nam);
				else
				{
					if(ngay>0 && ngay <29)
						printf("day la nam ko nhuan \nngay %d thang %d nam %d",ngay,thang,nam);
					else printf("day la nam ko nhuan sao co 29 ngay ???");				
				}  
			}
			else printf("nhap sai r");
			break;
		default:
			printf("SAI MAN");
			break;
	}
	return ngay,thang,nam;
}
