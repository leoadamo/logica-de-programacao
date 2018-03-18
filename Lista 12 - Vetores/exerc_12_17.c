#include <stdio.h>

int main (void) {
	
	int q, r, a[10], b[10], u[20], i, c, j, f;
	
	//Determina a quantidade de elementos dos vetores "a" e "b"
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
	
	//Contador que determinar� a quantidade de �ndices do vetor "u"
	c = 0;
	//Carrega os primeiros elementos para o vetor "u", incrementando o contador a cada ciclo
	for (i = 0; i < q; i++) {
		u[c] = a[i];
		c++;
	}
	
	//Varre o vetor "b"
	for (i = 0; i < r; i++) {
		f = 0;
		/*Verifica se o elemento i de "b" j� est� em alguma das posi��es anteriores de "u",
		caso n�o esteja, joga o elemento no pr�ximo �ndice "c" de "u" */
		for (j = 0; j < q; j++) {
			if (b[i] == u[j])
				f = 1;
			}
		if (f == 0) {
			u[c] = b[i];
			c++;
		}	
	}
	//Imprime o vetor "u" com o n�mero de �ndices determinado pelo contador
	for (i = 0; i < c; i++)
		printf ("%d ", u[i]);
	
	printf ("\n");	
		
	return 0;			
}
