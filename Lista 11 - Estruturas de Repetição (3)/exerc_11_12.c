#include <stdio.h>

int main () {
	
	int i, n;
	
	for (n = 1; n <= 20; n++) {
		
		printf ("%d: ", n);
		
		for (i = 1; i <= n; i++) {
			
			if (n % i == 0)
			
				printf ("%d ", i);
		}
		
		printf ("\n");
	}
	
	
	return 0;
}
