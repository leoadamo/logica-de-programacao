#include <stdio.h>

int main (void) {
	
	int n, x[20], c, i, menor, j;
	
	scanf ("%d", &n);
	for (i = 0; i < n; i++)
		scanf ("%d", &x[i]);
	
	while (n > 0) {
		menor = 9999;
		c = 1;	
		for (i = 0; i < n; i++) {
			if (x[i] < menor) {
				menor = x[i];
			}
			for (j = 0; j < n; j++) {
				if (j[i] == menor) {
					c++;
				}
			}
		}
	}
	
	return 0;
}
