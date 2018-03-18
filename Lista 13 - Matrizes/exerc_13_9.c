#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, c1, c2, cc, v[10], m[10][10];
	
	//Esta linha determinará o tamanho da Matriz
	printf ("Informe a quantidade de linhas e colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Carrega a matriz com os valores digitados pelo usuário
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Lê as colunas que serão usadas para realizar as operações
	printf ("Informe as colunas que serao utilizadas: ");
	scanf ("%d %d", &c1, &c2);
	/*Zera um contador que determinará o tamanho do vetor e faz a cópia sem deixar espaços em branco
	mediante a validação da condição (m[i][j] é par)*/
	cc = 0;
	for (i = 0; i < ql; i++) {
		for (j = c1; j <= c2; j++) {
			if (m[i][j] % 2 == 0) {
				v[cc] = m[i][j];
				cc++;
			}
		}
	}
	//Imprime vetor resultante
	for (i = 0; i < cc; i++) 
		printf ("%d ", v[i]);
	
	printf ("\n");
	
	return 0;	
}
