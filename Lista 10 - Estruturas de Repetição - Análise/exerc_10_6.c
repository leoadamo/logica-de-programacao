#include <stdio.h>

int main () {
	
	int a, b;
	
	a = 1, b = 2;
	
	do {
		
		if (a == b)
		
			if (a < 0)
			
				printf ("%d\n", a);
				
			else 
			
				if (b > 0)
				
					printf ("%d\n", b);
					
				else
				
					printf ("%d\n", a);	
					
		else {
			
			do {
				
				a = a + b;
				
				b = b + a;
				
				printf ("%d %d\n", a, b);
				
			} while (a <= 7);
		}
		
		do {
			
			a = 0;
			
			while (a < 15) {
				
				a = a + b + 1;
				
				printf ("%d\n", a);
			}
			
		} while (b <= 10);
		
		b = b + a;			
						
	} while (b <= 20);
	
	printf ("%d\n", b);
	
	return 0;
}
