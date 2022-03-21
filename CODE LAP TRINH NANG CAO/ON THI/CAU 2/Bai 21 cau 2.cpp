#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void XoaTrai(char *p)
{
	int i=0;
	while(*(p+i)==' ')
	{
		if(*(p+i)==' ')
			{
				for(int j=0;j<strlen(p);j++)
					*(p+j)=*(p+j+1);
			}
	}
}

void XoaPhai(char *p)
{
	int i=strlen(p)-1,j;
	while(*(p+i)==' ')
	{
		if(*(p+i)==' ')
			{
				*(p+i)=*(p+j+1);
				i--;
			}
	}
}

void XoaGiua(char *p)
{
	int i,j;
	for(i=0;i<strlen(p)-1;i++)
	{
		if(*(p+i) != ' '  && *(p+i+1)== ' '  && *(p+i+2)==' ')
		{
			for(j=i+1;j<strlen(p);j++)
			{
				*(p+j)=*(p+j+1);
			}
			i--;
		}
	}
}

void InHoaDau(char *p)
{
	int i;
	if(*(p+0)!=' ')
	{
		*(p+0)=*(p+0)-32;
		for(int i=1;i<strlen(p);i++)
		{
			if(*(p+i)==' ' && *(p+i+1)!= ' ' && *(p+i+1)>= 'a' && *(p+i+1)<='z')
				*(p+i+1)=*(p+i+1)-32;
		}
	}
	else
	{
		for(int i=0;i<strlen(p);i++)
		{
			if(*(p+i)==' ' && *(p+i+1)!= ' ' && *(p+i+1)>= 'a' && *(p+i+1)<='z')
			{
				*(p+i+1)=*(p+i+1)-32;
			}
		}
	}
}

int main()
{
	char *p=(char*) malloc (1000*sizeof(char));
	printf("Nhap vao xau: ");
	gets(p);
	
	printf("\nXau sau khi xoa khoang cach trai phai la: ");
		XoaTrai(p);
		XoaPhai(p);
		puts(p);

	printf("\nXau sau khi xoa khoang cach giua la: ");
		XoaGiua(p);
		puts(p);
		
	printf("\nXau sau khi in hoa dau la:");
	InHoaDau(p);
	puts(p);	

	printf("\nXau sau khi in hoa la: %s",strupr(p));
}
