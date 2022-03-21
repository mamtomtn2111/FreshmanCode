#include<stdio.h>
int main() {
	int n, a, b, c, d, e, y;
	do {
		printf("Nhap n(1<n<5): ");
		scanf("%d",&n);
	} while(n<1 || n>5);
	printf("Nhap x: ");
	scanf("%d",&y);
	a = n/10000;
	b = n%10000/1000;
	c = n%1000/100;
	d = ((n%100/10));
	e = (n%10);
	if(y==a) {
		printf("so %d o vi tri thu 1",y);
	}
	if(y==b) {
		if(a!=0)
			printf("so %d o vi tri thu 2",y);
		else
			printf("so %d o vi tri thu 1",y);
	}
	if(y==c) {
		if(a==0 && b==0)
			printf("so %d o vi tri thu 1",y);
		else if(a==0 && b!=0)
			printf("so %d o vi tri thu 2",y);
		else
			printf("so %d o vi tri thu 3",y);
	}
	if(y==d) {
		if(a==0 && b==0 && c==0)
			printf("so %d o vi tri thu 1",y);
		else if(a==0 && b==0 && c!=0)
			printf("so %d o vi tri thu 2",y);
		else if(a==0 && b!=0 && c!=0)
			printf("so %d o vi tri thu 3",y);
		else
			printf("so %d o vi tri thu 4",y);
	}
	if(y==e) {
		if(a==0 && b==0 && c==0 && d==0)
			printf("so %d o vi tri thu 1",y);
		else if(a==0 && b==0 && c==0 && d!=0)
			printf("so %d o vi tri thu 2",y);
		else if(a==0 && b==0 && c!=0 && d!=0)
			printf("so %d o vi tri thu 3",y);
		else if(a==0 && b!=0 && c!=0 && d!=0)
			printf("so %d o vi tri thu 4",y);
		else
			printf("so %d o vi tri thu 5",y);
	}
}
