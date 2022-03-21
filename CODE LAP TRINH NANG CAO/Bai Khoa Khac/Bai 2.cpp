#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct SinhVien
{
	char HoTen[50];
	char MaSinhVien[50];
	float Toan;
	float Ly;
	float Hoa;
	float DiemTB;
};

void NhapMang(SinhVien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\t\tNHAP VAO THONG TIN SINH VIEN THU %d\n",i+1);
		printf("Nhap vao ho ten sinh vien \n");
		gets(a[i].HoTen);
		printf("Nhap vao ma sinh vien \n");
		gets(a[i].MaSinhVien);
		fflush(stdin);
		printf("Nhap vao diem toan: \n");
		scanf("%f",&a[i].Toan);
		printf("Nhap vao diem ly: \n");
		scanf("%f",&a[i].Ly);
		fflush(stdin);
		printf("Nhap vao diem hoa: \n");
		scanf("%f",&a[i].Hoa);
		a[i].DiemTB=(a[i].Toan + a[i].Ly + a[i].Hoa) / 3;
	}
}

void XuatMang(SinhVien a[],int n)
{
	printf("\n|%-30s|%15s|%15s|%15s|%15s|%15s|\n", "Ma Sinh Vien", "Ho Ten Sinh Vien", "Diem toan","Diem Ly","Diem hoa","Diem TB");
	for(int i=0;i<n;i++)
	{
		printf("|%-30s|%15s|%15.2f|%15.2f|%15.2f|%15.2f|\n",a[i].MaSinhVien,a[i].HoTen,a[i].Toan,a[i].Ly,a[i].Hoa,a[i].DiemTB);
	}
}

float Max(SinhVien a[], int n)
{
	float max;
	max = 0;
	for(int i =1; i < n; i++)
	{
		if(max < a[i].DiemTB)
			max = a[i].DiemTB;
			return max;
	}
}

void SoSanh(SinhVien a[], int n)
{
	float max;
	max = Max(a,n);
	for(int i = 0; i < n; i++)
	{
		if(a[i].DiemTB == max)
		{
			printf("\n\n======DANH SACH SINH VIEN VUA NHAP CO DIEM SO CAO NHAT======\n");
			printf("\n+)Danh sach hoc sinh thu %d\n",i);
			fflush(stdin);
			printf("\nMa Sinh vien: %s\n",a[i].MaSinhVien);
			printf("\nHo ten hoc sinh: %s\n",a[i].HoTen);
			printf("\nDiem Toan cua hoc sinh: %.2f\n",a[i].Toan);
			printf("\nDiem Ly cua hoc sinh %.2f\n",a[i].Ly);
			printf("\nDiem Hoa cua hoc sinh: %.2f\n",a[i].Hoa);
			printf("\nDiem TB cua hoc sinh: %.2f\n",a[i].DiemTB);
		}
	}
}

void SapXep(SinhVien a[],int n)
{
	SinhVien temp;
	for(int i = 0 ; i < n-1 ; i ++)
	{
		for(int j = i ; j < n ; j++)
		{
			if(a[i].DiemTB > a[j].DiemTB)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void DieuKien(SinhVien a[],int n)
{
	printf("\n|%-30s|%15s|%15s|%15s|%15s|%15s|\n", "Ma Sinh Vien", "Ho Ten Sinh Vien", "Diem toan","Diem Ly","Diem hoa","Diem TB");
	for(int i=0;i<n;i++)
	{
		if(a[i].DiemTB >5 && a[i].Toan>3 && a[i].Ly>3 && a[i].Hoa>3 )
		printf("|%-30s|%15s|%15.2f|%15.2f|%15.2f|%15.2f|\n",a[i].MaSinhVien,a[i].HoTen,a[i].Toan,a[i].Ly,a[i].Hoa,a[i].DiemTB);
	}
}

void TimMaSinhVien(SinhVien a[],int n)
{
	char string[50];
	printf("\nNhap vao ma sinh vien can tim:");
	gets(string);
	printf("\n|%-30s|%15s|%15s|%15s|%15s|%15s|\n", "Ma Sinh Vien", "Ho Ten Sinh Vien", "Diem toan","Diem Ly","Diem hoa","Diem TB");
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].MaSinhVien,string)==0)
		printf("|%-30s|%15s|%15.2f|%15.2f|%15.2f|%15.2f|\n",a[i].MaSinhVien,a[i].HoTen,a[i].Toan,a[i].Ly,a[i].Hoa,a[i].DiemTB);
	}
		
}


int main()
{
	SinhVien a[10000];
	int n;
	printf("Nhap vao so sinh vien :");
	scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
	SoSanh(a,n);
	
	printf("======Sau khi sap xep tang dan diem trung binh sinh vien:======\n");
	SapXep(a,n);
	XuatMang(a,n);
	
	printf("======In ra cac sinh vien co diem tb tren 5 va khong mon nao duoi 3=====\n");
	DieuKien(a,n);
	
	TimMaSinhVien(a,n);
}
