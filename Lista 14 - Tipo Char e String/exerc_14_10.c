#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int t, i, j, cc;
	char letra;
	
	//Informa o número de vezes que o caractere será exibido
	printf ("Informe o numero de vezes que o caractere sera exibido: ");
	scanf ("%d", &t);
	//Informa o caractere
	printf ("Informe um caractere: ");
	//Limpa o buffer de teclado
	fflush (stdin);
	scanf ("%c", &letra);
	//Zera o contador que imprimira a linha de caracteres
	cc = 1;
	//Loop que repete 't' vezes a execução
	for (i = 0; i < t; i++) {
		//Loop que imprime o caracter 'cc' vezes
		for (j = 0; j < cc; j++)
			printf ("%c", letra);
		
		//Incrementa o contador de vezes que o caractere será impresso na linha 'i'	
		cc++;
		printf ("\n");	
	}
	
	return 0;
}
