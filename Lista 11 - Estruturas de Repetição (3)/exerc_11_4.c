#include <stdio.h>

int main () {
	
	float pi, res;
	int i, den, num, qt, f;
	
	den = 1, pi = 0, res = 0, num = 4, f = 0;
	
	printf ("Informe a quantidade de termos da Serie: ");
	scanf ("%d", &qt);
	
	while (qt > 0) {
		
		for (i = 1; i <= qt; i++) {
			
			pi = (float) num / den;
			
			if (f == 0) {
				
				res = pi + res;
				
				f = 1;
				
			} else {
			
				res = res - pi;	
				
				f = 0;
					
			}
			
			den += 2;	
			
		}
		
		printf ("%f\n", res);
	
		printf ("Informe a quantidade de termos da Serie: ");
		scanf ("%d", &qt);	
	
		den = 1, pi = 0, res = 0, num = 4, f = 0;
			
	}
	
	return 0;
}
