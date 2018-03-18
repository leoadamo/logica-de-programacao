#include <stdio.h>

//Declara o prot�tipo da fun��o
void exibeDivisores (int n);
//Cria a fun��o que exibe os divisores de n
void exibeDivisores (int n) {
	//Declara vari�vel local 
	int i;
	//Imprime o n vindo da fun��o main
	printf ("%d: ", n);
	//Loop para fazer a verifica��o dos divisores de 1 � 20
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			//Se passar na verifica��o, imprime o divisor (i)
			printf ("%d ", i);
	}
	//Quebra de linha
	printf ("\n");
}
//Fun��o principal
int main (void) {
	
	int n;
	//Loop para chamar a fun��o exibeDivisores de 1 � 20
	for (n = 1; n <= 20; n++) {
		exibeDivisores(n);	
	}
	
	return 0;
}
