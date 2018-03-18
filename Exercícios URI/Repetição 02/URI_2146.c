#include <stdio.h>

int main () {
	
	int n, senha;
	
	/* Este loop só irá terminar quando o programa não conseguir ler números (EOF). */
	while (scanf ("%d", &n) == 1) {
		
		if (n >= 1001 && n <= 9999) {
			
			senha = n - 1;
			
			printf ("%d\n", senha);
		}
		
	}
	
	return 0;
}
