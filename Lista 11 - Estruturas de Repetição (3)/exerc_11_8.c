#include <stdio.h>

int main () {
	
	int a, b, c, d, i;
	
	a = 1, b = 2, c = 3;
	
	for (i = 4; i <= 15; i++) {
		
		d = (c + (2 * b)) - a;
		
		a = b;
		b = c;
		c = d;
	}
	
	printf ("O 15o numero da serie e': %d\n", d);
	
	return 0;
}
