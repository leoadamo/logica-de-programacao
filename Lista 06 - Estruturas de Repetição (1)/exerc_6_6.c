#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int x, y;
	
	printf ("Informe o valor de X: ");
	scanf ("%d", &x);
	
	while (x != 0) {
		printf ("Informe o valor de Y: ");
		scanf ("%d", &y);
		
		if (x > 0) {
			if (y > 0)
				printf ("Primeiro\n");
			else
				printf ("Quarto\n");	
		}else {
			if (y > 0)
				printf ("Segundo\n");
			else
				printf ("Terceiro\n");
		}
	printf ("Informe o valor de X: ");
	scanf ("%d", &x);	
	}
	system ("pause");
}
