#include <stdio.h>

//Declara o prot�tipo da fun��o
void exibePrimos (int n1, int n2);
//Cria a fun��o
void exibePrimos (int n1, int n2) {
	//Vari�veis locais da fun��o
	int i, j, c;
	//Valida o menor
	if (n1 < n2) {
		//Loop come�ando no menor + 1
		for (i = n1 + 1; i < n2; i++) {
			//Zera contador de divisores
			c = 0;
			//Loop para encontrar os divisores do elemento "i"
			for (j = 1; j <= i; j++)
				//Incrementa o contador ao encontrar um divisor
				if (i % j == 0)
					c++;
				//Se o contador for igual a 2, significa que o n�mero � primo (divis�vel por 1 e ele mesmo)
				if (c == 2)
					printf ("%d ", i);	
		}
	}
	//S� ser� invertida a ordem de n1 e n2 neste if
	if (n1 > n2) {
		for (i = n2 + 1; i < n1; i++) {
			c = 0;
			for (j = 1; j <= i; j++)
				if (i % j == 0)
					c++;
				
				if (c == 2)
					printf ("%d ", i);	
		}	
	}
}
//Fun��o principal
int main (void) {
	
	int n1, n2;
	//Loop para ler os intervalos
	do {
		printf ("Informe dois inteiros: ");
		scanf ("%d %d", &n1, &n2);
		//Valida se os intervalos s�o aceitos
		if (n1 > 0 && n2 > 0) {
			//Chama fun��o
			exibePrimos(n1, n2);
		}
		//Quebra de linha
		printf ("\n");
	//Repete enquando n1 e n2 forem positivos	
	}while (n1 > 0 && n2 > 0);
	
	return 0;
}
