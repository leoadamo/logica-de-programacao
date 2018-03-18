#include <stdio.h>

int main () {
	
	int v[10], i, n = 101;
	
	for (i = 0; i <= 9; i++) {
	
		v[i] = n;
		
		n++;
	}
	
	for (i = 0; i <= 9; i++)
	
		printf ("%d ", v[i]);
	
		
	printf ("\n");


	return 0;			
}
