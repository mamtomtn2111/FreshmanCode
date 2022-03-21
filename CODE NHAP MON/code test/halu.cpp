#include<stdio.h>
#include<string.h>

int CharCounting(char s[])
{
	int i,dem;
	if(s[0]= ' ')
	{
		dem=0;
		for(i=0;i<strlen(s);i++)
			if(s[i]== ' ' && s[i+1]!= ' ' && s[i+1]!= '\0' )
			{
				dem++;
			}
	}
	else 
	{
		dem=1;
		for(i=0;i<strlen(s);i++)
			if(s[i]== ' ' && s[i+1]!= ' ' && s[i+2]!= '\0')
			{
				dem++;
			}
	}
	return dem;
}
char DeleteLeft(char s[])
{
	int i=0,j;
	while(s[i]==' ')
	{
		if(s[i]==' ')
		{
		for(j=0;j<strlen(s);j++)
			{
			s[j]=s[j+1];
			}
		}
	}
}
char DeleteRight(char s[])
{
	int i=strlen(s)-1,j;
	while(s[i]==' ')
	{
		if(s[i]==' ')
		{
			s[i]=s[j+1];
			i--;
		}
	}
}
char DeleteSpace(char s[])
{
	int i,j;
	for(i=0;i<strlen(s)-1;i++)
	{
		if(s[i] != ' ' && s[i+1]== ' ' && s[i+2]== ' ' )
		{
			for(j=i+1;j<strlen(s);j++)
			{
				s[j]=s[j+1];
			}
			i--;
		}
	}
}
int main()
{
	char xau[100];
	printf("Nhap vao xau:");
	gets(xau);
	DeleteLeft(xau);
	DeleteRight(xau);
	printf("Sau khi xoa phai va trai:");
	puts(xau);
	DeleteSpace(xau);
	puts(xau);
	printf("%d",CharCounting(xau));
}
