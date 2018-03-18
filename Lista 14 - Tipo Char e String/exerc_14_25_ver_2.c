#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	char palavra[21], menor[21], maior[21];
	int i;
	
	//Efetua a leitura da primeira palavra
	printf ("Informe uma palavra: ");
	gets(palavra);
	//Joga para as aux a maior palavra e a menor palavra (sendo que pra ambas será a primeira palavra lida)
	strcpy (maior, palavra);
	strcpy (menor, palavra);
	//Ciclo para ler as demais palavras
	for (i = 0; i < 7; i++) {
		printf ("Informe uma palavra: ");
		gets(palavra);
		//Compara a palavra com a aux maior e caso seja verdadeira, copia para a aux a nova palavra
		if (strcmp(palavra, maior) > 0) 
			strcpy (maior, palavra);
		//Compara a palavra com a aux menor e caso seja verdadeira, copia para a aux a nova palavra	
		if (strcmp(palavra, menor) < 0)
				strcpy(menor, palavra);		
	}
	//Imprime as palavras
	puts(menor);
	puts(maior);
	
	return 0;
}
