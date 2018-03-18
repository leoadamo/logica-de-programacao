#include <stdio.h>

int main () {
	
	float i, s, num, res;
	
	s = 0, num = 1, res = 0;
	
	for (i = 1; i <= 50; i++) {
		
		s = num / i;
		
		num = num + 2;
		
		res = res + s;
	}
	
	printf ("%f\n", res);
	
	return 0;
}
