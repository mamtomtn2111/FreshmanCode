#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Docfile(int *p, int &n)
{
	printf("Cac phan tu doc tu file la:\n");
	FILE *f;
	f = fopen("MANGA.txt","r");
	if(f == NULL)
		{
			printf("Error");
			return;
		}
	int i = 0;
	while(!feof(f))
		{
			fscanf(f, "%d\t", p+i);
			i++;
			n=i;
		
		}
		
	for(int i=0; i<n; i++)
		
		{
	    printf("%5d ", *(p+i));
	    }
	fclose(f);
}

int HopLe(int *p,int n)
{
	int match=1;
	for(int i=0;i<n-1;i++)
	{
		if(*(p+i)>*(p+i+1))
			match=0;
	}
	return match;
}

int SapXepTang(int *p,int n)
{	
	int temp;
	FILE *f=fopen("DayTang.txt","w");
    if(f!=NULL)
    {
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(*(p+i)>*(p+j))
				{
					temp=*(p+i);
					*(p+i)=*(p+j);
					*(p+j)=temp;
				}
			}
		}
    printf("\n\nSap xep tang cho mang tren la:");
	fprintf(f,"Sap xep tang cho mang tren la:");
	for(int i=0;i<n;i++)
					{
			
						printf(" %d",*(p+i));
				
						fprintf(f," %d",*(p+i));
			
				   }
}
	fclose(f);
}

int main()
{
	int *p,n;
	p=(int *) malloc(1000*sizeof(int));
	Docfile(p,n);
	
	if(HopLe(p,n))
		printf("\n\nDay la mang tang, HOP LE!!!");
	else printf("\nMang khong hop le !!!!");
	
	SapXepTang(p,n);

	
}
