#include <stdio.h>

int main()

{

            unsigned long n;

            int i2=0,j2,t2,a2[100];

            do {

            printf("Nhap so nguyen duong N:");

            scanf("%lu",&n);

            }

            while ((n>(unsigned long)n)||(n<0));

            i2=0;

            do {

            a2[i2]=n%2;

            n=n/2;

            i2++;

            }

            while (n!=0);

            printf("\nSo N o he 2 la: ");

            t2=i2-1;

            for (j2=t2;j2>=0;j2--)

                        printf("%d",a2[j2]);

}
