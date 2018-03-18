#include <stdio.h>
#include <stdlib.h>

int main ()

{
	double a, b, c, atr, ac, atrap, aq, ar, pi;
	
	scanf ("%lf %lf %lf", &a, &b, &c);
	
	
	pi = 3.14159;
	
	atr = a * c / 2;
	ac = pi * (c * c);
	atrap = ((a + b) * c) / 2;
	aq = b * b;
	ar = a * b;
	
	printf ("TRIANGULO: %.3lf\n", atr);
	printf ("CIRCULO: %.3lf\n", ac);
	printf ("TRAPEZIO: %.3lf\n", atrap);
	printf ("QUADRADO: %.3lf\n", aq);
	printf ("RETANGULO: %.3lf\n", ar);
	
}
