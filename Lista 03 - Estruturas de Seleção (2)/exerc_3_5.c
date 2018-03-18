#include <stdio.h>
#include <stdlib.h>

main ()

{
	float A, B, OP, R;
	
	printf ("Informe um Valor: ");
	scanf ("%f", &A);
	
	printf ("Informe o segundo valor: ");
	scanf ("%f", &B);
	
	printf ("Informe a operacao desejada: ");
	scanf ("%f", &OP);
	
	if (OP == 1){
		R = A + B;
		printf ("O resultado e': %.0f\n", R);
	}
	if (OP == 2){
		R = A - B;
		printf ("O resultado e': %.0f\n", R);
	}
	if (OP == 3){
		R = A / B;
		printf ("O resultado e': %.1f\n", R);
	}
	if (OP == 4){
		R = A * B;
		printf ("O resultado e': %.0f\n", R);
	}
	system ("pause");			
}
