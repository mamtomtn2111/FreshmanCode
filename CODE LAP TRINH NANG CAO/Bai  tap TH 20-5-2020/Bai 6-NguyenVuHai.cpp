#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int DemKyTu(char *p)
{
	int i,count;
	if(*(p+0)== ' ')
	{
		count=0;
		for(i=0;i<strlen(p);i++)
		{
			if(*(p+i)==' ' && *(p+i+1) != ' ' && *(p+i+1)!= '\0')
			{
				count++;
			}
		}
	}
	if(*(p+i)!=' ')
	{
		count=1;
		for(i=1;i<strlen(p);i++)
		{
			if(*(p+i)==' ' && *(p+i+1) != ' ')
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	char *p=(char*) malloc(1000*sizeof(char));
	FILE *f=fopen("Sotu.txt","w");
	printf("Nhap vao xau: ");
	gets(p);
	
	fprintf(f,"=====Xau ban vua nhap la:=====\n%s",p);
	
	printf("So tu trong xau la: %d",DemKyTu(p));
	fprintf(f,"\n=====So tu trong xau la: %d",DemKyTu(p));
}
