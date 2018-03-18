#include <stdio.h>

//Declara o prot�tipo da fun��o
void exibeTabuada (int n);

//Cria a fun��o
void exibeTabuada (int n) {
	//Declara vari�vel local
	int j;
	/*Repeti��o para o c�lcula da tabuada de acordo com o 
	inteiro "i" vindo da fun��o principal main*/
	for (j = 1; j <= 10; j++) 
		printf ("%d x %d = %d\n", j, n, j * n);
	//Quebra de linha
	printf ("\n");	
}
//Fun��o principal
int main (void) {
	
	int i;
	//Repeti��o para exibir 5 tabuadas (1 ao 5)
	for (i = 1; i <= 5; i++) {
		exibeTabuada(i);
	}
	
	return 0;
}
