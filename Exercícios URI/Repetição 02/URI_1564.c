#include <stdio.h>


int main () {
	
	int r;
	
	/* Este loop s� ir� terminar quando o programa n�o conseguir ler n�meros (EOF). */
	while (scanf ("%d", &r) == 1) {
		
		if (r >= 0 && r <= 100) {
		
			if (r == 0) 
			
				printf ("vai ter copa!\n");
			
			else
			
				printf ("vai ter duas!\n");
		
		}
			
	}
	
	return 0;
}
