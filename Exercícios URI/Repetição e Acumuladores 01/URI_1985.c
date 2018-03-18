#include <stdio.h>

int main (void) {
	
	int cod, i, qtd, p;
	float val;
	
	scanf ("%d", &qtd);
	if (qtd >= 1 && qtd <= 5) {
		val = 0;
		for (i = 0; i < qtd; i++) {
			scanf ("%d %d", &cod, &p);
			if (p >= 1 && p <= 500) {
				switch (cod) {
					case 1001:	val += p * 1.50;
								break;
							
					case 1002: 	val += p * 2.50;
								break;
							
					case 1003:	val += p * 3.50;
								break;
				
					case 1004: 	val += p * 4.50;
								break;
							
					case 1005: 	val += p * 5.50;
								break;
				}
			}
		}
		printf ("%.2f\n", val);
	}
	
	return 0;
}
