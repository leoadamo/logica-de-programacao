#include <stdio.h>

int main (void) {
	
	int n, i, ca, cb;
	
	scanf ("%d", &n);
	ca = 1, cb = 4;
	for (i = 0; i < n; i++) {
		while (ca <= cb) {
			if (ca % 4 == 0)
				printf ("PUM\n");
			else
				printf ("%d ", ca);	
			ca++;	
		}
		cb += 4;
	}
	
	return 0;
}
