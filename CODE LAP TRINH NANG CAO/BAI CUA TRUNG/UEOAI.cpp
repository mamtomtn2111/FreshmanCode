#include<stdio.h>
#include<string.h>
int kiemtra(char p[],int i) 
{
	int ktu=0,kte=0,kto=0,kta=0,kti=0;
	for(int i=0; i<=strlen(p); i++)
	{
		if(p[i]=='u') 
			ktu++;
		if(ktu>1)
			return 0;
		return 1;
	}
	for(int i=0; i<=strlen(p); i++)
	{
		if(p[i]=='e') 
			kte++;
		if(kte>1)
			return 0;
		return 1;
	}
	for(int i=0; i<=strlen(p); i++)
	{
		if(p[i]=='o') 
			kto++;
		if(kto>1)
			return 0;
		return 1;
	}
	for(int i=0; i<=strlen(p); i++)
	{
		if(p[i]=='a') 
			kta++;
		if(kta>1)
			return 0;
		return 1;
	}
	for(int i=0; i<=strlen(p); i++)
	{
		if(p[i]=='i') 
			kti++;
		if(kti>1)
			return 0;
		return 1;
	}
}

int demu(char p[],int i) 
{
	int demu=0;
	for (int i=0; i<strlen(p); i++)
	{
		if(p[i]=='u') 
		demu++;
	}
	return demu;
}
int deme(char p[],int i)
{
	int deme=0;
	for (int i=0; i<strlen(p); i++)
	{
		if(p[i]=='e') 
		deme++;
	}
	return deme;
}
int demo(char p[],int i)
{
	int demo=0;
	for (int i=0; i<strlen(p); i++)
	{
		if(p[i]=='o') 
		demo++;
	}
	return demo;
}
int dema(char p[],int i)
{
	int dema=0;
	for (int i=0; i<strlen(p); i++)
	{
		if(p[i]=='a') 
		dema++;
	}
	return dema;
}
int demi(char p[],int i)
{
	int demi=0;
	for (int i=0; i<strlen(p); i++)
	{
		if(p[i]=='i') 
		demi++;
	}
	return demi;
}


int main()
{
	int tonga=0,tonge=0,tongi=0,tongo=0,tongu=0;
	int i;
	char key[50]="Y";
	char a[50];
	char p[1000];
	do
	{
		puts("\nMoi ban nhap xau: ");
		gets(p);
			if((p[i]!=' ')&&(kiemtra(p,i))==1)
				printf("\n+)Thong ke: a(%d), e(%d), i(%d), o(%d), u(%d)",dema(p,i),deme(p,i),demi(p,i),demo(p,i),demu(p,i));
		puts("\nBan co muon tiep tuc nhap nua khong(Y|N)");
		gets(a);
		tonga+=dema(p,i);
		tonge+=deme(p,i);
		tongi+=demi(p,i);
		tongo+=demo(p,i);
		tongu+=demu(p,i);
	}while(strcmp(a,key)==0);
		if((p[i]!=' ')&&(kiemtra(p,i))==1)
	printf("\n+)Thong ke: a(%d), e(%d), i(%d), o(%d), u(%d)",tonga,tonge,tongi,tongo,tongu);
}
