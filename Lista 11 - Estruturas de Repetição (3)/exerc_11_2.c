#include <stdio.h>

int main () {
	
	float s, den, res;
	int i;
	
	s = 0, res = 0, den = 1;
	
	
	for (i = 1; i <= 10; i++) {
		
		den = i * i;
		
		s = i / den;
		
		if (i % 2 == 0) 
			
			res = res - s;
			
		else
		
			res = res + s;	
		
	}
	
	printf ("%f\n", res);
	
	return 0;
}
