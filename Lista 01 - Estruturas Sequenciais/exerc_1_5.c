#include <stdio.h>
#include <stdlib.h>

main ()

{
	int C, F;
	
	printf("Informe o valor em Celsius: \n");
	scanf ("%d", &C);
	
	F = ((C/5)*9) + 32;
	
	printf ("Temperatura em F: %d\n", F);
	
	system ("pause");
}
