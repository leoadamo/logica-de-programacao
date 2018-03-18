#include <stdio.h>

int main (void) {
	
	int n, i, div, e, dif;
	
	scanf ("%d", &n);
	if (n >= 1 && n <= 1000) {
		e = 0;
		dif = 0;
		for (i = 0; i < n; i++) {
			scanf ("%d", &div);
			if (div >= 2 && div <= 10) {
				dif = div - 1;
				e += dif;
			}
		}
		printf ("%d\n", e);	
	}
	
	return 0;
}
