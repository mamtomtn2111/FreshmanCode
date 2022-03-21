#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void InHoaDau(char *p)
{
	int i;
	if(p[0]!=' ')
	{
		p[0]=p[0]-32;
		for(i=1;i<strlen(p);i++)
		{
			if(*(p+i)==' ' && *(p+i+1)!=' ' && *(p+i+1)>='a' && *(p+i+1)<='z')
			{
				*(p+i+1)=*(p+i+1)-32;
			}
		}
	}
	else
	{
		for(i=0;i<strlen(p);i++)
		{
			if(*(p+i)==' ' && *(p+i+1)!=' ' && *(p+i+1)>='a' && *(p+i+1)<='z')
			{
				*(p+i+1)=*(p+i+1)-32;
			}
		}
	}
}

void XoaGiua(char *p)
{
	int i,j;
	for(i=0;i<strlen(p)-1;i++)
	{
		if(*(p+i) != ' ' && *(p+i+1)== ' ' && *(p+i+2)== ' ' )
		{
			for(j=i+1;j<strlen(p);j++)
			{
				*(p+j)=*(p+j+1);
			}
			i--;
		}
	}
}

void XoaTrai(char *p)
{
	int i=0,j;
	while(*(p+i)== ' ')
	{
		if(*(p+i)== ' ' )
		{
			for(j=0;j<strlen(p);j++)
			{
				*(p+j)=*(p+j+1);
			}
		}
	}
}
void XoaPhai(char *p)
{
	int i=strlen(p)-1,j;
	while(*(p+i)== ' ' )
		{
			if(*(p+i)== ' ')
			{
				*(p+i)=*(p+j+1);
				i--;
			}
		}
}

int main()
{
	char *p=(char*) malloc(1000*sizeof(char));
	FILE *f=fopen("Chuanhoa.txt","w");
	printf("Nhap ten vao: ");
	gets(p);
	
	fputs("=====Xau chuyen moi chu cai dau thanh hoa la:======\n",f);
	printf("=====Xau chuyen moi chu cai dau thanh hoa la:=====\n");
	InHoaDau(p);
	fprintf(f,"%s",p);
	printf("%s",p);
	
	XoaGiua(p);
	XoaTrai(p);
	XoaPhai(p);
	fputs("\n=====Xau xoa cach thua la:======\n",f);
	printf("\n=====Xau xoa cach thua la:=====\n");
	fprintf(f,"%s",p);
	printf("%s",p);
	fclose(f);
}
