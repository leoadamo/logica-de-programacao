#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float v1, v2, d;
	
	printf ("Informe o primeiro valor: ");
	scanf ("%f", &v1);
	
	printf ("Informe o segundo valor: ");
	scanf ("%f", &v2);
	
	while (v2 == 0) {
		printf ("Valor invalido\n");
		printf ("Informe o segundo valor: ");
		scanf ("%f", &v2);
	}
	
	d = v1 / v2;
	
	printf ("%.1f\n", d);
	
	system ("pause");	
}
