#include <stdio.h>

int main (void) {
	
	int m[4][4], i, j, cod1, cod2;
	
	//Carrega a matriz com os valores digitados pelo usuário
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	system ("cls");
	//Loop para informar e imprimir a distância entre as duas cidades
	do {
		printf ("Informe o codigo da cidade A: ");
		scanf ("%d", &cod1);
		if (cod1 >= 0 && cod1 < 4) {
			printf ("Informe o codigo da cidade B: ");
			scanf ("%d", &cod2);
			if (cod2 >= 0 && cod2 < 4) {
				printf ("%d\n", m[cod1][cod2]);
			}
		}
	//Repete enquanto o valor digitado para "cod1" ou "cod2" for válido, ou seja, seja menor que o limite de linhas e colunas da matriz	
	}while ((cod1 >= 0 && cod1 < 4) && (cod2 >= 0 && cod2 < 4));
	
	return 0;
}
