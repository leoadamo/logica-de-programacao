#include <stdio.h>
#include <math.h>


int main () {
	
	int i, n, x;
	
	scanf ("%d", &n);
	
	if (n < 10000) {
	
		for (i = 1; i <= n; i++) {
		
			scanf ("%d", &x);
			
			if (x > pow (-10, 7) && x < pow (10, 7)) {
				
				if (x == 0)
				
					printf ("NULL\n");
					
				else	
				
					if (x % 2 == 0)
				
						if (x > 0)
					
							printf ("EVEN POSITIVE\n");
						
						else
					
							printf ("EVEN NEGATIVE\n");	
							
					else
					
						if (x > 0)
						
							printf ("ODD POSITIVE\n");
						
						else
						
							printf ("ODD NEGATIVE\n");	
									
			}
		}
	}
	
	return 0;
}
