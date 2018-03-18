#include <stdio.h>

int main (void) {
	
	int n, i, res, cm, cj;
	
	do {
		
		cm = 0, cj = 0;
		scanf ("%d", &n);
		
		if (n > 0) {
			if (n >= 1 && n <= 10000) {
				for (i = 0; i < n; i++) {
					scanf ("%d", &res);
					
					if (res == 0 || res == 1)
						if (res == 0)
							cm++;
						else
							cj++;			
				}
				printf ("Mary won %d times and John won %d times\n", cm, cj);
			}
		}
		
	} while (n > 0);
	
	return 0;
}
