#include <stdio.h>

int main () {
	
	int n1, n2, i, j, c, resp;
	
	do {
	
	
		printf ("Informe dois valores: ");
		scanf ("%d %d", &n1, &n2);
	
		while (n2 < n1) {
		
			printf ("Informe dois valores: ");
			scanf ("%d %d", &n1, &n2);
		}
	
		for (i = n1; i <= n2; i++) {
		
			c = 0;
		
			for (j = 1; j <= i; j++) {
			
				if (i % j == 0)
			
				c++;			
			}
		
			if (c == 2)
		
				printf ("%d ", i);		
		}
	
	printf ("\n");
	
	printf ("Nova Sequencia (1.Sim 2.Nao)?\n");
	scanf ("%d", &resp);
	
	system ("cls");
	
	} while (resp == 1);		
	
	return 0;
}
