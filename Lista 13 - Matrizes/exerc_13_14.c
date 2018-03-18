#include <stdio.h>

int main (void) {
	
	int m[4][4], n, i, j, dist, pos[16];
	
	//Carrega a matriz com os elementos digitados pelo usu�rio
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Informa o n�mero de cidades visitadas
	printf ("Informe o numero de cidades: ");
	scanf ("%d", &n);
	//L� o c�digo da cidade armazenando-os em um vetor de "n" posi��es
	for (i = 0; i < n; i++) {
		printf ("Informe a cidade %d: ", i+1);
		scanf ("%d", &pos[i]);
	}
	//Efetua a soma das dist�ncias zerando um somador para isto
	dist = 0;
	for (i = 0; i < n - 1; i++) 
		dist += m[pos[i]][pos[i + 1]];
	
	//Exibe a soma
	printf ("%d\n", dist);
	
	return 0;	
}
