#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int c, a, b, v;
	
	c = 0, a = 0, b = 0;
	
	printf ("Informe um valor: ");
	scanf ("%d", &v);
	
	while (v >= 0){
		a = v;
		
		if (a < b){
			c++;
		}
		
		b = a;
		
		printf ("Informe um valor: ");
		scanf ("%d", &v);
	}
	
	printf ("%d\n", c);
	
	system ("pause");
}
