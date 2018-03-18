#include <stdio.h>

int main (void) {
	
	int n, i, a, b, soma;
	
	scanf ("%d", &n);
	if (n < 46) {
		a = 0, b = 1;
		printf ("%d %d ", a, b);
		for (i = 2; i < n; i++) {
			soma = 0;
			soma += a + b;
			a = b;
			b = soma;
			printf ("%d", soma);
			if (i < n - 1)
				printf (" ");
		}
		printf ("\n");
	}
	
	return 0;
}
