#include <stdio.h>

int main () {
	
	int a, b, v[10], i, q;
	
	printf ("Informe tres valores: ");
	scanf ("%d %d %d", &a, &b, &q);
	
	
	for (i = 0; i <= q - 1; i++) {
		
		if (i % 2 == 0)
		
			v[i] = a;
			
		else
			
			v[i] = b;					
	}
	
	for (i = 0; i <= q - 1; i++)
	
		printf ("%d ", v[i]);
		
	
	return 0;	
}
