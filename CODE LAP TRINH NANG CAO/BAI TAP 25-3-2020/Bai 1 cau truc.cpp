#include<stdio.h>
#include<conio.h>
#include<string.h>
// Tao cau truc sinh vien
struct SinhVien
{
	char hoten[30];
	char lop[30];
	char gtinh[10];
	char hanhkiem[10];
	
};
//nhap danh sach sinh vien
void nhap_danh_sach_sinh_vien(SinhVien *sv, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tNhap Thong tin sinh vien:%d",i+1);
		printf("\nHoj ten sinh vien:");
		gets(sv[i].hoten);
		printf("Lop: ");
		gets(sv[i].lop);
		printf("Gioi tinh:");
		gets(sv[i].gtinh);
		fflush(stdin); //Xoa bo nho dem ban phim
		printf("Hanh kiem:");
		gets(sv[i].hanhkiem);
	}
}

void hien_thi_danh_sach_sinh_vien(SinhVien *sv, int n)
{
	printf("\n\n\t\tDANH SACH SINH VIEN: ");
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t\tThong tin sinh vien:%d\n",i+1);
		printf("\nHo ten sinh vien: %s\n",sv[i].hoten);
		printf("Lop: %s\n",sv[i].lop);
		printf("Gioi tinh: %s\n", sv[i].gtinh);
		printf("Hanh kiem: %s",sv[i].hanhkiem);
	}
}

void hien_thi_sinh_vien_hanh_kiem_tot(SinhVien *sv,int n)
{
	char str[]="Tot";
	char strl[]="tot";
	printf("\n\n\t\tHIEN THI SINH VIEN CO HANH KIEM TOT: \n");
	for(int i=0;i<n;i++)
	{
		if(strcmp((sv[i].hanhkiem),str)==0 || strcmp((sv[i].hanhkiem),strl)==0)
		{
			printf("\n\n\t\tThong tin sinh vien: %d\n",i+1);
			printf("\nHo ten sinh vien: %s\n",sv[i].hoten);
			printf("Lop: s\n",sv[i].lop);
			printf("Gioi tinh: %s\n",sv[i].gtinh);
			printf("Hanh kiem: %s",sv[i].hanhkiem);
		}
	}
}

void them_mot_sinh_vien_vao_vt_k(SinhVien *sv,int &n)
{
	int k;
	printf("\nNhap vi tri k can them:");
	scanf("%d",&k);
	fflush(stdin);
	SinhVien temp;
	printf("\n\n\t\tNhap thong tin sinh vien can them:");
	printf("\nHo ten sinh vien:");
	gets(temp.hoten);
	printf("Lop: ");
	gets(temp.lop);
	printf("Gioi tinh:");
	gets(temp.gtinh);
	fflush(stdin);
	printf("Hanh kiem: ");
	gets(temp.hanhkiem);
	for(int i=n-1;i>=k-1;i--)
	{
		sv[i+1]=sv[i];
	}
	sv[k-1]=temp;
	n++;
}

void xoa_mot_SV_ra_khoi_vt_k(SinhVien *sv,int &n)
{
	int k;
	printf("\nNhap vi tri k can xoa:");
	scanf("%d",&k);
	for(int i=k-1;i<=n;i++)
	{
		sv[i]=sv[i+1];
	}
	n--;
}
int main()
{
	SinhVien *sv;
	int n;
	printf("\nNhap so luong sinh vien: ");
	scanf("%d", &n);
	sv = new SinhVien[n];
	fflush(stdin);
	nhap_danh_sach_sinh_vien(sv, n);
	hien_thi_danh_sach_sinh_vien(sv, n);
	them_mot_sinh_vien_vao_vt_k(sv, n);
	hien_thi_danh_sach_sinh_vien(sv,n);
	hien_thi_sinh_vien_hanh_kiem_tot(sv, n);
	xoa_mot_SV_ra_khoi_vt_k(sv,n);
	hien_thi_danh_sach_sinh_vien(sv, n);
	getch();
}
