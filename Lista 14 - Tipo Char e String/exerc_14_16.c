#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i, j, k, cc;
	char palavra[21];
	
	//Determina a quantidade de palavras que serão digitadas pelo usuário
	printf ("Informe um valor inteiro: ");
	scanf ("%d", &n);
	//Loop de palavras
	for (i = 0; i < n; i++) {
		//Zera contador de caracteres
		cc = 0;
		printf ("Informe uma palavra: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		gets(palavra);
		//Varre a String e conta a quantidade de caracteres
		for (j = 0; palavra[j] != '\0'; j++) 
			cc++;
		/*Enquanto não for encontrado o terminador da String, imprime pelo valor máximo do contador - 1,
		pois, deve-se levar em conta o espaço reservado ao terminador de String*/
		for (k = 0; palavra[k] != '\0'; k++) {
			printf ("%c", palavra[cc - 1]);
			cc--;
		}
		//Quebra de Linha
		printf ("\n");	
	}
	
	return 0;
}
