#include <stdio.h>

int main (void) {
	
	int v, cpar, cimpar, cp, cn, i;
	
	cpar = 0, cimpar = 0, cp = 0, cn = 0;
	for (i = 0; i < 5; i++) {
		scanf ("%d", &v);
		
		if (v != 0) {
			if (v % 2 == 0) {
				cpar++;
					if (v > 0)
						cp++;
					else
						cn++;	
			}else{
				cimpar++;
					if (v > 0)
						cp++;
					else
						cn++;
			}
		}else
			cpar++;
	}
	printf ("%d valor(es) par(es)\n", cpar);
	printf ("%d valor(es) impar(es)\n", cimpar);
	printf ("%d valor(es) positivo(s)\n", cp);
	printf ("%d valor(es) negativo(s)\n", cn);	
	
	return 0;
}
