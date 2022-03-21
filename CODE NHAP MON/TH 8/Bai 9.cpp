#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30], s2[12];
	printf("Nhap s1: ");
	gets(s1);
	printf("Nhap s2: ");
	gets(s2);
	strcat(s1,s2);
	printf("Chuoi sau khi noi la: ");
	puts(s1);
	return 0;
}
