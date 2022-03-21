#include<stdio.h>
#include<math.h>

void NhapMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Nhap so a[%d]:",i);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}

void HoanVi(int &x, int &y) {
	int t=x;
	x=y;
	y=t;
}
void SapXepLeTang(int a[], int n) {
	int i, j;
	for(int i=0; i<n-1; i++)
		if(a[i]%2!=0)
			for(j=i+1; j<n; j++)
				if(a[j]%2!=0 && a[j]<a[i])
					HoanVi(a[j], a[i]);
}

int LeNhoNhat(int a[], int n) {
	int i;
	int max;
	for(i=0; i<n; i++) {//tim so chan lam max
		if((a[i]%2 == 0)) {
			max = a[i];
			break;
		}
	}
	for(i=0; i<n; i++) {//tim so chan lan nhat
		if((a[i]%2 == 0 && a[i]>max)) {
			max = a[i];
		}
	}
	for(i=0; i<n; i++) {//tim so le nho nhat lon hon moi so chan
		if((a[i] > max && a[i]%2 != 0)) {
			return a[i];
			break;
		}
	}
}

int main()
{
	int a[100],n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	NhapMang(a,n);
	XuatMang(a,n);
	
	printf("\nCac so sap xep tang la:");
	SapXepLeTang(a,n);
	XuatMang(a,n);
	
	printf("\nso le nho nhat lon hon moi so chan la %d",LeNhoNhat(a,n));
}
