#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n, res;
	
	do {
		
		printf ("Informe um Numero: ");
		scanf ("%d", &n);
		
		if (n > 0) {
		
			printf ("%d", n);
		
			do {
			
				if (n != 1) {
				
				
					if (n % 2 == 0) 
				
						res = n / 2;
					
					else
				
						res = (3 * n) + 1;
			
					n = res;
			
					printf (" %d", n);
			
				} 
				
			} while (n != 1);
		}
		 
		 printf ("\n");
		 
	} while (n > 0);

	system ("pause");		
}
