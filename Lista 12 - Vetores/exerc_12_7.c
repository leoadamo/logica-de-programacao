#include <stdio.h>

int main (void) {
	
	int q, idade[10], ind, i;
	
	printf ("Informe a quantidade de Idades: ");
	scanf ("%d", &q);
	
	for (i = 0; i <= q - 1; i++) {
		
		printf ("Informe uma idade: ");
		scanf ("%d", &idade[i]);
	}
	
	do {
		
		printf ("Informe um indice do vetor: ");
		scanf ("%d", &ind);
		
		if (ind >= 0 && ind < 10) {
			
			for (i = 0; i <= q - 1; i++) {
				
				if (ind == i)
				
					printf ("%d\n", idade[ind]);
			}
		}
		
	} while (ind >= 0 && ind < 10);
	
	return 0;
}
