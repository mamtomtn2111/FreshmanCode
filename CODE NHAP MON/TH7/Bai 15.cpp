#include<stdio.h>
void NhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{23
		printf("Nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int main()
{
	int n,m;
	int a[n];
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Nhap phan tu can tim kiem M:");
	scanf("%d",&m);
	NhapMang(a,n);
	int i;
	int demtim=0;
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			printf("vi tri M trong mang: a[%d]\n",i);
			demtim++;
		}
	}
	printf("So luong m tim thay trong mang la: %d\n",demtim);
	if(demtim==0)
	printf("Khong tim thay M trong mang:");
}
