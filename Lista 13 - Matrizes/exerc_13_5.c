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
	//Loop para efetuar a leitura de valores que ser�o verificados se est�o na matriz
	do {
		//Efetua a leitura do N�mero
		printf ("Informe um Numero: ");
		scanf ("%d", &num);
		//Testa se o n�mero � v�lido (num >= 0)
		if (num >= 0) {
			//Zera flag que identificar� se o n�mero est� na Matriz
			achei = 0;
			//Varre Matriz
			for (i = 0; i < ql; i++) {
				for (j = 0; j < qc; j++) {
					//Compara se o num � igual ao elemento i x j da matriz, se for, muda estado da flag
					if (num == m[i][j])
						achei = 1;
				}
			}
			//Se flag n�o muda de estado, num n�o est� na matriz. Se muda, num est� na matriz
			if (achei == 0) 
				printf ("Nao esta na Matriz\n");
			else
				printf ("Esta na Matriz\n");	
		}
	//Repete enquanto o n�mero digitado for positivo
	} while (num >= 0);
	
	return 0;
}
