#include<stdio.h>
#include<string.h>
void XoaGiua(char xau[])
{
	int i,j;
	for(i=0;i<strlen(xau)-1;i++)
	{
		if(xau[i] != ' ' && xau[i+1]== ' ' && xau[i+2]== ' ' )
		{
			for(j=i+1;j<strlen(xau);j++)
			{
				xau[j]=xau[j+1];
			}
			i--;
		}
	}
}
int main()
{
	char xau[99];
	printf("Nhap xau:");
	gets(xau);
	XoaGiua(xau);
	printf("xau sau khi xoa dau cach la:");
	puts(xau);
}
