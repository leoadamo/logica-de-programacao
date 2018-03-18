#include <stdio.h>

int main (void) {
	
	int x, z, soma, i, c;
	
	scanf ("%d", &x);
	scanf ("%d", &z);
	while (z <= x)
		scanf ("%d", &z);
	
	soma = 0, c = 0;
	for (i = z; i > soma; i++) {
		soma += x;
		x++;
		c++;
	}
	
	printf ("%d\n", c);
	
	return 0;
}
