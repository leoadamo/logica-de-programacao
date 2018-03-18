#include <stdio.h>

int main () {
	
	int n, i, soma;
	
	do {
		
		soma = 0;
	
		printf ("Informe um Numero: ");
		scanf ("%d", &n);
		
		if (n > 0) {
			
			for (i = 1; i <= n - 1; i++) {
				
				if (n % i == 0)
				
					soma += i;		
			}
		
			if (soma == n)
				
				printf ("E' Perfeito\n");
					
			else
				
				printf ("Nao e' Perfeito\n");
		
		}
			
	} while (n > 0);
	
	return 0;	
}
