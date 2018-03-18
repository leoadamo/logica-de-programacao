#include <stdio.h>

int main () {
	
	float pi, res;
	int den, num, f;
	
	den = 1, num = 4, pi = 0, res = 0, f = 0;
	
	pi = (float) num / den;
	
	while (pi > 0.00001) {
		
		if (f == 0) {
				
			res = pi + res;
				
			f = 1;
				
		} else {
			
			res = res - pi;	
				
			f = 0;
					
		}
			
		den += 2;
			
		pi = (float) num / den;	
			
	}
	
	printf ("%f\n", res);
	
	return 0;	
}

