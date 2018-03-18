#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int a, b, c, i;
	
	a = 0, b = 1, c = 0;
	
	printf ("%d %d ", a, b);
	
	for (i = 1; i <= 18; i++) {
		
		c = a + b;
		
		printf ("%d ", c);
		
		a = b;
		
		b = c;
	}
	
	printf ("\n");
	
	system ("pause");
}
