#include <stdio.h>

int main (void) {
	
	int n, a, b, ca, cb, i;
	
	while (scanf ("%d", &n) != 0) {
		if (n >= 0 && n <= 10) {
			if (n == 0)
				break;
			ca = 0; cb = 0;
			for (i = 0; i < n; i++) {
				scanf ("%d %d", &a, &b);
				if (a == b) {
					ca += 0;
					cb += 0;
				}else
					if (a > b)
						ca++;
					else
						cb++;
			}
		}
		printf ("%d %d\n", ca, cb);
	}
	
	return 0;
}
