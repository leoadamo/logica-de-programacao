#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, vl[10], vc[10], m[10][10], sl, sc;
	
	//Determina a quantidade de linhas e colunas da Matriz
	printf ("Informe a quantidade de Linhas e Colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Efetua a leitura da Matriz
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Efetua a soma de cada linha da Matriz, armazenando no vetor vl
	for (i = 0; i < ql; i++) {
		//Zera o somador de linhas sl
		sl = 0;
		for (j = 0; j < qc; j++) {
			sl += m[i][j];
		}
		//Armazena no vetor o valor da soma da linha (i)
		vl[i] = sl;
	}
	//Efetua a soma de cada coluna da Matriz, armazenando no vetor vc
	for (j = 0; j < qc; j++) {
		//Zera o somador de colunas sc
		sc = 0;
		for (i = 0; i < ql; i++) {
			sc += m[i][j];
		}
		//Armazena no vetor o valor da soma da coluna (j)
		vc[j] = sc;
	}
	//Imprime o vetor sl (somador de linhas)
	for (i = 0; i < ql; i++)
		printf ("%d ", vl[i]);
	
	printf ("\n");	
	//Imprime o vetor sc (somador de colunas)
	for (i = 0; i < qc; i++)
		printf ("%d ", vc[i]);
	
	printf ("\n");
	
	return 0;			
}
