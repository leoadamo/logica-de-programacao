#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v1, v2, s, i;
	
	printf ("Informe um valor: ");
	scanf ("%d", &v1);
	
	printf ("Informe outro valor: ");
	scanf ("%d", &v2);
	
	for (i = v1; i <= v2; i++)
		
		s = s + i;
	
	printf ("Soma: %d\n", s);
	
	system ("pause");	
}
