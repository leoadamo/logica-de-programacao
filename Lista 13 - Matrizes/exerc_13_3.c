#include <stdio.h>

int main (void) {
	
	int m[4][4], i, j, sa, sb, sc, sd, cc;
	
	//Preenche as posi��es da Matriz
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Zera o somador das primeiras posi��es da matriz
	sa = 0;
	//Repeti��o usada para somar o conte�do das posi��es i x j da matriz
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sa += m[i][j];
		}
	}
	//Imprime o valor da soma das primeiras posi��es
	printf ("%d\n", sa);
	
	//Zera o somador das �ltimas posi��es da matriz
	sb = 0;
	for (i = 2; i < 4; i++) {
		for (j = 2; j < 4; j++) {
			sb += m[i][j];
		}
	}
	//Imprime o valor da soma das �ltimas posi��es
	printf ("%d\n", sb);
	
	//Zera o somador das posi��es alternadas e um contador para determinar as posi��es das colunas que ser�o somadas
	sc = 0;
	cc = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j <= cc; j++) {
			sc += m[i][j];
		}
		cc++;
	}
	//Imprime o valor da soma das posi��es alternadas
	printf ("%d\n", sc);
	
	//Zera o somador das �ltimas posi��es alternadas e um contador para determinar as posi��es das colunas que serao somadas
	sd = 0;
	cc = 1;
	for (i = 0; i < 3; i++) {
		for (j = cc; j < 4; j++) {
			sd += m[i][j];
		}
		cc++;
	}
	//Imprime o valor da soma das �ltimas posi��es alternadas
	printf ("%d\n", sd);
	
	return 0;
}
