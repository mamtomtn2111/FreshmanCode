#include<stdio.h>
#include<math.h>

int gcd(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    return a + b; 
}

int main()
{
	int a , b , ucln, c, d;
	scanf("%d %d", &a, &b);
	if(a % b == 0){
		c = a / b;
		printf("%d", c);
		return 0;
	}
	ucln = gcd(abs(a), abs(b));
	c = a/ucln;
	d = b/ucln;
	if(a < 0 || b < 0)
		printf("-%d/%d", abs(c), abs(d));	
	else
		printf("%d/%d", c, d);
	return 0;
}
