#include<stdio.h>
#include<string.h>
#define MAX_CHAR 100
void KiemTraXau(char s[])
{
	int i,ok;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='0' && s[i]<='9' )
		{
			ok=1;
		}
		else
		{
			ok=0;
			break;
		}	 
	}
	if(ok==1)
		printf("Xau da nhap toan so !!");
	else 
		printf("Xau da nhap khong toan so !!");
}
int main()
{
	char xau[MAX_CHAR];
	printf("nhap xau:");
	fflush(stdin);
	gets(xau);
	KiemTraXau(xau);
	return 0;
}
