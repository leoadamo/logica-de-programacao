#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n, i;
	
	printf ("Informe um valor para a tabuada: ");
	scanf ("%d", &n);
	
	while (n < 1 || n > 10) {
		printf ("Informe um valor para a tabuada: ");
		scanf ("%d", &n);
	}
	
	for (i = 1; i <= 10; i++) {
		printf ("%d x %d = %d\n", i, n, i * n);
	}
	
	system ("pause");
}
