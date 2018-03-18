#include <stdio.h>

int main (void) {
	
	int q, r, a[10], b[10], d[10], i, j, c, f;
	
	//Efetua a leitura dos valores que delimitam o tamanho dos vetores "a" e "b"
	printf ("Informe dois valores: ");
	scanf ("%d %d", &q, &r);
	
	//Carrega o vetor "a"
	for (i = 0; i < q; i++) {
		printf ("Informe o elemento %d do vetor 'a': ", i+1);
		scanf ("%d", &a[i]);
	}
	
	//Carrega o vetor "b"
	for (i = 0; i < r; i++) {
		printf ("Informe o elemento %d do vetor 'b': ", i+1);
		scanf ("%d", &b[i]);
	}
	
	//Contador que define o tamanho que terá o vetor "d"
	c = 0;
	//Varre todo o vetor "a" comparando com o vetor "b"
	for (i = 0; i < q; i++) {
		//Flag que determinará quando foi encontrado um elemento igual entre os vetores
		f = 0;
		//Varre o vetor "b" comparando com cada indice de "a"
		for (j = 0; j < r; j++) {
			//Se o elemento foi igual, flag muda de estado
			if (a[i] == b[j]) 
				f = 1;
		}
		//Se flag não mudou de estado, significa que o elemento verificado não é igual à nenhum de "b"
		if (f == 0) {
			d[c] = a[i];
			c++;
		}
	}
	//Imprime o vetor resultante
	for (i = 0; i < c; i++)
		printf ("%d ", d[i]);
		
	printf ("\n");
	
	return 0;	
}
