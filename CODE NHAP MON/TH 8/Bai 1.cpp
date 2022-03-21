#include<stdio.h>
#include<string.h>
#include<conio.h>
void DaoChuoi(char s1[], char s2[]) {
	int l=strlen(s1);
	int i;
	for(i=0; i<l; i++)
		s2[i]=s1[l-1-i];
	s2[i]='\0';
}
int main() {
	char s1[100], s2[100];
	printf("\nNhap vao chuoi ky tu: ");
	gets(s1);
	DaoChuoi(s1, s2);
	printf("\nChuoi nguoc lai: %s", s2);
}
