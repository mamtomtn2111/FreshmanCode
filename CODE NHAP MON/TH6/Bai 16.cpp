#include<stdio.h>
int viTricuoi(int a[],int n,int x) ;
int main()
{
	int i;
	for(i=n-1; i>=0; i--)
	 {
		if(a[i]==x)
		 {
			return i;
			break;
		}
	}
}
