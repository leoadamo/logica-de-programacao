#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n1, n2, i;
	
	do {
		
		printf ("Informe um Numero: ");
		scanf ("%d", &n1);
		
		if (n1 > 0){
	
		printf ("Informe outro Numero: ");
		scanf ("%d", &n2);
		
		for (i = 1; i <= n1; i++)
			printf ("%d ", n2);
			printf ("\n");
		}	
		
	} while (n1 > 0);
	
	system ("pause");
}
