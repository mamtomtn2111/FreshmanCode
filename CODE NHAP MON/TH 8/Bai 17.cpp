#include<stdio.h>
#include<string.h>
#define max 100
char XoaKyTu(char s[],char s1[])
{
	int len=strlen(s);
	int i;
	for(i=0; i<len; i++)
	{
		if(s[i]==s1[0])
		{
			int j;
			for(j=i; j<len; j++)
			{
				s[j]=s[j+1];
			}
			s[j+1]='\0';
			i--;
		}
	}
	printf("Chuoi ky tu: %s",s);
}
int main()
{
	char s[max];
	int          n=1;
	char s2[n];
	int a[max];
	printf("Nhap xau: ");
	gets(s);
	printf("Nhap ky tu muon xoa: ");
	gets(s2);
	XoaKyTu(s,s2);
}
