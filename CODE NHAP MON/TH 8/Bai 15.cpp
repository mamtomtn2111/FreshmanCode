#include<stdio.h>
#include<string.h>
#define max 100
char CatHoTen(char s[],char s1[])
{
	int len=strlen(s);
	int i = len-1,j;
	int m=0;
	while(i>=0)
	{
		if((s[i]==' ') && (s[i+1]!=' '))
		{
			for(j=i+1; j<len; j++)
			{
				s1[m]=s[j];
				m++;
			}
			s[i]='\0';
		break;
		}
		i--;
	}
	printf("Ho: %s\n",s);
	printf("Ten: %s",s1);
}
int main()
{
	char s[max];
	char s1[max];
	printf("Nhap xau: ");
	gets(s);
	CatHoTen(s,s1);
}
