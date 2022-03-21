#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *p=(char*) malloc(100*sizeof(char));
	FILE *f=fopen("Chuhoa.txt","w");
	printf("Nhap vao xau: ");
	gets(p);
	printf("\nXau sau nhap la: \n%s",p);
	fprintf(f,"\nXau sau nhap la: \n%s",p);
	strupr(p);
	printf("\nXau sau khi in hoa la: \n%s",p);
	fprintf(f,"\nXau sau khi in hoa la: \n%s",p);
}
