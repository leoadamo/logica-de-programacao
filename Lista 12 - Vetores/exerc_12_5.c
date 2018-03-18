#include <stdio.h>

int main (void) {
	
	int q, i, z[10], w[10];
	
	printf ("Informe um Valor: ");
	scanf ("%d", &q);
	
	for (i = 0; i <= q - 1; i++) {
		
		printf ("Informe o valor %d: ", i);
		scanf ("%d", &z[i]);
	}
	
	for (i = 0; i <= q - 1; i++)
	
		w[i] = z[i];
		
	printf ("\n");	
		
	for (i = 0; i <= q - 1; i++)
	
		printf ("%d ", w[i]);
		
	printf ("\n");
	
	return 0;		
	
}
