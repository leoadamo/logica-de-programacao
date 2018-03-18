#include <stdio.h>

int main (void) {
	
	int q, b[10], x, pos, i;
	
	//Determina o Nº de Elementos do Vetor
	printf ("Informe um valor: ");
	scanf ("%d", &q);
	
	//Preenche o Vetor com "q" Elementos
	for (i = 0; i < q; i++) {
		printf ("Informe o elemento %d do Vetor: ", i+1);
		scanf ("%d", &b[i]);
	}
	
	//Informa o Valor que entrará no Vetor
	printf ("Informe o valor que sera inserido no vetor (x): ");
	scanf ("%d", &x);
	
	//Indica em qual posição o valor "x" entrará no Vetor
	printf ("Informe a posicao onde o x sera inserido: ");
	scanf ("%d", &pos);
	//Garante que a posição é válida
	while (pos < 0 || pos > q) {
		printf ("Informe a posicao onde o x sera inserido: ");
		scanf ("%d", &pos);
	}
	//Faz a troca dos elementos do Vetor para que a posição escolhida fique em branco
	for (i = q; i > pos; i--) 
		b[i] = b[i-1];
	//A posição determinada pelo Usuário recebe o Valor "x"
	b[pos] = x;
	
	//Imprime o vetor já com o novo tamanho e com "x" inserido na posição escolhida
	for (i = 0; i < q + 1; i++) 
		printf ("%d ", b[i]);
	
	printf ("\n");
	
	return 0;
}
