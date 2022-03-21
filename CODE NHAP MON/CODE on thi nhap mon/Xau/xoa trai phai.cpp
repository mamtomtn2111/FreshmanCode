#include<stdio.h>
#include<string.h>
void XoaTrai(char xau[])
{
	int i=0,j;
	while(xau[i]== ' ')
	{
		if(xau[i]== ' ' )
		{
			for(j=0;j<strlen(xau);j++)
			{
				xau[j]=xau[j+1];
			}
		}
	}
}
void XoaPhai(char xau[])
{
	int i=strlen(xau)-1,j;
	while(xau[i]== ' ' )
		{
			if(xau[i]== ' ')
			{
				xau[i]=xau[j+1];
				i--;
			}
		}
}
int main()
{
	char xau[99];
	printf("Nhap xau:");
	gets(xau);
	XoaTrai(xau);
	printf("xau sau khi vua xoa khoang trai va phai la:");
	puts(xau);
	XoaPhai(xau);
}
