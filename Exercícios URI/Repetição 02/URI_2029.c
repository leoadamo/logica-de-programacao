#include <stdio.h>
#include <math.h>

int main () {
	
	double v, d, alt, area, n = 3.14, raio;
	
	/* Este loop s� ir� terminar quando o programa n�o conseguir ler n�meros (EOF). */
	while (scanf ("%lf %lf", &v, &d) == 2) {
		
		raio = d / 2;
		
		area = n * pow(raio, 2);
		
		alt = v / area;
		
		printf ("ALTURA = %.2lf\n", alt);
		
		printf ("AREA = %.2lf\n", area);
	}
	
	return 0;
}
