#include <stdio.h>

int main (void) {
	
	int q, z[10], n[10], i, c;
	
	//Define o tamanho do Vetor.
	printf ("Informe a quantidade de Elementos do Vetor Z: ");
	scanf ("%d", &q);
	//Carrega o vetor com Q elementos.
	for (i = 0; i <= q - 1; i++) {
		printf ("Informe o valor %d: ", i+1);
		scanf ("%d", &z[i]);
	}
	//Copia os Valores Negativos para o vetor N.
	c = 0;
	for (i = 0; i <= q - 1; i++) {
		if (z[i] < 0) {
			n[c] = z[i];
			c++;
		}
	}
	//Imprime o vetor N com os elementos negativos.
	for (i = 0; i < c; i++)
		printf ("%d ", n[i]);
	
	printf ("\n");
	
	return 0;
}
