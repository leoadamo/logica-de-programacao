#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int c, n1, n2, i;
	
	do {
		
		printf ("Informe o codigo (1.Crescente 2.Decrescente): ");
		scanf ("%d", &c);
		
		if (c == 1 || c == 2){
			if (c == 1){
				printf ("Informe dois valores: ");
				scanf ("%d %d", &n1, &n2);
				
				if (n1 > n2){
					for (i = n2; i <= n1; i++)
						printf ("%d ", i);
						printf ("\n");
				}else
					for (i = n1; i <= n2; i++)
						printf ("%d ", i);
						printf ("\n");
			}else{
				printf ("Informe dois valores: ");
				scanf ("%d %d", &n1, &n2);
				
				if (n1 > n2){
					for (i = n1; i >= n2; i--)
						printf ("%d ", i);
						printf ("\n");
				}else
					for (i = n2; i >= n1; i--)
						printf ("%d ", i);
						printf ("\n");
			}
		}
		
	} while (c == 1 || c == 2);
	
	system ("pause");
}
