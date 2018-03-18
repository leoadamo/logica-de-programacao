#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int soma, b, a, n, i;
	
	soma = 0; b = 0;
	
	printf ("Informe um valor: ");
	scanf ("%d", &a);
	
	printf ("Informe outro valor: ");
	scanf ("%d", &n);
	
	while (n <= 0) {
		
		printf ("Informe outro valor: ");
		scanf ("%d", &n);
		
	}
	
	for (i = 1; i <= n; i++) {
		
		b = a;
		soma = soma + b;
		a = a + 1;
		
	}
	
	printf ("SOMA = %d\n", soma);
	
	system ("pause");
}
