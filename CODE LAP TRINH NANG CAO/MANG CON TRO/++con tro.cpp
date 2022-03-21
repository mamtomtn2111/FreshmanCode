#include<stdio.h>
int main()
{
	char a=1;
	short b=2;
	long c=3;
	char *mychar= &a;
	mychar=&a;
	short *myshort=&b;
	myshort=&b;
	long *mylong=&c;
	mylong=&c;
	
	printf("\n%d", mychar);
	printf("\n%d", myshort);
	printf("\n%d", mylong);
	++mychar;
	++myshort;
	++mylong;
	printf("\n");
	printf("\n%d",mychar);
	printf("\n%d",myshort);
	printf("\n%d",mylong);
}
