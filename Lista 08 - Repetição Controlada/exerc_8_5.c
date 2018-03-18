#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n, i;
	
	printf ("Informe um Numero: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= 10; i++)
		printf ("%d ", n);
		printf ("\n");
		
	system ("pause");	
}
