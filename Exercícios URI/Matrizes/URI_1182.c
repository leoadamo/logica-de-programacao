#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int c, i, j;
	float m[12][12], soma, media;
	char op[2];
	
	scanf ("%d", &c);
	if (c >= 0 && c <= 11) {
		scanf ("%s", op);
		for (i = 0; i < 12; i++) {
			for (j = 0; j < 12; j++) {
				scanf ("%f", &m[i][j]);
			}
		}
		soma = 0.0;
		for (i = 0; i < 12; i++) {
			soma += m[i][c];
		}
		if (op[0] == 'M') 
			soma = soma / 12;
			
		printf ("%.1f\n", soma);	
	}
	
	return 0;
}
