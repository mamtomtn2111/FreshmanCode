#include<stdio.h>

int main(){
	int ngay, thang, nam;
	
	printf("Nhap vao ngay, thang, nam ");
    
    scanf("%d%d%d", &ngay, &thang, &nam);
    
    switch(thang){
    	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if(ngay<32 && ngay>0){
			printf("Hop le --- Ngay %d thang %d nam %d ", ngay, thang, nam);
			break;
		}	
		else{
			printf("Ngay ban nhap sai roi! ");
			break;			
		}
		
		case 4: case 6: case 9: case 11:
			if(ngay<31 && ngay>0){
			printf("Hop le --- Ngay %d thang %d nam %d ", ngay, thang, nam);
			break;
			}
			
			else{
			printf("Ngay ban nhap sai roi! ");
			break;	
			}
		case 2:
		if(ngay<29 && ngay>0){
			printf("Hop le --- Ngay %d thang %d nam %d ", ngay, thang, nam);
			break;

		}
		else{
			printf("Ngay ban nhap sai roi! ");	
			break;
			}
		
		default	:
		printf("May nhap sai roi !!!! ");
		break;	
	}

return 0;
}
