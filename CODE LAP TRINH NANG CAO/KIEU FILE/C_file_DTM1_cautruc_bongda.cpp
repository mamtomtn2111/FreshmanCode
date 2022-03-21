#include<stdio.h>
#include<conio.h>
#define Max 100
struct BangXepHang
{
	char TenDoiBong[30];
	int SoTranThang;    
    int SoTranThua;
    int SoTranHoa;
    int diem;
	
};

void NhapTTDoiBong(BangXepHang &temp)
{
	fflush(stdin);
	printf("\nNhap Ten Doi Bong : ");
	gets(temp.TenDoiBong);
    printf("So tran THANG: ");
    scanf("%d",&temp.SoTranThang);
    printf("So tran HOA : ");
    scanf("%d",&temp.SoTranHoa);
    printf("So tran THUA : ");
    scanf("%d",&temp.SoTranThua);
    temp.diem = temp.SoTranThang *3 + temp.SoTranHoa * 1;
	
}
void NhapDS(BangXepHang a[],int &n)
{
		printf("\nNhap so luong Doi Bong : ");
	scanf("%d",&n);
	printf("____________________________________________");
	for(int i=0;i<n;i++)
	{
		NhapTTDoiBong(a[i]);
		
	}
}
void SapXep(BangXepHang a[],int n)
{
	struct BangXepHang temp;
	for(int i = 0 ; i < n-1 ; i ++)
	{
		for(int j = i ; j < n ; j++)
		{
			if(a[i].diem < a[j].diem)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void XuatDS(BangXepHang a[],int n)
{
 FILE *f=fopen("Doibong.txt","w");
	
		if(f!=NULL)
			{	
				 printf("\n|%-30s|%15s|%15s|%15s|%15s|\n", "Ten Doi Bong", "So Tran Thang", "So Trang Hoa","So Tran Thua","Diem So");
				 
				 fprintf(f,"|%-30s|%15s|%15s|%15s|%15s|\n", "Ten Doi Bong", "So Tran Thang", "So Trang Hoa","So Tran Thua","Diem So");
				 
				    for (int i = 0; i < n; i++)
				    {
				        printf("|%-30s|%15d|%15d|%15d|%15d|\n",a[i].TenDoiBong,a[i].SoTranThang,a[i].SoTranHoa,a[i].SoTranThua,a[i].diem);
				        
				        fprintf(f,"|%-30s|%15d|%15d|%15d|%15d|\n",a[i].TenDoiBong,a[i].SoTranThang,a[i].SoTranHoa,a[i].SoTranThua,a[i].diem);
						
				    }
    		}
   fclose(f);
}
int main()
{
	int n;
	BangXepHang a[Max],temp;
	NhapDS(a,n);
	SapXep(a,n);
	XuatDS(a,n);
	getch();
	return 0;
}
