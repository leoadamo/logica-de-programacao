#include <stdio.h>

int main () {
	
	double s, res;
	int i, qt, num;
	
	s = 0, num = 1000, res = 0;
	
	printf ("Informe a quantidade de termos da serie: ");
	scanf ("%d", &qt);
	
	while (qt > 0) {
		
		for (i = 1; i <= qt; i++) {
			
			s = (double) num / i;
			
			if (i % 2 == 0)
			
				res = res - s;
				
			else
			
				res = res + s;	
				
			num = num - 3;	
				
		}
		
	printf ("%.6lf\n", res);	
	
	printf ("Informe a quantidade de termos da serie: ");
	scanf ("%d", &qt);	
	
	res = 0;
	
	num = 1000;
		
	}
		
	return 0;
}
