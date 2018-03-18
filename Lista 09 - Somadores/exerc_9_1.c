#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v, i, s;
	float m;
	
	s = 0;
	
	for (i = 0; i < 10; i++) {
		
		printf ("Informe um valor: ");
		scanf ("%d", &v);
		
		s = s + v;
	}
	
	m = (float) s / 10;
	
	printf ("Media Total: %.1f\n", m);
	
	system ("pause");
}
