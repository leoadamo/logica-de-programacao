#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int t, i, j, k, ca, cb;
	char a, b;
	
	//Informa o número de linhas em que os caracteres serão impressos
	printf ("Informe um inteiro: ");
	scanf ("%d", &t);
	//Informa os caracteres
	printf ("Informe dois caracteres: ");
	//Limpa o buffer de teclado
	fflush (stdin);
	scanf ("%c %c", &a, &b);
	//Seta os contadores que determinarão o número de caracteres impressos na linha 
	ca = 1, cb = 1;
	//Loop de linha
	for (i = 0; i < t; i++) {
		//Loop de caractere a
		for (j = 0; j < ca; j++) {
			printf ("%c", a);
		}
		//Loop de caractere b
		for (k = 0; k < cb; k++) {
			printf ("%c", b);
		}
		//Incrementa os contadores
		ca++;
		cb++;
		//Quebra de linha
		printf ("\n");
	}
	
	return 0;
}
