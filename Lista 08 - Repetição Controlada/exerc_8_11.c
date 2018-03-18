#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int a, b, i;
	
	do {
		
		printf ("Informe o PRIMEIRO valor: ");
		scanf ("%d", &a);
		
		printf ("Informe o SEGUNDO valor: ");
		scanf ("%d", &b);
		
		if (a >= b)
			printf ("VALORES INVALIDOS!\n");
			
	} while (a >= b);
	
	for (i = a; i <= b; i++)
		printf ("%d ", i);
	
	printf ("\n");
	
	system ("pause");	
}
