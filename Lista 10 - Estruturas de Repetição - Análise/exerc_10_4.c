#include <stdio.h>

int main () {
	
	int a, b;
	
	a = 0, b = 5;
	
	while (a < 10) {
		
		if (b < 6) {
			
			while (a < 3) {
				
				a = a + 1;
				
				b = b + a;
			}
			
		}else {
		
			a = a + b;
		}
			
		if (a <= 3) {
			
			printf ("%d %d\n", a, b);
			
			a++;
			
		}else {
			
			do {
			
				printf ("%d\n", a);
				
				a++;
				
			} while (a <= 16);
		}	
	}
	
	return 0;
}
