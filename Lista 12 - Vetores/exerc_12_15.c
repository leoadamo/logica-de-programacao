#include <stdio.h>

int main (void) {
	
	int b[10], x, i, pos = 0;
	
	//Carrega o Vetor com 9 elementos, deixando 1 espaço vazio
	for (i = 0; i < 9; i++) {
		printf ("Informe o elemento %d do Vetor B: ", i+1);
		scanf ("%d", &b[i]);
	}
	
	//Informa o valor que será colocado no espaço em branco do Vetor
	printf ("Informe um Valor: ");
	scanf ("%d", &x);
	
	//Faz a troca de posição do valor em branco com os indíces anteriores
	for (i = 9; i > pos; i--) {
		b[i] = b[i-1];	
	}
	//Atribui o valor digitado pelo usuário na posição em branco
	b[pos] = x;
	
	//Imprime na tela o vetor completamente preenchido
	for (i = 0; i < 10; i++) {
		printf ("%d ", b[i]);
	}
	printf ("\n");
	
	return 0;
}
