#include <stdio.h>

int main (void) {
	
	int n, i, t, resp, tmax;
	
	scanf ("%d", &n);
	if (n >= 1 && n <= 100) {
		tmax = 20;
		for (i = 1; i <= n; i++) {
			scanf ("%d", &t);
			if (t >= 0 && t <= 20) {
				if (t < tmax) {
					tmax = t;
					resp = i;
				}	
			}
		}
		printf ("%d\n", resp);
	}
	
	return 0;
}
