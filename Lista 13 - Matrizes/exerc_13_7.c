#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, m[10][10], div, menor;
	
	//Lê a quantidade de linhas e colunas que a matriz terá
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
		//Zera a variável que irá armazenar o resultado da divisão dos elementos
		div = 0;
		//Zera uma variável que armazenará o menor elemento encontrado na linha
		menor = 99999;
		for (j = 0; j < qc; j++) {
			//Compara cada elemento, se for menor troca o valor da variável aux "menor"
			if (m[i][j] < menor)
				menor = m[i][j];	
		}
		//Repetição para efetuar a divisão de cada elemento "c" da linha "i", pelo menor encontrado no loop anterior
		for (j = 0; j < qc; j++) {
			div = m[i][j] / menor;
			//Joga na posição "i" de "w" o resultado da divisão
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
