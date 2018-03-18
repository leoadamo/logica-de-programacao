#include <stdio.h>

int main (void) {
	
	int m[4][4], n, i, j, dist, pos[16];
	
	//Carrega a matriz com os elementos digitados pelo usuário
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Informa o número de cidades visitadas
	printf ("Informe o numero de cidades: ");
	scanf ("%d", &n);
	//Lê o código da cidade armazenando-os em um vetor de "n" posições
	for (i = 0; i < n; i++) {
		printf ("Informe a cidade %d: ", i+1);
		scanf ("%d", &pos[i]);
	}
	//Efetua a soma das distâncias zerando um somador para isto
	dist = 0;
	for (i = 0; i < n - 1; i++) 
		dist += m[pos[i]][pos[i + 1]];
	
	//Exibe a soma
	printf ("%d\n", dist);
	
	return 0;	
}
