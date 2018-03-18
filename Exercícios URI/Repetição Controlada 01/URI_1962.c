#include <stdio.h>
#include <math.h>

int main () {
	
	int qanos, a, t, i;
	
	scanf ("%d", &qanos);
	
	if (qanos >= 1 && qanos <= 100000) {
		
		for (i = 1; i <= qanos; i++) {
			
			scanf ("%d", &t);
			
			if (t >= 0 && t < pow(2, 31)) {
				
				if (t < 2015) {
					
					a = 2015 - t;
					
					printf ("%d D.C.\n", a);
					
				}else{
					
					a = t - 2014;
					
					printf ("%d A.C.\n", a);
				}
			}
		}
	}
	
	return 0;
}
