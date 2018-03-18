#include <stdio.h>

int main (void) {
	
	int i, j, m[4][4], s, c;
	//Carrega a matriz 4x4
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("Informe o elemento %d %d da matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Zera o somador da linha
	s = 0;
	//Fixa a linha e vai somando os elementos das colunas
	for (i = 2; i <= 2; i++) {
		for (j = 0; j < 4; j++) {
			s += m[i][j];
		}
	}
	//Imprime a soma dos elementos da Linha
	printf ("Soma da Linha %d = %d\n", i-1, s);
	//Zera o somador de Coluna
	s = 0;
	//Fixa a coluna e varia a linha para somar os elementos
	for (i = 0; i < 4; i++) {
		for (j = 1; j <= 1; j++) {
			s += m[i][j];
		}
	}
	//Imprime a soma da Coluna
	printf ("Soma da Coluna %d = %d\n", j-1, s);
	//Zera o somador da diagonal Principal e um contador que será usado para variar as colunas
	s = 0;
	c = 0;
	//Soma os elementos variando as linhas e as colunas da diagonal principal da matriz
	for (i = 0; i < 4; i++) {
		for (j = c; j <= c; j++) {
			s += m[i][j];
		}
		c++;
	}
	//Imprime a soma da diagonal principal
	printf ("Soma da Diagonal Principal = %d\n", s);
	//Zera o somador da diagonal Secundária e um contador que será usado para variar as colunas
	s = 0;
	c = 3;
	//Soma os elementos variando as linhas e as colunas da diagonal Secundária da matriz
	for (i = 0; i < 4; i++) {
		for (j = c; j <= c; j++) {
			s += m[i][j];
		}
		c--;
	}
	//Imprime a soma da diagonal secundária
	printf ("Soma da Diagonal Secundaria = %d\n", s);
	//Zera o somador de toda a matriz
	s = 0;
	//Soma os elementos variando as linhas e as colunas da matriz
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			s += m[i][j];
		}
	}
	//Imprime a soma de toda a matriz
	printf ("Soma de Toda a Matriz = %d\n", s);
	
	return 0;
}
