#include<stdio.h>
#include<math.h>
void NhapMang(int a[],int n)
	{
	int i;
	for(i=0; i<n; i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
int Nt(int n) {
	if(n == 1) return 0;
	int i;
	for(i=2; i<=sqrt(n); i++)
		if(n%i == 0)
			return 0;
	return 1;
}
void XuatMangNT(int a[],int n) {
	printf("Cac phan tu la so nguyen to co trong mang la: \n");
	int i;
	int demnt=0;
	int snt=0;
	for(i=0; i<n; i++)
	{
		if(Nt(a[i]))
		{
			printf("a[%d] = %d \n",i,a[i]);
			demnt++;
			snt+=a[i];0
		}
	}
	printf("Mang co %d so nguyen to. \n",demnt);
	printf("Tong cac so nguyen to trong mang la: %d \n",snt);
}
int cp(int n)
{
	if(n == sqrt(n) * sqrt(n))
		return 1;
	else
		return 0;
}
void incp(int a[],int n)
{
	int i;
	int demcp=0;
	int s=0;
	printf("Cac phan tu la so chinh phuog trong mang: \n");
	for(i=0; i<n; i++)
	{
		if(cp(a[i]))
		{
			printf("a[%d] = %d \n",i,a[i]);
			demcp++;
			s+=a[i];
		}
	}
	printf("Mang co %d so chinh phuong. \n",demcp);
	printf("Tong cac so chinh phuong trong mang la: %d \n",s);
}
int main()
{
	int n;
	int a[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	NhapMang(a, n);
	incp(a, n);
	XuatMangNT(a, n);
}
