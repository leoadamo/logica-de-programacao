#include <stdio.h>

int main (void) {
	
	int q, r, a[10], b[10], cod, i, c, s[10];
	
	printf ("Informe DOIS valores: ");
	scanf ("%d %d", &q, &r);
	
	//Carrega o Vetor "a" com "q" Valores
	for (i = 0; i < q; i++) {
		printf ("Informe o valor %d do Vetor A: ", i+1);
		scanf ("%d", &a[i]);
	}
	
	//Carrega o Vetor "b" com "r" Valores
	for (i = 0; i < r; i++) {
		printf ("Informe o valor %d do Vetor B: ", i+1);
		scanf ("%d", &b[i]);	
	}
	
	//Loop para a impressão do vetor "s" de acordo com o código de ordenação
	do {
		
		printf ("Informe o Codigo para a copia (1. A antes de B / 2. B antes de A / 3. Fim): ");
		scanf ("%d", &cod);
		
		if (cod == 1 || cod == 2) {
			if (cod == 1) {
				//Vetor "s" recebe os primeiros valores do Vetor "a"
				for (i = 0; i < q; i++) {
					s[i] = a[i];
				}
				
				//Determina em qual índice a cópia irá continuar
				c = q;
				//Vetor "s" recebe os restantes elementos do Vetor "b"
				for (i = 0; i < r; i++) {
					s[c] = b[i];
					c++;
				}
				
				//Imprime o Vetor "s" resultante
				for (i = 0; i < q + r; i++) {
					printf ("%d ", s[i]);
				}
				
				printf ("\n");
				
			}else {
				//Vetor "s" recebe os primeiros valores do Vetor "b"
				for (i = 0; i < r; i++) {
					s[i] = b[i];
				}
				
				//Determina em qual índice a cópia irá continuar
				c = r;
				//Vetor "s" recebe os restantes elementos do Vetor "a"
				for (i = 0; i < q; i++) {
					s[c] = a[i];
					c++;
				}
				
				//Imprime o Vetor "s" resultante
				for (i = 0; i < q + r; i++) {
					printf ("%d ", s[i]);
				}
				
				printf ("\n");
			}
		}
		printf ("\n");
		
	} while (cod != 3);
	
	return 0;	
} 
	
	

