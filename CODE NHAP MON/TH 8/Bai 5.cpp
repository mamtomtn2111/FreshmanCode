#include<stdio.h>
#include<string.h>
#define max 100
void Doi(char s[])
{
	int i;
	int n=strlen(s);
	for(i=0; i<n; i++)
	{
		if((s[i]>='A') && (s[i]<='Z'))
		{
			s[i]=s[i]+32;
		}
	}
	printf("%s",s);
}
int main()
{
	char s[max];
	printf("Nhap chuoi: ");
	gets(s);
	Doi(s);23;
}
