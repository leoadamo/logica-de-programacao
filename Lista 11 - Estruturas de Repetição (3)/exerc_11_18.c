#include <stdio.h>
#include <math.h>

int main () {
	
	int i, a, b, soma;
	
	for (i = 1000; i <= 9999; i++) {
		
		a = i / 100;
		
		b = i % 100;
		
		soma = a + b;
		
		if (pow (soma, 2) == i)
		
			printf ("%d ", i);
	}
	
	printf ("\n");
		
	return 0;
}
