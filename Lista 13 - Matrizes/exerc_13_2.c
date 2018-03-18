#include <stdio.h>

int main (void) {
	
	int ma[3][5], mb[3][5], i, j, ms[3][5], md[3][5];
	
	//Carrega a Matriz A
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf ("Informe o elemento %d %d da Matriz A: ", i, j);
			scanf ("%d", &ma[i][j]);
		}
		printf ("\n");
	}
	//Carrega a Metriz B
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf ("Informe o elemento %d %d da Matriz B: ", i, j);
			scanf ("%d", &mb[i][j]);
		}
		printf ("\n");
	}
	//Determinando a matriz Soma
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			ms[i][j] = ma[i][j] + mb[i][j];
		}
	}
	//Imprime a matriz Soma
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf ("%d ", ms[i][j]);
		}
		printf ("\n");
	}
	printf("\n");
	//Determinando a matriz Diferença
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			md[i][j] = ma[i][j] - mb[i][j];
		}
	}
	//Imprime a matriz Diferença
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf ("%d ", md[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
