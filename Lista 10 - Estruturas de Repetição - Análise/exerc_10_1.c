#include <stdio.h>

int main () {
	
	int a, b;
	
	a = 0, b = 5;
	
	while (a < b) {
		
		a = a + 1;
		
		b = b - 1;
		
		printf ("%d %d\n", a, b);
	}
	
	return 0;	
}
