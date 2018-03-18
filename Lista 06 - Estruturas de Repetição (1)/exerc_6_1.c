#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int n;
	
	printf ("Informe um numero: ");
	scanf ("%d", &n);
	
	while (n != 0) {
		if (n > 0)
			printf ("Positivo\n");
		else
			printf ("Negativo\n");
		
	printf ("Informe um numero: ");
	scanf ("%d", &n);
			
	}
	system ("pause");
}
