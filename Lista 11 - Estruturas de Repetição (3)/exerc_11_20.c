#include <stdio.h>

int main (void) {
	
	int n, c, soma, i, numero;
	
	printf ("Informe um Numero: ");
	scanf ("%d", &n);
	
	numero = 1, c = 0;
	
	while (c != n) {
		
		soma = 0;
		
		for (i = 1; i < numero; i++) 
		
			if (numero % i == 0)
				
				soma += i;
				
		if (soma == numero) {
			
			printf ("%d ", numero);
			
			c++;
		}	
		
		numero++;	
	}
	
	printf ("\n");
	
	return 0;
 }
