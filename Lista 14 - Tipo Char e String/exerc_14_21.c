#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	
	int i, f, cod;
	char palavra[21], x[] = {'f','i','m','\0'};
	
	//Loop de palavras
	do {
		printf ("Informe uma palavra: ");
		//Limpa o buffer de teclado
		fflush (stdin);
		gets(palavra);
		//Fun��o para comparar as Strings e retornar um inteiro (0 se forem iguais)
		cod = strcmp(palavra,x); 
		//Compara se Strings s�o diferentes
		if (cod != 0){
			//Seta a flag que sinaliza alguma letra mai�scula dentro da String
			f = 0;
			//Varre a String e procura mai�scula
			for (i = 0; palavra[i] != '\0'; i++) {
				if (palavra[i] >= 65 && palavra[i] <= 90)
					//Altera estado da flag para 1 se acha mai�scula
					f = 1;
			}
			//Compara os estados da flag
			if (f == 0)
				printf ("SIM\n");
			else
				printf ("NAO\n");	
		}
	//Repete enquanto o inteiro retornado da fun��o strcmp n�o for zero	
	}while (cod != 0);
	
	return 0;
}
