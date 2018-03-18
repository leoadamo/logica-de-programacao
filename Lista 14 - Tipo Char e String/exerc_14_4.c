#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char a, b, c;
	
	//Loop para a entrada dos caracteres
	do {
		printf ("Informe o primeiro caractere: ");
		//Limpa buffer de teclado
		fflush (stdin);
		scanf ("%c", &a);
		//Validação para aceitar apenas caracteres válidos (C, D ou F)
		while (a != 'C' && a != 'D' && a != 'F') {
			printf ("Informe o primeiro caractere: ");
			//Limpa buffer de teclado
			fflush (stdin);
			scanf ("%c", &a);
		}
		//Validação para proteção caso o primeiro caractere digitado seja o 'F'
		if (a != 'F') {
			printf ("Informe os dois seguintes caracteres: ");
			//Limpa buffer de teclado
			fflush (stdin);
			scanf ("%c %c", &b, &c);
			//Se for 'C' imprime os seguintes caracteres em ordem crescente, caso seja 'D', faz o oposto
			if (a == 'C')
				printf ("%c %c\n", b, c);
			else
				printf ("%c %c\n", c, b);
		}
	//Repete enquanto caractere inicial for diferente de 'F'	
	}while (a != 'F');
	
	return 0;
}
