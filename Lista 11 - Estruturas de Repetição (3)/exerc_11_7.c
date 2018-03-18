#include <stdio.h>

int main () {
	
	int i, n, s;
	
	s = 0;
	
	printf ("Informe um numero: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++) {
		
		if (i % 2 == 1)
		
			s += 5;
			
		else
		
			s += 1;	
	}
	
	printf ("O %do elemento da serie e': %d\n", n, s);
	
	return 0;
}
