#include <stdio.h>

int main (void) {
	
	int n, x[1000], menor, i, pos;
	
	scanf ("%d", &n);
	if (n > 1 && n < 1000) {
		for (i = 0; i < n; i++) {
			scanf ("%d", &x[i]);
		}
		
		menor = 99999;
		for (i = 0; i < n; i++) {
			if (x[i] < menor) {
				menor = x[i];
				pos = i;
			}
		}
	}
	printf ("Menor valor: %d\nPosicao: %d\n", menor, pos);
	
	return 0;
}
