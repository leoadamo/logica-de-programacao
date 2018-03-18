#include <stdio.h>

int main (void) {
	
	int cod, i, v[8], achei;
	
	for (i = 0; i <= 7; i++) {
		
		printf ("Informe o codigo: ");
		scanf ("%d", &v[i]);
	}
	
	do {
		
		printf ("Informe o codigo novamente: ");
		scanf ("%d", &cod);
		
		if (cod > 0) {
			
			achei = 0;   // faz a busca
			
			for (i = 0; i <= 7; i++) {	
						
				if (cod == v[i]) {	
							
					printf ("%d \n", i);					
					achei = 1;
				}
			}
			
			if (achei == 0)
				printf ("O Codigo informado nao existe\n");
		}
		
	} while (cod > 0);
	
	return 0;
}


