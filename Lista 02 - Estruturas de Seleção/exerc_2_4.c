#include <stdio.h>
#include <stdlib.h>

main ()

{
	int A, B;
	
	printf ("Informe um Valor: ");
	scanf ("%d", &A);
	
	printf ("Informe outro Valor: ");
	scanf ("%d", &B);
	
	if (A > B)
		printf ("O maior valor entre os dois e: %d\n", A);
	
	else 
		printf ("O maior valor entre os dois e: %d\n", B);
		
	system ("pause");	
}
