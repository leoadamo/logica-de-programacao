#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int cd, qs;
	float sr;
	
	cd = 0;
	
	printf ("Informe a Capacidade de Surpimento Inicial de Blobs: ");
	scanf ("%d", &qs);
	
	do {
		
		sr = (float) qs / 2;
		
		qs = sr;
		
		cd++;
	
	} while (sr > 1);
	
	printf ("%d\n", cd);
	
	system ("pause");
}
