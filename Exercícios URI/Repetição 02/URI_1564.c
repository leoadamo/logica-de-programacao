#include <stdio.h>


int main () {
	
	int r;
	
	/* Este loop só irá terminar quando o programa não conseguir ler números (EOF). */
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
