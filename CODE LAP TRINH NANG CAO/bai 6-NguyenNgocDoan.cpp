#include<stdio.h>
#include<string.h>
#include<conio.h>

struct PC {
	
	int ma;
	char name[20];
	int speed;
	int ram;
	int price;
	
};
void Nhap(PC a[],int &n)
{
		bool temp= true;
		int i=0;
do
	{
		printf("Nhap Ma Hang: \n");
		scanf("%d",&a[i].ma);
		if (a[i].ma==0)
		{
            temp = false;
        }
        else
			{
	fflush(stdin);
	printf("Nhap ten may :");
	gets(a[i].name);
		fflush(stdin);
	printf("Nhap toc do CPU :");
	scanf("%d", &a[i].speed);
		fflush(stdin);
	printf("Nhap RAM :");
	scanf("%d", &a[i].ram);
		fflush(stdin);
	printf("Nhap gia tien :");
	scanf("%d", &a[i].price);
				i++;
			}
	} while(temp);
	n=i;
}

void SapXep(PC a[], int &n){
	struct PC temp;
	for(int i = 0 ; i < n-1 ; i ++)
	{
		for(int j = i ; j < n ; j++)
		{
			if(a[i].speed < a[j].speed)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void Out(PC a[], int &n){
	FILE *f = fopen("Maytinh3.txt","w");
	if(f!=NULL)
			{	
				 printf("\n|%-30s|%15s|%15s|%15s|%15s|\n", "Ma may ", "Ten may", "Toc do CPU","Ram","Gia tien ");
				 
				 fprintf(f,"|%-30s|%15s|%15s|%15s|%15s|\n", "Ma may ", "Ten may", "Toc do CPU","Ram","Gia tien ");
				 
				    for (int i = 0; i < n; i++)
				    {
				        printf("|%-30d|%15s|%15d|%15d|%15d|\n",a[i].ma,a[i].name,a[i].speed,a[i].ram,a[i].price);
				        
				        fprintf(f,"|%-30d|%15s|%15d|%15d|%15d|\n",a[i].ma,a[i].name,a[i].speed,a[i].ram,a[i].price);
						
				    }
    		}
   fclose(f);
}
int main(){
	int n;
	PC a[100], temp;
	Nhap(a, n);
	Out(a, n);
	printf("\nSau khi sap xep toc do CPU la ");
	SapXep(a, n);
	Out(a, n);
	getch();
	
}
