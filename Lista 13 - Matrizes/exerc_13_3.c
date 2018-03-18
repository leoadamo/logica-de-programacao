#include <stdio.h>

int main (void) {
	
	int m[4][4], i, j, sa, sb, sc, sd, cc;
	
	//Preenche as posições da Matriz
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Zera o somador das primeiras posições da matriz
	sa = 0;
	//Repetição usada para somar o conteúdo das posições i x j da matriz
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sa += m[i][j];
		}
	}
	//Imprime o valor da soma das primeiras posições
	printf ("%d\n", sa);
	
	//Zera o somador das últimas posições da matriz
	sb = 0;
	for (i = 2; i < 4; i++) {
		for (j = 2; j < 4; j++) {
			sb += m[i][j];
		}
	}
	//Imprime o valor da soma das últimas posições
	printf ("%d\n", sb);
	
	//Zera o somador das posições alternadas e um contador para determinar as posições das colunas que serão somadas
	sc = 0;
	cc = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j <= cc; j++) {
			sc += m[i][j];
		}
		cc++;
	}
	//Imprime o valor da soma das posições alternadas
	printf ("%d\n", sc);
	
	//Zera o somador das últimas posições alternadas e um contador para determinar as posições das colunas que serao somadas
	sd = 0;
	cc = 1;
	for (i = 0; i < 3; i++) {
		for (j = cc; j < 4; j++) {
			sd += m[i][j];
		}
		cc++;
	}
	//Imprime o valor da soma das últimas posições alternadas
	printf ("%d\n", sd);
	
	return 0;
}
