#include <stdio.h>

int main () {
	
	int n, i;
	
	printf ("Informe um numero: ");
	scanf ("%d", &n);
	
	while (n < 0) {
		
		printf ("Informe um numero: ");
		scanf ("%d", &n);
	}
	
	for (i = 1; i <= n; i++) {
		
		if (n % i  == 0)
		
			printf ("%d ", i);
	}
	
	printf ("\n");
	
	return 0;
}
