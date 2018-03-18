#include <stdio.h>

//Declara o protótipo da função
void exibePrimos (int n1, int n2);
//Cria a função
void exibePrimos (int n1, int n2) {
	//Variáveis locais da função
	int i, j, c;
	//Valida o menor
	if (n1 < n2) {
		//Loop começando no menor + 1
		for (i = n1 + 1; i < n2; i++) {
			//Zera contador de divisores
			c = 0;
			//Loop para encontrar os divisores do elemento "i"
			for (j = 1; j <= i; j++)
				//Incrementa o contador ao encontrar um divisor
				if (i % j == 0)
					c++;
				//Se o contador for igual a 2, significa que o número é primo (divisível por 1 e ele mesmo)
				if (c == 2)
					printf ("%d ", i);	
		}
	}
	//Só será invertida a ordem de n1 e n2 neste if
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
//Função principal
int main (void) {
	
	int n1, n2;
	//Loop para ler os intervalos
	do {
		printf ("Informe dois inteiros: ");
		scanf ("%d %d", &n1, &n2);
		//Valida se os intervalos são aceitos
		if (n1 > 0 && n2 > 0) {
			//Chama função
			exibePrimos(n1, n2);
		}
		//Quebra de linha
		printf ("\n");
	//Repete enquando n1 e n2 forem positivos	
	}while (n1 > 0 && n2 > 0);
	
	return 0;
}
