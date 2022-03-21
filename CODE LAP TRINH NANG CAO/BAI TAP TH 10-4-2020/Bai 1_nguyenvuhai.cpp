//Built by NguyenVuHai-CNTTK18CLC

#include<stdio.h>
#include<string.h>

struct Phim
{
	char TenPhim[30];
	char TheLoai[30];
	char TenDaoDien[50];
	char NamChinh[50];
	char NuChinh[30];
	int Nam;
	char Hang[30];
};

void NhapDanhSachPhim(Phim f[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("======Nhap du lieu phim=======");
		printf("\nDanh sach phim thu %d\n",i+1);
		fflush(stdin);
		printf("\nNhap ten phim:\n");
		gets(f[i].TenPhim);
		printf("+)Nhap the loai phim:");
		gets(f[i].TheLoai);
		printf(" Nhap ten dao dien:");
		gets(f[i].TenDaoDien);
		printf("Nhap ten dien vien nam chinh:");
		gets(f[i].NamChinh);
		printf("Nhap ten dien vien nu chinh:");
		gets(f[i].NuChinh);
		printf("Nhap nam san xuat:");
		scanf("%d",&f[i].Nam);
		fflush(stdin);
		printf("Nhap hang san xuat:");
		gets(f[i].Hang);
	}
}

void XuatDanhSachPhim(Phim f[],int n)
{
		printf("=====DANH SACH PHIM HIEN CO LA:=====");
		for(int i=0;i<n;i++)
		{
			printf("\n\n-----Thong tin phim thu %d-----\n",i+1);
			printf("\nTen phim: %s\n",f[i].TenPhim);
			printf("\nThe Loai phim");
			printf("\n+)The Loai phim: %s\n",f[i].TheLoai);
			printf("\nTen Dao dien: %s\n",f[i].TenDaoDien);
			printf("\nTen dien vien nam chinh: %s\n",f[i].NamChinh);
			printf("\nTen dien vien nu chinh: %s\n",f[i].NuChinh);
			printf("\nNam san xuat: %d\n",f[i].Nam);
			printf("\n Hang san xuat: %s",f[i].Hang);
		}
}

void TheLoai(Phim f[],int n)
{
	char str[]="hinh su";
	char strl[]="tinh cam";
	char strle[]="hai";
	int TL;
	printf("\n\nNhap 1 cho hinh su:");
	printf("\nNhap 2 cho tinh cam:");
	printf("\nNhap 3 cho hai:\n");
	printf("-Nhap vao the loai ban muon:");
	scanf("%d",&TL);
	printf("\n====DANH SACH PHIM THEO YEU CAU LA");
	switch(TL)
	{
		case 1:
		for(int i=0;i<n;i++)
		{
			if(strcmp((f[i].TheLoai),str)==0 && strcmp ((f[i].TheLoai),strl)!=0 && strcmp ((f[i].TheLoai),strle)!=0)
			{
				printf("\n\n-----Thong tin phim thu %d-----\n",i+1);
				printf("\nTen phim: %s\n",f[i].TenPhim);
				printf("\nThe Loai phim");
				printf("\n+)The Loai phim: %s\n",f[i].TheLoai);
				printf("\nTen Dao dien: %s\n",f[i].TenDaoDien);
				printf("\nTen dien vien nam chinh: %s\n",f[i].NamChinh);
				printf("\nTen dien vien nu chinh: %s\n",f[i].NuChinh);
				printf("\nNam san xuat: %d\n",f[i].Nam);
				printf("\n Hang san xuat: %s",f[i].Hang);
			}
		}
		break;
		case 2:
		for(int i=0;i<n;i++)
		{
			if(strcmp((f[i].TheLoai),str)!=0 && strcmp ((f[i].TheLoai),strl)==0 && strcmp ((f[i].TheLoai),strle)!=0)
			{
				printf("\n\n-----Thong tin phim thu %d-----\n",i+1);
				printf("\nTen phim: %s\n",f[i].TenPhim);
				printf("\nThe Loai phim");
				printf("\n+)The Loai phim: %s\n",f[i].TheLoai);
				printf("\nTen Dao dien: %s\n",f[i].TenDaoDien);
				printf("\nTen dien vien nam chinh: %s\n",f[i].NamChinh);
				printf("\nTen dien vien nu chinh: %s\n",f[i].NuChinh);
				printf("\nNam san xuat: %d\n",f[i].Nam);
				printf("\n Hang san xuat: %s",f[i].Hang);
			}
		}
		break;
		case 3:
		for(int i=0;i<n;i++)
		{
			if(strcmp((f[i].TheLoai),str)!=0 && strcmp ((f[i].TheLoai),strl)!=0 && strcmp ((f[i].TheLoai),strle)==0)
			{
				printf("\n\n-----Thong tin phim thu %d-----\n",i+1);
				printf("\nTen phim: %s\n",f[i].TenPhim);
				printf("\nThe Loai phim");
				printf("\n+)The Loai phim: %s\n",f[i].TheLoai);
				printf("\nTen Dao dien: %s\n",f[i].TenDaoDien);
				printf("\nTen dien vien nam chinh: %s\n",f[i].NamChinh);
				printf("\nTen dien vien nu chinh: %s\n",f[i].NuChinh);
				printf("\nNam san xuat: %d\n",f[i].Nam);
				printf("\n Hang san xuat: %s",f[i].Hang);
			}
		}
		break;
	}
	
}

void XuatNamChinh(Phim f[],int n)
{
	char yo[30];
	printf("\nNhap ten nam chinh can tim:");
	fflush(stdin);
	gets(yo);
	for(int i=0;i<n;i++)
	{
		if(strcmp(f[i].NamChinh,yo) == 0)
		{
			printf("\n\n-----Thong tin phim thu %d-----\n",i+1);
			printf("\nTen phim: %s\n",f[i].TenPhim);
			printf("\nThe Loai phim");
			printf("\n+)The Loai phim: %s\n",f[i].TheLoai);
			printf("\nTen Dao dien: %s\n",f[i].TenDaoDien);
			printf("\nTen dien vien nam chinh: %s\n",f[i].NamChinh);
			printf("\nTen dien vien nu chinh: %s\n",f[i].NuChinh);
			printf("\nNam san xuat: %d\n",f[i].Nam);
			printf("\n Hang san xuat: %s",f[i].Hang);
		}
	}
}

int main()
{
	Phim f[100];
	int n;
	printf("Nhap so phim ban muon:");
	scanf("%d",&n);
	NhapDanhSachPhim(f,n);
	XuatDanhSachPhim(f,n);
	TheLoai(f,n);
	XuatNamChinh(f,n);
}

