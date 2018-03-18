#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int cod, i, j, k, c1, c2;
	char palavra1[21], palavra2[21];
	
	//Loop de Códigos
	do {
		printf ("Informe um codigo: (1.Crescente / 2.Decrescente): ");
		scanf ("%d", &cod);
		//Validação de códigos (cod = 1 ou cod = 2)
		if (cod == 1 || cod == 2) {
			//Zera o contador de caracteres
			c1 = 0, c2 = 0;
			//Lê a dupla de Strings
			printf ("Informe duas palavras: ");
			scanf ("%s %s", palavra1, palavra2);
			//Se cod = 1 operação 'Crescente'
			if (cod == 1) {
				//Conta o número de caracteres da primeira String
				for (i = 0; palavra1[i] != '\0'; i++)
					c1++;
				//Conta o número de caracteres da segunda String
				for (j = 0; palavra2[j] != '\0'; j++)
					c2++;
				//Compara a maior das Strings
				if (c1 > c2) {
					//imprime a menor String primeiro
					for (i = 0; palavra2[i] != '\0'; i++)
						printf ("%c", palavra2[i]);
					//Imprime a vírgula
					printf (",");
					//Imprime a maior String por último
					for (j = 0; palavra1[j] != '\0'; j++)
						printf ("%c", palavra1[j]);			
				}else {
					//imprime a menor String primeiro
					for (i = 0; palavra1[i] != '\0'; i++)
						printf ("%c", palavra1[i]);
					//Imprime a vírgula
					printf (",");
					//Imprime a maior String por último
					for (j = 0; palavra2[j] != '\0'; j++)
						printf ("%c", palavra2[j]);	
				}				
			}else { //Cod = 2 operação 'Decrescente'
				//Conta o número de caracteres da primeira String
				for (i = 0; palavra1[i] != '\0'; i++)
					c1++;
				//Conta o número de caracteres da segunda String
				for (j = 0; palavra2[j] != '\0'; j++)
					c2++;
				//Compara a maior das Strings	
				if (c1 > c2) {
					//Imprime a maior String por primeiro
					for (i = 0; palavra1[i] != '\0'; i++)
						printf ("%c", palavra1[i]);
					//Imprime a vírgula
					printf (",");
					//Imprime a menor String por último
					for (j = 0; palavra2[j] != '\0'; j++)
						printf ("%c", palavra2[j]);	
				}else {
					//Imprime a maior String por primeiro
					for (i = 0; palavra2[i] != '\0'; i++)
						printf ("%c", palavra2[i]);
					//Imprime a vírgula
					printf (",");
					//Imprime a menor String por último
					for (j = 0; palavra1[j] != '\0'; j++)
						printf ("%c", palavra1[j]);	
				}
						
			}
		//Quebra de linha
		printf ("\n");
		}
	//Repete enquanto o código for válido	
	}while (cod == 1 || cod == 2);
	
	return 0;
}
