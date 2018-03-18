#include <stdio.h>

//Declara o protótipo da função
void exibeTabuada (int n);

//Cria a função
void exibeTabuada (int n) {
	//Declara variável local
	int j;
	/*Repetição para o cálcula da tabuada de acordo com o 
	inteiro "i" vindo da função principal main*/
	for (j = 1; j <= 10; j++) 
		printf ("%d x %d = %d\n", j, n, j * n);
	//Quebra de linha
	printf ("\n");	
}
//Função principal
int main (void) {
	
	int i;
	//Repetição para exibir 5 tabuadas (1 ao 5)
	for (i = 1; i <= 5; i++) {
		exibeTabuada(i);
	}
	
	return 0;
}
