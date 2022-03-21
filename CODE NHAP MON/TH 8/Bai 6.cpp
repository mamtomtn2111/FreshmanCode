#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
	char s[max];
	printf("Nhap chuoi: ");
	gets(s);
	printf("Chuoi co %d ky tu!",strlen(s));
}
