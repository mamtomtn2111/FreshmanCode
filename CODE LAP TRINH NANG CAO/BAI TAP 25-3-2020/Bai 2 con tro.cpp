//Built by Nguyen Vu Hai - CNTTK18CLC

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void DemTu(char *p)
{
	int count=0;
	for(int i=0;i<strlen(p);i++)
		if(*(p+i)==' ' &&(*(p+i)+1) != ' ' && (*(p+i)+1)!='\0')
	count++;
	if(*(p+0)==' ')
		count--;
	printf("\nSo tu trong xau la:%d",count+1);
}

char *viethoa(char *p)
{
	for(int i=0;i<strlen(p);i++)
		if(*(p+i)>='a' && *(p+i)<='z')
			*(p+i)=*(p+i)-32;
	return p;
}

int main()
{
	char *p;
	p=(char*)malloc(100*sizeof(char));
	printf("Nhap xau s:");
	fflush(stdin);
	gets(p);
	
	printf("Xau vua nhap la:%s",p);
	printf("\n\nDo dai cua xau la: %d",strlen(p));
	printf("\n\nXau viet hoa la: %s\n",viethoa(p));
	DemTu(p);
	getch();
	return 1;
}
