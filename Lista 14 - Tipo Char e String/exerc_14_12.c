#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int t, i, j, ca, cb;
	char a, b;
	
	//Informa o número de linhas em que os caracteres serão impressos
	printf ("Informe um inteiro: ");
	scanf ("%d", &t);
	//Informa os caracteres
	printf ("Informe dois caracteres: ");
	//Limpa o buffer de teclado
	fflush (stdin);
	scanf ("%c %c", &a, &b);
	//Seta os contadores que determinarão a quantidades de vezes que o caractere aparecerá na linha
	ca = t, cb = 1;
	//Loop de linha
	for (i = 0; i < t; i++) {
		//Loop de caractere 'b'
		for (j = 0; j < ca; j++) {
			printf ("%c", b);
		}
		//Loop de caractere 'a'
		for (j = 0; j < cb; j++) {
			printf ("%c", a);
		}
		//Loop de caractere 'b'
		for (j = 0; j < ca; j++) {
			printf ("%c", b);
		}
		//Decrementa contador do caractere 'b'
		ca--;
		//Incrementa 2 ao contador do caractere 'a'
		cb += 2;
		//Quebra de linha
		printf ("\n");
	}
	
	return 0;
}
