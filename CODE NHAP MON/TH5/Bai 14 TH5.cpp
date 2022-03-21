#include <stdio.h>
int f1 (int x, int &y) {
	++x;
	y++;
	return x + y;
}
int f2 (int &x, int y) {
	--x;
	y--;
	return x - y;
}
int main() {
	int x=5, y=6;
	printf("f1 = %d, x = %d, y= %d \n", f1 (y, x), x, y);
	printf("f2 = %d, x = %d, y= %d \n", f2 (y, x), x, y);
}
