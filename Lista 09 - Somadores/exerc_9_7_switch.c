#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int cod, c1, c2, c3, a, b, c;
	
	c1 = 0, c2 = 0, c3 = 0;
	
	printf ("Informe o numero do Elevador: ");
	scanf ("%d", &cod);
	
	while (cod == 1 || cod == 2 || cod == 3) {
		
		switch (cod) {
			
			case 1: a = 1;
					c1++;
					break;
					
			case 2: b = 2;
					c2++;
					break;
			
			case 3: c = 3;
					c3++;
					break;								
		}
		
	printf ("Informe o numero do Elevador: ");
	scanf ("%d", &cod);
					
	}
	
	if (c1 > c2 && c1 > c3)
		
		printf ("%d\n", a);
	
	if (c2 > c1 && c2 > c3)
	
		printf ("%d\n", b);
		
	if (c3 > c2 && c3 > c1)
	
		printf ("%d\n", c);	
	
	system ("pause");
}
