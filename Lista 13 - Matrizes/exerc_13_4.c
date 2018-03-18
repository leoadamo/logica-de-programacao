#include <stdio.h>

int main (void) {
	
	int ql, qc, m[10][10], i, j, s, cc;
	
	//Lê a quantidade de Linhas e Colunas
	printf ("Informe a quantidade de Linhas e Colunas da Matriz (Max 10): ");
	scanf ("%d %d", &ql, &qc);
	//Preenche a Matriz de "ql" linhas e "qc" colunas
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Zera o somador que irá armazenar a soma dos primeiros elementos da Matriz
	s = 0;
	for (i = 0; i < ql / 2; i++) {
		for (j = 0; j < qc / 2; j++) {
			s += m[i][j];
		}
	}
	//Imprime a soma dos primeiros elementos da Matriz
	printf ("%d\n", s);
	
	//Zera o somador que irá armazenar a soma dos últimos elementos da Matriz
	s = 0;
	for (i = ql / 2; i < ql; i++) {
		for (j = qc / 2; j < qc; j++) {
			s += m[i][j];
		}
	}
	//Imprime a soma dos últimos elementos da Matriz
	printf ("%d\n", s);
	
	//Zera um somador que armazenará os elementos da Matriz em diagonal
	s = 0;
	//Zera um contador que determinará a quantidade de colunas utilizadas
	cc = 0;
	for (i = 0; i < ql; i++) {
		for (j = 0; j <= cc; j++) {
			s += m[i][j];
		}
		cc++;
	}
	//Imprime a soma dos elementos da Matriz em diagonal
	printf ("%d\n", s);
	
	//Zera um somador que armazenará os elementos da Matriz em diagonal, pegando os últimos elementos da Matriz
	s = 0;
	//Atribui o valor 1 ao contador para que o mesmo inicie na segunda coluna da matriz
	cc = 1;
	for  (i = 0; i < ql; i++) {
		for (j = cc; j < qc; j++) {
			s += m[i][j];
		}
		cc++;
	}
	//Imprime a soma dos últimos elementos da Matriz em diagonal
	printf ("%d\n", s);
	
	return 0; 
}
