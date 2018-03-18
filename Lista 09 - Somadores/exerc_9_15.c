#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v, i;
	float f;
	
	f = 1;
	
	printf ("Informe um valor: ");
	scanf ("%d", &v);
	
	while (v < 0) {
		
		printf ("Informe um valor: ");
		scanf ("%d", &v);
		
	}
	
	for (i = v; i >= 1; i--) {
		
		f = f * i;
	}
	
	printf ("Fatorial de %d e' %.0f\n", v, f);
	
	system ("pause");
}
