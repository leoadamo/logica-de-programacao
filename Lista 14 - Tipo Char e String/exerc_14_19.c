#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int n, i, j, k, c1, c2;
	char palavra1[21], palavra2[21];
	
	//Informa o número de palavras
	printf ("Informe um numero de palavras: ");
	scanf ("%d", &n);
	//Loop de palavras
	for (i = 0; i < n; i++) {
		//Zera os contadores de caracteres de cada palavra
		c1 = 0, c2 = 0;
		//Lê a dupla de Strings
		printf ("Informe duas palavras: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		scanf ("%s %s", palavra1, palavra2);
		//Loop para contar o número de caracteres da palavra1
		for (j = 0; palavra1[j] != '\0'; j++) 
			c1++;
		//Loop para contar o número de caracteres da palavra2	
		for (k = 0; palavra2[k] != '\0'; k++)
			c2++;
		//Compara os contadores de caracteres e imprime de acordo com a condição validada
		if (c1 == c2)
			printf ("IGUAIS\n");
		else
			if (c1 > c2)
				printf ("CRESCENTE\n");
			else
				printf ("DECRESCENTE\n");		
	}
	
	return 0;
}
