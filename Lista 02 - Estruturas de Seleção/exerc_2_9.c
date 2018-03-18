#include <stdio.h>
#include <stdlib.h>

main ()

{
	float A, S, P;
	
	printf ("Informe a Altura: ");
	scanf ("%f", &A);
	
	printf ("Informe o Sexo: ");
	scanf ("%f", &S);
	
	if (S == 1){
	
		P = (62.1 * A) - 44.7;
		printf ("O Peso Ideal e: %.3f\n", P);
	}
	else{
		P = (72.7 * A) - 58;
		printf ("O Peso Ideal e: %.2f\n", P);
	}
	system ("pause");		
}
