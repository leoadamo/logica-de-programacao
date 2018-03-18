#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n, i;
	
	printf ("Informe um Numero: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= 20; i = i + n)
		printf ("%d ", i);
		printf ("\n");
		
	system ("pause");	
}
