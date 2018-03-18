#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int cod, c1, c2, c3, a, b, c;
	
	c1 = 0, c2 = 0, c3 = 0;
	
	printf ("Informe o codigo do Elevador: ");
	scanf ("%d", &cod);
	
	while (cod == 1 || cod == 2 || cod == 3) {
		
		if (cod == 1) {
			
			a = 1;
			c1++;
			
		}else
			if (cod == 2) {
				
				b = 2;
				c2++;
				
			}else {
				
				c = 3;
				c3++;
			}
		
		printf ("Informe o codigo do Elevador: ");
		scanf ("%d", &cod);
		
	}
	
	if (c1 > c2)
		
		if (c1 > c3) 
			
			printf ("%d\n", a);
		
		else
			
			printf ("%d\n", c);	
			
	else
		
		if (c2 > c3)
		
			printf ("%d\n", b);
		
		else
			
			printf ("%d\n", c);	
					
			
	system ("pause");	
					 		
}
