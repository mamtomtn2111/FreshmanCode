#include<Stdio.h>
#include<string.h>
#define MAX_CHAR 100

char Cap2Nor(char s[])
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			s[i]+=32;
	}
}
int main()
{
	char xau[MAX_CHAR];
	printf("Nhap xau:");
	gets(xau);
	
	Cap2Nor(xau);
	printf("sau kho bo cap:");
	puts(xau);
	return 0;
}
