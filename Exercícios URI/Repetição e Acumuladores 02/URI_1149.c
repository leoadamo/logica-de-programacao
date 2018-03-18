#include <stdio.h>

int main (void) {
	
	int a, n, i, soma;
	
	scanf ("%d %d", &a, &n);
	while (n <= 0) 
		scanf ("%d", &n);
		
	soma = 0;
	for (i = 0; i <= n - 1; i++) {
		soma += a;
		a++;
	}
		
	printf ("%d\n", soma);
	
	return 0;
}
