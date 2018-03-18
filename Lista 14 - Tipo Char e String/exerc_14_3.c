#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char a, b;
	
	//Loop para ler os caracteres
	do {
		printf ("Informe dois caracteres: ");
			//Limpa buffer de teclado
			fflush (stdin);
			scanf ("%c %c", &a, &b);
			//Valida se caracteres são diferentes
			if (a != b) {
				if (a > b)
					printf ("Decrescente\n");
				else
					printf ("Crescente\n");
			}
	//Repete enquanto os caracteres forem diferentes		
	}while (a != b);
	
	return 0;
}
