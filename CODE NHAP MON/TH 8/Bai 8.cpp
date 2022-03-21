#include<stdio.h>
#include<string.h>
#define max 100
void LoaiKhoangTrang(char s[])
{
	int i,j,k;
	for(i=1; i<strlen(s)-1; i++)
	{
		if((s[i]==' ') && (s[i+1]==' '))
		{
			for(j=i; j<strlen(s)-1; j++)
			{
				s[j]=s[j+1];
			}
			s[strlen(s)-1]='\0';
		}
	}
	if(s[0]==' ')
	{
		for(k=0; k<strlen(s)-1; k++)
		{
			s[k]=s[k+1];
		}
		s[strlen(s)-1]='\0';
	}
	if(s[strlen(s)-1]==' ')
	{
		s[strlen(s)-1]='\0';
	}
	printf("Chuoi sau khi loai khoang trang la .%s.",s);
}
int main()
{
	char s[max];
	printf("Nhap chuoi: ");
	gets(s);
	LoaiKhoangTrang(s);
}
