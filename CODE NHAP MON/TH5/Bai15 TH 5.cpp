#include <stdio.h>
int f1 (int x, int &y) {
	x++;
	y++;
	return x+y;
}
int f2(int &x, int &y) {
	return --x+y--;
}
int main() {
	int a=5, b=6;
	printf("f1 = %d, a= %d, b=%d", f1 (a, b), a, b);
	printf("f2= %d, a= %d, b=%d", f2 (b, a), a, b);
}
