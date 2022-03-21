#include<stdio.h>
#include<stdlib.h>
void In(float *p,int n){
	for(int i = 0; i < n;i++){
		printf("a[%d]:",i);
		scanf("%f",p+i);
	}
}

void Out(float *p, int n){
	for(int i = 0; i < n;i++){
		printf("%.1f ",*(p+i));
	}
}

void Increase(float *p, int n){
	float temp;
	for(int i =0;i < n -1;i++)
		for(int j = i + 1; j < n;j++){
			if(*(p+i) > *(p+j)){
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
}

void Search(float *p, int n){
	float x;
	printf("Enter the value x to be searched: ");
	scanf("%f",&x);
	printf("\nFound %.1f at position: ",x);
	for(int i = 0; i < n;i++){
		if(*(p+i) == x){
			printf("%d ",i);
		}
	}
}

int main(){
	float *p;
	int n;
	int choice;
	do{
		printf("\nSelect options:");
		printf("\n1. Enter the list of float numbers");
		printf("\n2. Sort the list in increasing order");
		printf("\n3. Search value x in the list");
		printf("\n4. Display the list");
		printf("\n0. Exit");
		printf("\nYour selection (0 -> 4): ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				p=(float*) malloc(n*sizeof(float));
				printf("\nInput size of array n = ");
				do
				{
					scanf("%d",&n);
					if(n<1) printf("\nFalse input ,Input again size of array n = ");
				}while(n<1);
				In(p,n);
				break;
			case 2:
				printf("\nBefore sorting: ");
				Out(p,n);
				printf("\nAfter sorting: ");
				Increase(p,n);
				Out(p,n);
				break;
			case 3:
				Search(p,n);
				break;
			case 4:
				printf("\nDisplay the list: \n");
				Out(p,n);
				break;
			default:
				printf("You chose wrong order !!!");
				break;
		}
	}while(choice != 0);
	
}
