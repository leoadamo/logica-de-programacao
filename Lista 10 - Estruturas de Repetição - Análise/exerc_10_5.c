#include <stdio.h>

int main () {
	
	int a, b;
	
	a = 0, b = 0;
	
	while (a == b) {
		
		do {
		
			if (a < 2) {
			
				if (b < 2)
			
					printf ("%d\n", a);
				
				else
			
					a = a + 5;
				
			b = b + 2;
					
			}else {
			
				printf ("%d %d\n", a, b);
			
				if (a > b)
			
					b = b + a;
			}
			
		} while (b <= 8);
	}
	
	return 0;
}
