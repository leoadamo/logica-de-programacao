#include <stdio.h>

int main (void) {
	
	int ql, qc, m[10][10], i, j, mt[10][10];
	
	//Determina o tamanho que terá a matriz
	printf ("Informe a quantidade de linhas e colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Carrega a matriz com os elementos digitados pelo usuário
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Implementa a matriz transposta (mt), trocando em mt as linhas i por j e vice-versa
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			mt[j][i] = m[i][j];
		}
	}
	//Imprime a nova matriz com "qc" linhas e "ql" colunas
	for (i = 0; i < qc; i++) {
		for (j = 0; j < ql; j++) {
			printf ("%d ", mt[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
