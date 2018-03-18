#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, m[10][10], aux[10][10];
	
	//Determina o tamanho que terá a matriz
	printf ("Informe a quantidade de linhas e colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Carrega a matriz com os elementos digitados
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Varre a matriz e verifica se a coluna é par ou impar, caso seja par efetua a troca usando a matriz aux[10][10]
	for (j = 0; j < qc; j++) {
		for (i = 0; i < ql; i++) {
			if (j % 2 == 0) {
				aux[i][j] = m[i][j];
				m[i][j] = m[i][j + 1];
				m[i][j + 1] = aux[i][j];
			}
		}
	}
	//Imprime a matriz troca resultante
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			//Verificação para determinar os espaçamentos entre os elementos
			if (m[i][j] < 10)
				printf (" %d ", m[i][j]);
			else
				printf ("%d ", m[i][j]);			
		}
		printf ("\n");
	}
	
	return 0;
}
