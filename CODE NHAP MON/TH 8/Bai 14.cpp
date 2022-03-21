#include<stdio.h>
#include<string.h>
#define max 100
char TimKyTuTrongChuoi(char s[],char s2[])
{
	int i;
	int dem=0;
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]==s2[0])
		{
			dem++;
		}
	}
	printf("Ky tu ban da nhap xuat hien %d lan trong chuoi.",dem);
}
int main()
{
	char s[max];
	char s2[max];
	printf("Nhap chuoi: ");
	gets(s);
	printf("Nhap ky tu muon tim: ");
	gets(s2);
	TimKyTuTrongChuoi(s,s2);
}
