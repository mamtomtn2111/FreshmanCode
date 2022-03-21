#include<stdio.h>
#include<string.h>
int DemKyTu(char s[])
{
	int i,j,dem;
	if(s[0]== ' ' )
	{
		dem=0;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]== ' ' && s[i+1] != ' ' &&s[i+1] != '\0')
			{
				dem++;
			}
		}
	}
	else
	{
		dem=1;
		for(i=1;i<strlen(s);i++)
		{
			if(s[i]== ' ' && s[i+1]!= ' ' && s[i+2] != '\0' )
			{
				dem++;
			} 
		}
	}
	return dem;
}
int main()
{
	char xau[99];
	printf("Nhap Xau:");
	gets(xau);
	printf("Co %d ky tu trong xau",DemKyTu(xau));
}
