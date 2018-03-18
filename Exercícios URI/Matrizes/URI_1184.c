#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	char op[2];
	int i, j, cc;
	float m[12][12], soma;
	
	scanf ("%s", op);
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf ("%f", &m[i][j]);
		}
	}
	soma = 0.0;
	cc = 0;
	for (i = 1; i < 12; i++) {
		for (j = 0; j <= cc; j++) {
			soma += m[i][j];
		}
		cc++;
	}
	if (op[0] == 'M') 
		soma = soma / 66.0;
		
	printf ("%.1f\n", soma);
	
	return 0;	
}
