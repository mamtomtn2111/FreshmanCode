#include<stdio.h>
#include<string.h>

struct MatHang{
	
	char TenHang[30];
	int MaHang;    
    int SoLuong;
    char DonViTinh[10];
    int DonGia;
	
};
void Nhap1(MatHang &mh)
{
	fflush(stdin);
	printf("\nNhap Ten Hang : ");
	gets(mh.TenHang);
    printf("Nhap Ma Hang: ");
    scanf("%d",&mh.MaHang);
    fflush(stdin);
    printf("Nhap don vi tinh : ");
    gets(mh.DonViTinh);
    printf("Nhap so luong : ");
    scanf("%d",&mh.SoLuong);
    printf("Nhap don gia : ");
    scanf("%d",&mh.DonGia);
	
}
void NhapDS(MatHang mh[],int &n){
	
	printf("\nNhap so luong mat hang : ");
	scanf("%d",&n);
		
	printf("____________________________________________");

	for(int i = 0; i < n; i++){
		Nhap1(mh[i]);
	}
}

void XuatDS(MatHang mh[],int n){
	
	FILE *f=fopen("MatHang.txt","w");
	
	if(f!=NULL){
				 
		fprintf(f,"|%-30s|%15s|%15s|%15s|%15s|\n", " Ten hang ", " Ma hang ", " Don vi tinh "," So luong "," Don gia ");
				 
		for (int i = 0; i < n; i++){
			fprintf(f,"|%-30s|%15d|%15s|%15d|%15d|\n",mh[i].TenHang,mh[i].MaHang,mh[i].DonViTinh,mh[i].SoLuong,mh[i].DonGia);
		}
    }
   fclose(f);
}
void DocDS(MatHang mh[], int n){	
	char temp[500];
	
	FILE *f=fopen("MatHang.txt","r");
	
	for(int i = 0; i < n; i++){
		fscanf(f, "%s", temp);
		printf("%s", temp);
    	fgets(temp, 100, f);
    	printf("%s", temp);

	}
	fclose(f);
}
int main(){
	int n;
	MatHang mh[3000];
	NhapDS(mh, n);
	XuatDS(mh, n);
	DocDS(mh, n);
	return 0;
}
