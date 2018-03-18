#include <stdio.h>

int main (void) {
	
	int x, soma, cp;
	
	do {
		scanf ("%d", &x);
		if (x != 0) {
			cp = 0;
			soma = 0;
			while (cp < 5) {
				if (x % 2 == 0) {
					soma += x;
					cp++;
				}
				x++;
			}
			printf ("%d\n", soma);	
		}
	} while (x != 0);
	
	return 0;
}
