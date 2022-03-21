#include<stdio.h>
#include<math.h>
void NhapMang(int a[],int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void NT(int x) {
	int i;
	if(x==1)
		return 0;
	else {
		for(i=2; i<=sqrt(x); i++) {
			if(x%i==0)
				return 0;
			return 1;
		}
	}
}
void In(int a[],int n) {
	int i;
	printf("Cac phan tu la so nguyen to co trong mang la:\n");
	int dem=0;
	for(i=0; i<n-1; i++) {
		if(NT(a[i])) {
			printf("a[%d] = %d\n",i,a[i]);
			dem++;
		}
	}	printf("dem = %d",dem);

	if(dem==0)

		printf("Mang khong co so nguyen to nao!");

}

int main() {

	int n;

	int a[n];

	printf("Nhap n: ");

	scanf("%d",&n);

	NhapMang(a, n);

	In(a, n);

}
