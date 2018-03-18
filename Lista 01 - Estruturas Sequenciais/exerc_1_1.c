#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main ()

{
	float a, b, c, AT, AQ, AR, AC;
	
	printf ("Informe valores de A, B, C:\n");
	scanf ("%f %f %f", &a, &b, &c);
	
	AT = (a*b)/2;
	AQ = pow (b, 2);
	AR = a*b;
	AC = M_PI * pow (c,2);
	
	printf ("AT = %.0f\n", AT);
	printf ("AQ = %.0f\n", AQ);
	printf ("AR = %.0f\n", AR);
	printf ("AC = %.6f\n", AC);
	
	system ("pause");	
}
