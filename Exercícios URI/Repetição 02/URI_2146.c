#include <stdio.h>

int main () {
	
	int n, senha;
	
	/* Este loop s� ir� terminar quando o programa n�o conseguir ler n�meros (EOF). */
	while (scanf ("%d", &n) == 1) {
		
		if (n >= 1001 && n <= 9999) {
			
			senha = n - 1;
			
			printf ("%d\n", senha);
		}
		
	}
	
	return 0;
}
