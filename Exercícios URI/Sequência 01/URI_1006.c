#include <stdio.h>
#include <stdlib.h>

int main ()

{
	double a, b, c, m;
	
	scanf ("%lf", &a);
	scanf ("%lf", &b);
	scanf ("%lf", &c);

	m = ((a * 2) + (b * 3) + (c * 5)) / 10;	
	
	printf ("MEDIA = %.1lf\n", m);
		
}
