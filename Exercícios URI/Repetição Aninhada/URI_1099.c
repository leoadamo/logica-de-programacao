#include <stdio.h>

int main (void) {
	
	int n, x, y, i, j, soma;
	
	scanf ("%d", &n);
	for (i = 0; i < n; i++) {
		soma = 0;
		scanf ("%d %d", &x, &y);
		if (x == y)
			printf ("%d\n", soma);
		else
			if (x < y) {
				for (j = x + 1; j < y; j++) {
					if (j % 2 == 1)
						soma += j;
				}
				printf ("%d\n", soma);
			}else {
				for (j = y + 1; j < x; j++) {
					if (j % 2 == 1)
						soma += j;
				}
				printf ("%d\n", soma);
			}	
	}
	
	return 0;
}
