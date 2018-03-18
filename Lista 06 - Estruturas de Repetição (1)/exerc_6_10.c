#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float n1, n2, m;
	
	printf ("Informe a nota da PRIMEIRA avaliacao: ");
	scanf ("%f", &n1);
	
	while (n1 < 0 || n1 > 10) {
		printf ("Nota Invalida\n");
		printf ("Informe a nota da PRIMEIRA avaliacao: ");
		scanf ("%f", &n1);
	}
	
	printf ("Informe a nota da SEGUNDA avaliacao: ");
	scanf ("%f", &n2);
	
	while (n2 < 0 || n2 > 10) {
		printf ("Nota Invalida\n");
		printf ("Informe a nota da SEGUNDA avaliacao: ");
		scanf ("%f", &n2);
	}
	
	m = (n1 + n2) / 2;
	
	printf ("Media = %.1f\n", m);
	
	system ("pause");
}

