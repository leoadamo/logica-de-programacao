#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v1, v2, i, s;
	
	s = 0;
	
	printf ("Informe o PRIMEIRO valor: ");
	scanf ("%d", &v1);
	
	printf ("Informe o SEGUNDO valor: ");
	scanf ("%d", &v2);
	
	if (v1 > v2) {
		for (i = v2; i <= v1; i++) 
			
			s = s + i;
		
	printf ("SOMA: %d\n", s);
		
	}else {
		for (i = v1; i <= v2; i++) 
			
			s = s + i;
		
	printf ("SOMA: %d\n", s);
	
	}
	
	system ("pause");	
}
