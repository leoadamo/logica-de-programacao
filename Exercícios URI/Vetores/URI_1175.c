#include <stdio.h>

int main (void) {
	
	int n[20], i, cc, t;
	
	for (i = 0; i < 20; i++) 
		scanf ("%d", &n[i]);	
	
	cc = 19;
		
	for (i = 0; i < 10; i++) {
		t = n[i];
		n[i] = n[cc];
		n[cc] = t;
		cc--; 
	}
	
	for (i = 0; i < 20; i++) 
		printf ("N[%d] = %d\n", i, n[i]);
		
	return 0;		
}
