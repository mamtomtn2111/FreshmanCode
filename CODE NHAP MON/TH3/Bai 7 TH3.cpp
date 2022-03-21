#include<stdio.h>

int main()

{

	int ga , cho;

	for (ga = 1 ; ga < 36 ; ga++)
		for (cho = 1 ; cho < 36 ; cho++)
			if ((2*ga + 4*cho == 100) && (ga + cho == 36))
				printf ("Ga : %d con, Cho : %d con \n" , ga , cho);

}
