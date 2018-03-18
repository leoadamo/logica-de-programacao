#include <stdio.h>

int main (void) {
	
	int x, y, si, i;
	
	si = 0;
	
	scanf ("%d", &x);
	scanf ("%d", &y);
	
	if (x == y)
		printf ("%d\n", si);
	
	else {
		if (x > y) {
			if (x % 2 == 0) {
				for (i = x; i > y; i--){
					if (i % 2 == 1 || i % 2 == -1)
						si += i;
				}
				printf ("%d\n", si);
			}else {
				for (i = x - 1; i > y; i--) {
					if (i % 2 == 1)
						si += i;
				}
				printf ("%d\n", si);
			}
		}else {
			if (y % 2 == 0) {
				for (i = y; i > x; i--){
					if (i % 2 == 1 || i % 2 == -1)
						si += i;
				}
				printf ("%d\n", si);
			}else {
				for (i = y - 1; i > x; i--) {
					if (i % 2 == 1)
						si += i;
				}
				printf ("%d\n", si);
			}
		}
	}
	
	return 0;	
}
