#include <stdio.h>

int main (void) {
	
	int ql, qc, i, j, achei, m[10][10], num;
	
	//Informa a quantidade de linhas e colunas da matriz
	printf ("Informe a quantidade de Linhas e Colunas da Matriz: ");
	scanf ("%d %d", &ql, &qc);
	//Efetua a leitura da matriz ql x qc
	for (i = 0; i < ql; i++) {
		for (j = 0; j < qc; j++) {
			printf ("Informe o elemento %d %d da Matriz: ", i, j);
			scanf ("%d", &m[i][j]);
		}
		printf ("\n");
	}
	//Loop para efetuar a leitura de valores que serão verificados se estão na matriz
	do {
		//Efetua a leitura do Número
		printf ("Informe um Numero: ");
		scanf ("%d", &num);
		//Testa se o número é válido (num >= 0)
		if (num >= 0) {
			//Zera flag que identificará se o número está na Matriz
			achei = 0;
			//Varre Matriz
			for (i = 0; i < ql; i++) {
				for (j = 0; j < qc; j++) {
					//Compara se o num é igual ao elemento i x j da matriz, se for, muda estado da flag
					if (num == m[i][j])
						achei = 1;
				}
			}
			//Se flag não muda de estado, num não está na matriz. Se muda, num está na matriz
			if (achei == 0) 
				printf ("Nao esta na Matriz\n");
			else
				printf ("Esta na Matriz\n");	
		}
	//Repete enquanto o número digitado for positivo
	} while (num >= 0);
	
	return 0;
}
