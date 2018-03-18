#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i, j;
	char palavra[21];
	
	//Determina a quantidade de palavras que serão lidas
	printf ("Informe um valor inteiro: ");
	scanf ("%d", &n);
	//Loop de palavras
	for (i = 0; i < n; i++) {
		printf ("Informe uma palavra: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		gets(palavra);
		//Varre a palavra em busca de elementos palavra[j] iguais ao caractere 'a'
		for (j = 0; palavra[j] != '\0'; j++) {
			if (palavra[j] == 'a')
				//Se encontrado algum caractere 'a' troca pelo caractere '-' 
				palavra[j] = '-';
		}
		//Imprime a palavra com as modificações
		for (j = 0; palavra[j] != '\0'; j++)
			printf ("%c", palavra[j]);
		
		//Quebra de linha
		printf ("\n");	
	}
	
	return 0;
}
