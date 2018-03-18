#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i;
	char x;
	
	//Determina a quantidade de caracteres a serem lidos
	printf ("Informe um numero de caracteres para serem lidos: ");
	scanf  ("%d", &n);
	//Loop para efetuar a leitura do caractere e seu respectivo código ASCII
	for (i = 0; i < n; i++) {
		//Limpa o buffer de teclado
		fflush (stdin);
		printf ("Informe o caractere %d: ", i+1);
		//Joga o valor correspondente ao caractere à variável x
		x = getchar();
		printf ("%d\n", x);
	}
	
	return 0;
}
