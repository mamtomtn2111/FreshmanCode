#include<stdio.h>
int Min(int a[],int n)
{
	int min, mini,i;
	min = a[0];
	mini = 0;
	for(i=1; i<n; i++)
		if(a[i]<min)
		{
			min = a[i];
			mini = i;
		}
	return mini;
}
