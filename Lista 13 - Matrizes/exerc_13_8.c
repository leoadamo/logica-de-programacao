#include <stdio.h>

int main (void) {
	
	int ql, qc, m[10][10], cm, v[10], maior, j, i;
	
	//Determina o tamanho da matriz
	printf ("Informe a quantidade de linhas e colunas da matriz: ");
	scanf ("%d %d", &ql, &qc);
	
	//Carrega a matriz com os elementos digitados pelo usuário
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Atribui um valor inicial à variável "maior" e para o contador que determinará o tamanho do vetor (máx 10)
	cm = 0;
	//Verifica em cada linha o maior elemento e copia para um vetor
	for (i = 0; i < ql; i++) {
		maior = 0;
		for (j = 0; j < qc; j++) {
			if (m[i][j] > maior)
				maior = m[i][j];		
		}
		v[cm] = maior;
		cm++;	
	}
	//Imprime o vetor de maiores na tela
	for (i = 0; i < cm; i++)
		printf ("%d ", v[i]);
	
	printf ("\n");
	
	return 0;		
}
