#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, m[10][10], div, menor;
	
	//L� a quantidade de linhas e colunas que a matriz ter�
	printf ("Informe a quantidade de Linhas e Colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Carrega a Matriz
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Loop para varrer a matriz linha a linha e encontrar o menor elemento da linha
	for (i = 0; i < ql; i++) {
		//Zera a vari�vel que ir� armazenar o resultado da divis�o dos elementos
		div = 0;
		//Zera uma vari�vel que armazenar� o menor elemento encontrado na linha
		menor = 99999;
		for (j = 0; j < qc; j++) {
			//Compara cada elemento, se for menor troca o valor da vari�vel aux "menor"
			if (m[i][j] < menor)
				menor = m[i][j];	
		}
		//Repeti��o para efetuar a divis�o de cada elemento "c" da linha "i", pelo menor encontrado no loop anterior
		for (j = 0; j < qc; j++) {
			div = m[i][j] / menor;
			//Joga na posi��o "i" de "w" o resultado da divis�o
			m[i][j] = div;
		}
	}
	//Imprime a matriz resultante
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("%d ", m[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}
