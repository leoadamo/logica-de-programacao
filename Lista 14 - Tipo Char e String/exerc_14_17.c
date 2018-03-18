#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char ch, palavra[11];
	int i, cc;
	
	//Repetição de caracteres e Strings
	do {
		printf ("Informe uma letra: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		scanf ("%c", &ch);
		//Se o caracter digitado for válido lê a String
		if (ch != 'f') {
			printf ("Informe uma palavra: ");
			//Limpa o buffer de teclado
			fflush (stdin);
			gets(palavra);
			//Zera o contador de caracteres iguais
			cc = 0;
			//Varre a String à procura de caracteres iguais
			for (i = 0; palavra[i] != '\0'; i++) {
				if (ch == palavra[i])
					cc++;
			}
			//Imprime o contador de iguais
			printf ("%d\n", cc);	
		}
	//Repete enquanto o caractere digitado for diferente de 'f'	
	}while (ch != 'f');
	
	return 0;
}
