#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	char palavra[21], x[] = {'f','i','m','\0'}, y[] = {'a','e','i','o','u','\0'};
	int cod, i, j, cc;
	
	//Loop de palavras
	do {
		printf ("Informe uma palavra: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		gets(palavra);
		//Joga à variável 'cod' um inteiro resultante da função 'strcmp', que compara as duas Strings
		cod = strcmp(palavra, x);
		if (cod != 0) {
			//Zera um contador de vogais
			cc = 0;
			//Varre a String à procura de vogais, comparando com a String de vogais 'y'
			for (i = 0; palavra[i] != '\0'; i++) {
				for (j = 0; y[j] != '\0'; j++) {
					if (palavra[i] == y[j])
						cc++;
				}
			}
			//Imprime o número de vogais
			printf ("Numero de Vogais = %d\n", cc);
		}
	//Repete enquanto as Strings forem diferentes	
	}while (cod != 0);
	
	return 0;
}
