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
		printf ("Ordem Crescente: %d %d\n", B, A);
	
	else 
		printf ("Ordem Crescente: %d %d\n", A, B);
		
	system ("pause");		
}
