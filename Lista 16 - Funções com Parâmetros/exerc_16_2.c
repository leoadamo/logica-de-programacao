#include <stdio.h>

//Declara o protótipo da função
void exibeDivisores (int n);
//Cria a função que exibe os divisores de n
void exibeDivisores (int n) {
	//Declara variável local 
	int i;
	//Imprime o n vindo da função main
	printf ("%d: ", n);
	//Loop para fazer a verificação dos divisores de 1 à 20
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			//Se passar na verificação, imprime o divisor (i)
			printf ("%d ", i);
	}
	//Quebra de linha
	printf ("\n");
}
//Função principal
int main (void) {
	
	int n;
	//Loop para chamar a função exibeDivisores de 1 à 20
	for (n = 1; n <= 20; n++) {
		exibeDivisores(n);	
	}
	
	return 0;
}
