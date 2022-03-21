#include<stdio.h>
#include<string.h>
void XoaGiua(char p[])
{
	int i,j;
	for(i=0;i<strlen(p)-1;i++)
	{
		if(p[i] != ' ' && p[i+1]== ' ' && p[i+2]== ' ' )
		{
			for(j=i+1;j<strlen(p);j++)
			{
				p[j]=p[j+1];
			}
			i--;
		}
	}
}

void XoaTrai(char p[])
{
	int i=0,j;
	while(p[i]== ' ')
	{
		if(p[i]== ' ' )
		{
			for(j=0;j<strlen(p);j++)
			{
				p[j]=p[j+1];
			}
		}
	}
}
void XoaPhai(char p[])
{
	int i=strlen(p)-1,j;
	while(p[i]== ' ' )
		{
			if(p[i]== ' ')
			{
				p[i]=p[j+1];
				i--;
			}
		}
}

int kiemtra(char p[],int i)
{
     int kt=0;
     for(int j=0;j<=i;j++)
    if(p[i]==p[j]) 
	 	kt++; 
    if(kt>1)
	 	return 0;
     return 1;  
}

int dem(char p[],int i)
{
   int dem=0;
   for (int j=i;j<strlen(p);j++)
   {
       if(p[i]==p[j])
	   		dem++;
   }
   return dem;
}

int main()
{
	char p[50];
	printf("Moi nhap xau: ");
	gets(p);
	XoaTrai(p);
	XoaPhai(p);
	XoaGiua(p);
	
	for(int i=0;i<strlen(p);i++)
	{
		if((p[i]!=' ') && (kiemtra(p,i))==1)
			printf("\n//%c(%d)",p[i],dem(p,i));
	}
}
