#include <stdio.h>

int main () {
	
	int i, a, b, c, s;
	float media;
	
	s = 0, c = 0;
	
	printf ("Informe dois valores: ");
	scanf ("%d %d", &a, &b);
	
	while (a == b) {
		
		printf ("Informe dois valores: ");
		scanf ("%d %d", &a, &b);
	}
	
	if (a < b) {
		
		for (i = a; i <= b; i++) {
			
			if (i % 2 == 1)
			
				s = s + i;
		}
		
	printf ("%d\n", s);	
		
	}else {
		
		for (i = a; i >= b; i--) {
		
			if (i % 3 == 0) {
				
				c++;
				
				s = s + i;
			}
		}
		
	media = s / c;	
	
	printf ("%.1f\n", media);	
		
	}
	
	return 0;	
}
