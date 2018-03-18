#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, c1, c2, cc, v[10], m[10][10];
	
	//Esta linha determinar� o tamanho da Matriz
	printf ("Informe a quantidade de linhas e colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Carrega a matriz com os valores digitados pelo usu�rio
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//L� as colunas que ser�o usadas para realizar as opera��es
	printf ("Informe as colunas que serao utilizadas: ");
	scanf ("%d %d", &c1, &c2);
	/*Zera um contador que determinar� o tamanho do vetor e faz a c�pia sem deixar espa�os em branco
	mediante a valida��o da condi��o (m[i][j] � par)*/
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
