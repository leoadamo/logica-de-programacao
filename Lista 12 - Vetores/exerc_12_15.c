#include <stdio.h>

int main (void) {
	
	int b[10], x, i, pos = 0;
	
	//Carrega o Vetor com 9 elementos, deixando 1 espa�o vazio
	for (i = 0; i < 9; i++) {
		printf ("Informe o elemento %d do Vetor B: ", i+1);
		scanf ("%d", &b[i]);
	}
	
	//Informa o valor que ser� colocado no espa�o em branco do Vetor
	printf ("Informe um Valor: ");
	scanf ("%d", &x);
	
	//Faz a troca de posi��o do valor em branco com os ind�ces anteriores
	for (i = 9; i > pos; i--) {
		b[i] = b[i-1];	
	}
	//Atribui o valor digitado pelo usu�rio na posi��o em branco
	b[pos] = x;
	
	//Imprime na tela o vetor completamente preenchido
	for (i = 0; i < 10; i++) {
		printf ("%d ", b[i]);
	}
	printf ("\n");
	
	return 0;
}
