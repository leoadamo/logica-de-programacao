#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int soma, c, x, z;
	
	soma = 0, c = 0;
	
	printf ("Informe um valor: ");
	scanf ("%d", &x);
	
	printf ("Informe outro valor: ");
	scanf ("%d", &z);
	
	while (z < x) {
		
		printf ("Valor invalido, insira novamente: ");
		scanf ("%d", &z);
		
	}
	
	while (z >= soma) {
		
		soma = soma + x;
		
		x = x + 1;
		
		c++;
	}
	
	printf ("%d\n", c);
	
	system ("pause");
}
