#include <stdio.h>

int main (void) {
	
	int q, r, a[10], b[10], vi[10], i, j, c;
	
	//Efetua a leitura dos valores que determinam o tamanho dos vetores "a" e "b"
	printf ("Informe dois valores: ");
	scanf ("%d %d", &q, &r);
	
	//Carrega vetor "a"
	for (i = 0; i < q; i++) {
		printf ("Informe o elemento %d do vetor 'a': ", i+1);
		scanf ("%d", &a[i]);
	}
	
	//Carrega vetor "b"
	for (i = 0; i < r; i++) {
		printf ("Informe o elemento %d do vetor 'b': ", i+1);
		scanf ("%d", &b[i]);
	}
	
	//Zera contador que determinara o tamanha do vetor "vi"
	c = 0;
	//Varre os elementos dos dois vetores fazendo a comparação
	for (i = 0; i < q; i++) {
		for (j = 0; j < r; j++) {
			//Copia o elemento que é comum aos dois vetores para o vetor "vi"
			if (a[i] == b[j]) {
				vi[c] = a[i];
				c++;
			}
		}
	}
	
	//Imprime o vetor resultante
	for (i = 0; i < c; i++) 
		printf ("%d ", vi[i]);
	
	printf ("\n");
	
	return 0;
}
