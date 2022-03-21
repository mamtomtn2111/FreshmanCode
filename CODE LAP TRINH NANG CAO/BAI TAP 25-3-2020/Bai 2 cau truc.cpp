#include<stdio.h>
#include<conio.h>
#include<string.h>

//tao cau truc can bo
struct CanBo
{
	char HoTen[30];
	char MaCB[30];
	char PhongBan[30];
	float Luong[50];
};

void nhap_danh_sach_can_bo(CanBo *cb,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n=======Nhap Thong tin can bo:%d=======",i+1);
		printf("\nHo ten can bo: ");
		gets(cb[i].HoTen);
		printf("Ma can bo: ");
		gets(cb[i].MaCB);
		printf("Luong cua can bo: ");
		scanf("%d",&cb[i].Luong);
		fflush(stdin);
		printf("Phong ban: ");
		gets(cb[i].PhongBan);
	}
}

void hien_thi_danh_sach_can_bo(CanBo *cb,int n)
{
	printf("\n\n====DANH SACH CAN BO HIEN CO=====");
	for(int i=0;i<n;i++)
	{
		printf("\n\n--------Thong tin can bo: %d\n",i+1);
		printf("\nHo ten can bo: %s\n",cb[i].HoTen);
		printf("Ma Can bo: %s\n",cb[i].MaCB);
		printf("Luong cua can bo: %s\n",cb[i].Luong);
		printf("Phong ban: %s\n",cb[i].PhongBan);
	}
}

void hien_thi_can_bo_phong_tai_chinh(CanBo*cb,int n)
{
	char str[]="Tai chinh";
	char strl[]="tai chinh";
	char strle[]="taichinh";
	printf("\n\n======HIEN THI TAT CA CAC CAN BO CO PHONG TAI CHINH:=======\n");
	for(int i=0;i<n;i++)
	{
		if(strcmp((cb[i].PhongBan),str)==0 || strcmp ((cb[i].PhongBan),strl)==0 || strcmp((cb[i].PhongBan),strle)==0)
		{
			printf("\n\n--------Thong tin can bo: %d\n",i+1);
			printf("\nHo ten can bo: %s\n",cb[i].HoTen);
			printf("Ma Can bo: %s\n",cb[i].MaCB);
			printf("Luong cua can bo: %s\n",cb[i].Luong);
			printf("Phong ban: %s\n",cb[i].PhongBan);
		}
	}
}

void sap_xep_theo_luong(CanBo *cb,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(cb[i].Luong,cb[j].Luong)<0
			{
				CanBo k=cb[i].Luong;
				cb[i].Luong=cb[i].Luong;
				cb[i].Luong=k;
			}
		}
	}
}

int main()
{
	CanBo *cb;
	int n;
	printf("Nhap so luong can bo vao: ");
	scanf("%d",&n);
	cb= new CanBo[n];
	fflush(stdin);
	nhap_danh_sach_can_bo(cb,n);
	hien_thi_danh_sach_can_bo(cb,n);
	hien_thi_can_bo_phong_tai_chinh(cb,n);
}
