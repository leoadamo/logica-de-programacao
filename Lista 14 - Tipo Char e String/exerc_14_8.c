#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int t, i;
	char letra = 'X';
	
	printf ("Informe um numero: ");
	scanf ("%d", &t);
	for (i = 0; i < t; i++) 
		printf ("%c", letra);
	
	printf ("\n");
	
	return 0;	
}
