#include <stdio.h>
#include <stdlib.h>

main ()

{
	int F, C;
	
	printf("Informe o valor em Fahrenheit: \n");
	scanf ("%d", &F);
	
	C = ((F-32)/9)*5;
	
	printf ("Temperatura em C: %d\n", C);
	
	system ("pause");
}
