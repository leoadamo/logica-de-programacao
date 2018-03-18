#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int n1, n2;
	
	printf ("Informe dois valores: ");
	scanf ("%d %d", &n1, &n2);
	
	while (n1 != n2){
		if (n1 > n2)
			printf ("Decrescente\n");
		else
			printf ("Crescente\n");
			
	printf ("Informe dois valores: ");
	scanf ("%d %d", &n1, &n2);
				
	}
	system ("pause");
}
