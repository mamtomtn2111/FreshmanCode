#include<stdio.h>
#include<string.h>
#define MAX_CHAR 100

char Nor2Cap(char s[])
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]-=32;
	}
}
int main()
{
	char xau[MAX_CHAR];
	printf("Nhap xau:");
	gets(xau);
	
	Nor2Cap(xau);
	printf("After convert:");
	puts(xau);
	return 0;
}
