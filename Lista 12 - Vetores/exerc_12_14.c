#include <stdio.h>

int main (void) {
	
	int q, x[10], y[10], s[20], i, px, py;
	
	//Determina o nº de Elementos dos Vetores "x" e "y"
	printf ("Informe um valor: ");
	scanf ("%d", &q);
	
	
	//Carrega os Vetores "x" e "y"
	for (i = 0; i < q; i++) {
		printf ("Informe o elemento %d do Vetor x: ", i+1);
		scanf ("%d", &x[i]);
		printf ("Informe o elemento %d do Vetor y: ", i+1);
		scanf ("%d", &y[i]);
	}
	
	/*Zera os contadores que irão determinar quais elementos dos Vetores "x" e "y",
	serão copiados para o vetor "s" de acordo com os índices pares ou ímpares */
	px = 0;
	py = 0;
	for (i = 0; i < 2 * q; i++) {
		if (i % 2 == 0) {
			s[i] = x[px];
			px++;	
		}
		else {
			s[i] = y[py];
			py++;
		}
	}
	
	//Imprime o Vetor resultante já carregado com os vetores "x" e "y" e ordenado de acordo com a regra
	for (i = 0; i < 2 * q; i++) {
		printf ("%d ", s[i]);
	}
	
	printf ("\n");
	
	return 0;
}
