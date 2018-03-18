#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()

{
	int r;
	double c;
	
	printf ("Informe o valor de R: ");
	scanf ("%d", &r);
	
	while (r > 0){
		c = 2 * M_PI * r;
		printf ("%.2lf\n", c);
		printf ("Informe o valor de R: ");
		scanf ("%d", &r);
	}
	
	system ("pause");
}
