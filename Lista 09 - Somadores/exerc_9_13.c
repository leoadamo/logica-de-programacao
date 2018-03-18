#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int c;
	float a, b;
	
	a = 500, b = 1500;
	
	do {
		
		a = a + ((a * 5.2) / 100);
		
		b = b + ((b * 1.8) / 100);
		
		c++;
		
	} while (a < b);
	
	printf ("%d Anos\n", c);
	
	system ("pause");
}
